# find_package(fmt REQUIRED)
find_package(spdlog REQUIRED)

add_executable(winsock main.cpp)
target_link_libraries(winsock
  PRIVATE
  Ws2_32
  # fmt::fmt-header-only
  spdlog::spdlog_header_only
)
