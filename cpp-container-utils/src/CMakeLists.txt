cmake_minimum_required(VERSION 2.8)
project(ContainerUtilsLib)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(container_utils STATIC
    src/container_utils.cpp
    src/list_utils.cpp
)

target_link_libraries(container_utils)