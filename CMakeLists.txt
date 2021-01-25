cmake_minimum_required(VERSION 3.12)
project(Hello VERSION 1.0.0)

add_library(
    primes
    src/includes/primes.hpp
    src/includes/primes.cpp  
)

add_executable(test_exec src/main.cpp)

target_link_libraries(test_exec PRIVATE primes)