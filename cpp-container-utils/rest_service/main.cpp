#include "container_service.hpp"
#include <iostream>

int main() {
    try {
        net::io_context ioc;
        ContainerService service(ioc, 8080);

        std::cout << "Сервис запущен на порту 8080" << std::endl;
        ioc.run();
    }
    catch (const std::exception& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}