#include <string>
#include <iostream>

class MyClass {
private:
    static inline std::string name= "123";
public:
    std::string getStr() {
	return name;
    }
};

inline MyClass myGlobalObj;

int main() {
    std::cout << myGlobalObj.getStr() << std::endl;
    return 0;
}
