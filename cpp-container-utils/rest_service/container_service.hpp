#ifndef CONTAINER_SERVICE_HPP
#define CONTAINER_SERVICE_HPP

#include <boost/asio.hpp>
#include <boost/beast.hpp>
#include <boost/bind.hpp>
#include <boost/lexical_cast.hpp>
#include <vector>
#include <sstream>

#include "container_utils.hpp"

namespace net = boost::asio;
namespace beast = boost::beast;
namespace http = beast::http;
typedef boost::asio::ip::tcp tcp;

class ContainerService {
public:
    ContainerService(net::io_context& ioc, short port);

private:
    typedef boost::shared_ptr<tcp::socket> socket_ptr;

    void startAccept();
    void handleAccept(socket_ptr socket, const boost::system::error_code& error);
    void handleRead(socket_ptr socket,
        boost::shared_ptr<http::request<http::string_body> > request,
        const boost::system::error_code& error);

    void handleFactorials(socket_ptr socket,
        boost::shared_ptr<http::request<http::string_body> > request);

    void handleRemoveDuplicates(socket_ptr socket,
        boost::shared_ptr<http::request<http::string_body> > request);

    void sendResponse(socket_ptr socket, int status_code, const std::string& body);
    void sendErrorResponse(socket_ptr socket, int status_code, const std::string& message);
    void handleWrite(socket_ptr socket, const boost::system::error_code& error);

    tcp::acceptor acceptor_;
};

#endif // CONTAINER_SERVICE_HPP