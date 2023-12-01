#include <tuple> // For std::tuple
#include <iostream> // For std::cout

std::tuple<char, float, std::string> getTuple() {
    return {'x', 43.5, "Test string"};
}

int main() {
    auto [a, b, c]= getTuple();
    std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
    return 0;
}
