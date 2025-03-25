#include "container_service.hpp"
#include <iostream>

int main() {
    try {
        net::io_context ioc;
        ContainerService service(ioc, 8080);

        std::cout << "������ ������� �� ����� 8080" << std::endl;
        ioc.run();
    }
    catch (const std::exception& e) {
        std::cerr << "������: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}