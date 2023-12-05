#include "structbind2.hpp"
#include <iostream>

int main() {
    Customer c("Tim", "Starr", 42);
    auto [f, l, v]= c;
    std::cout << "f/l/v: " << f << ' ' << l << ' ' << v << std::endl;

    auto&& [f2, l2, v2]= c;
    std::string s= std::move(f2);
    f2= "Ringo";
    v2 += 10;
    std::cout << "f2/l2/v2: " << f2 << ' ' << l2 << ' ' << v2 << std::endl;
    std::cout << "c: " << c.firstname() << ' ' << c.lastname() << ' '
	      << c.value() << std::endl;
    std::cout << "s: " << s << std::endl;
    return 0;
}
