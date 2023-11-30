#include <string>
#include <iostream>

struct MyStruct {
    int i;
    std::string str;
};

MyStruct getStruct() {
    return MyStruct{43, "Karl"};
}

int main() {
    auto [_,val1]= getStruct();
    std::cout << val1 << std::endl;
    return 0;
}
