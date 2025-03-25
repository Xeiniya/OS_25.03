cmake_minimum_required(VERSION 2.8)
project(ContainerUtilsTests)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(test_container_utils 
    test_factorials.cpp
    test_duplicates.cpp
    test_list_reverse.cpp
)

target_link_libraries(test_container_utils 
    container_utils 
    ${GTEST_LIBRARIES} 
    pthread
)

add_test(NAME ContainerUtilsTest COMMAND test_container_utils)