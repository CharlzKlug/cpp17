#include <filesystem>
#include <iostream>

int main() {
    std::string name= "/home/user/";
    switch (std::filesystem::path p(name); status(p).type()) {
    case std::filesystem::file_type::not_found:
	std::cout << p << " not found\n";
	break;
    case std::filesystem::file_type::directory:
	std::cout << p << ":\n";
	for (auto& e : std::filesystem::directory_iterator(p)) {
	    std::cout << "- " << e.path() << '\n';
	}
	break;
    default:
	std::cout << p << " exists\n";
	break;
    }
    return 0;
}
