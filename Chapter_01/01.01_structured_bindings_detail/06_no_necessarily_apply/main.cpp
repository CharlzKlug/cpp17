#include <string>
#include <iostream>

struct MyStruct {
    int i;
    std::string str;
};

struct S {
    const char x[6];
    const char y[3];
};

int main() {
    MyStruct ms{42, "hello"};
    alignas(16) auto [u,v] = ms;
    std::cout << u << ", " << v << std::endl;

    S s1{};
    auto [a, b] = s1;
    std::cout << a << ", " << b << std::endl;

}
