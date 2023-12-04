// #include "customer1.hpp"
#include "structbind1.hpp"
#include <iostream> // For std::cout

int main() {
    Customer c {"Tim", "Starr", 42};
    auto [f, l, v] = c;
    std::cout << "f/l/v: " << f << ' ' << l << ' ' << v << std::endl;
    
    std::string s= std::move(f);
    l= "Waters";
    v += 10;
    std::cout << "f/l/v: " << f << ' ' << l << ' ' << v << std::endl;
    std::cout << "c: " << c.getFirst() << ' '
	      << c.getLast() << ' ' << c.getValue() << std::endl;
    std::cout << "s: " << s << std::endl;

    int k= 79;
    std::cout << "k: " << k << std::endl;
    int t= std::move(k);
    std::cout << "t: " << t << std::endl;
    std::cout << "k: " << k << std::endl;
    return 0;
}
