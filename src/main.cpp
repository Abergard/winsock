#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <winsock2.h>

#include <iphlpapi.h>
#include <spdlog/spdlog.h>
#include <stdio.h>
#include <ws2tcpip.h>

int main()
{
    spdlog::set_level(spdlog::level::debug);
    spdlog::debug("Hello winsock user\n");

    WSADATA wsaData;
    
    constexpr auto winsock2_2_version = MAKEWORD(2, 2);
    const auto iResult = WSAStartup(winsock2_2_version, &wsaData);
    if (0 != iResult)
    {
        spdlog::debug("WSAStartup failed {}\n", iResult);
    }
}
