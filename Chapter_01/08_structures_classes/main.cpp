#include <iostream>

struct B {
    int a= 1;
    int b= 2;
};

struct D1 : B {};

struct D2 : B {
    int c= 3;
};

int main() {
    auto [x,y]= D1{};
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;

    auto [t,r]= D2{};
}
