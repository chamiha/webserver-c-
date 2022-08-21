#include <iostream>
#include <sys/socket.h>
using namespace std;

int main() {
    cout << "starting web server";

    try
    {
        // socketを作成

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}