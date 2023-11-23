#include <string> // For std::string
#include <iostream> // For std::cout
#include <map> // For std::map

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
    std::cout << u << ", " << v << std::endl;
    auto [id, val]= getStruct();
    std::cout << "id = " << id << ", val = " << val << std::endl;

    std::map<int, int> mymap{{0, 1}, {2, 3}};
    for (const auto& elem : mymap) {
	std::cout << elem.first << ": " << elem.second << '\n';
    }

    for (const auto& [key, val] : mymap) {
	std::cout << key << ": " << val << '\n';
    }
    return 0;

}
