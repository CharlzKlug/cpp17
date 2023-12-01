#include "customer1.hpp"
#include <iostream> // For std::cout

int main() {
    Customer myCustomer {"Vasya", "Pupkin", 49};
    std::cout << myCustomer.getFirst() << std::endl;
    std::cout << myCustomer.getLast() << std::endl;
    std::cout << myCustomer.getValue() << std::endl;
    
    return 0;
}
