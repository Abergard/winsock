cmake_minimum_required(VERSION 3.12)

project(winsock CXX)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_CXX_STANDARD 20)

option(FORCE_BUILD_CONSOLE_APP "TRUE - console application, FALSE (default) - depends on OS" FALSE)
option(ENABLE_COVERAGE "Enable coverage reporting for gcc/clang" FALSE)
option(ENABLE_TESTING "Enable building tests" FALSE)

if(ENABLE_COVERAGE)
  add_compile_options(--coverage -O0 -g)
  link_libraries(--coverage)
endif()

if(ENABLE_TESTING)
  enable_testing()
  include(GoogleTest)
endif()

add_subdirectory(src)
