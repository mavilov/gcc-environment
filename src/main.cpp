#include <iostream>
#include <version>

int main() {
    // Check if we're at least on C++20
#if __cplusplus >= 202002L
    std::cout << "Hello, world! Compiled with C++20 or newer.\n";
#else
    std::cout << "Hello, world!\n";
#endif
    return 0;
}
