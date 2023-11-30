#include <iostream>
#include <array>

auto getArray() {
    return std::array<int, 4> {1, 2, 3, 5};
}

int main() {
    auto [i,j,k,l] = getArray();
    std::cout << "i = " << i
	      << ", j = " << j
	      << ", k = " << k
	      << ", l = " << l
	      << std::endl;

    std::array<int, 4> stdarr {1, 2, 3, 4};
    auto& [i2, j2, k2, l2]= stdarr;
    i2 += 10;
    std::cout << "i2 = " << i2
	      << ", j2 = " << j2
	      << ", k2 = " << k2
	      << ", l2 = " << l2
	      << std::endl;
    
    return 0;
}
