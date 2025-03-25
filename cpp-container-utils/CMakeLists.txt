cmake_minimum_required(VERSION 2.8)
project(ContainerUtils CXX)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(BUILD_TESTS "Собирать модульные тесты" ON)
option(BUILD_REST_SERVICE "Собирать REST сервис" ON)

find_package(Boost REQUIRED COMPONENTS system thread)

add_subdirectory(src)

if(BUILD_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif()

if(BUILD_REST_SERVICE)
    add_subdirectory(rest_service)
endif()

if(MSVC)
    add_definitions(-D_CRT_SECURE_NO_WARNINGS)
else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")
endif()