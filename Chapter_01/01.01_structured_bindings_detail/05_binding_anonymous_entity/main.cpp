#include <string> // For std::string
#include <iostream> // For std::cout
#include <cassert> // For assert

struct MyStruct {
    int i= 0;
    std::string s;
};

MyStruct ms;

MyStruct getStruct() {
    return MyStruct{42, "hello"};
}

int main() {
    auto [u,v] = ms;
    assert(&((MyStruct*)&u)->s == &v);
    return 0;

}
