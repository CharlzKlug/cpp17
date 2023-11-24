#include <string> // For std::string
#include <iostream> // For std::cout

struct MyStruct {
    int i;
    std::string str;
};

int main() {
    MyStruct ms{42, "hello"};
    const auto& [u,v] = ms;
    std::cout << "Before change:\n";
    std::cout << u << ", " << v << std::endl;
    ms.i= 77;
    std::cout << "After change:\n";
    std::cout << u << std::endl;

    auto& [u1,v1] = ms;
    ms.i = 73;
    std::cout << u << std::endl;
    u1 = 99;
    std::cout << ms.i << std::endl;
    return 0;
}
