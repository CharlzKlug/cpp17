#include <fstream> // For std::ofstream
#include <vector> // For std::vector
#include <mutex> // For std::lock_guard
#include <iostream> // For std::cout

std::ofstream getLogStrm() {
    std::ofstream out;
    out.open("test.tmp");
    return out;
}

int main() {
    std::vector<int> coll{1, 2, 3};
    if (std::ofstream strm = getLogStrm(); coll.empty()) {
	strm << "<no data>\n";
    } else {
	for (const auto& elem : coll) {
	    strm << elem << std::endl;
	}
    }


    std::mutex collMutex;
    if (std::lock_guard<std::mutex> lg{collMutex}; !coll.empty()) {
	std::cout << coll.front() << std::endl;
    }

    return 0;
}
