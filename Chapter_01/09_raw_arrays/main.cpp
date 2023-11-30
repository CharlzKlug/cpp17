#include <iostream>
#include <array>

auto f() {
    return std::array<int, 3> {1, 2, 3};
}

int main() {
    int arr[] = {47, 11};
    auto [x,y] = arr;
    std::cout << "x = " << x << ", y = " << y << std::endl;

    auto [x2,y2] = arr;
    std::cout << "x2 = " << x2 << ", y2 = " << y2 << std::endl;

    auto [a,b,c]= f();
    std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
    
    return 0;
    
}
