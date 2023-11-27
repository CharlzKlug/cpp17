#include <string>
#include <iostream>

struct MyStruct {
    int d;
    std::string s;
};

int main() {
    MyStruct ms = {42, "Jim"};
    auto&& [v,n] = std::move(ms);
    std::cout << v << " " << n << std::endl;
    std::cout << "ms.s: " << ms.s << '\n';
    std::string s = std::move(n);
    std::cout << "ms.s: " << ms.s << '\n';
    std::cout << "n: " << n << '\n';
    std::cout << "s: " << s << '\n';
    std::cout << "ms.s: " << ms.s << ", ms.d: " << ms.d << '\n';

    MyStruct ms2 = {43, "Jim"};
    auto [v2,n2] = std::move(ms2);
    std::cout << "ms2.s: " << ms2.s << '\n';
    std::cout << "ms2.d: " << ms2.d << '\n';
    std::cout << "n2: " << n2 << '\n';
    std::cout << "v2: " << v2 << '\n';
    return 0;
}
