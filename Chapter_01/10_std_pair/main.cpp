#include <map>
#include <iostream>

int main() {
    std::map<std::string, int> coll;
    auto [pos, ok]= coll.insert({"new", 42});
    if (!ok) {
	std::cerr << "Es gibt ein Fehler!\n";
    }
    return 0;
}
