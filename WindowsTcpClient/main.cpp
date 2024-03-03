#include "WindowsTcpClient.h"

int main() {
    WindowsTcpClient client("www.example.com", 443);
    if (client.Connect() == 1) {
        std::cout << "Not connected" << std::endl;
        return 1;
    }
    std::cout << "Connected" << std::endl;
    return 0;
}