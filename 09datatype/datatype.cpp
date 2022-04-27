#include <iostream>

int main () {
    int a = 0;
    std::cout << "Ukuran int: " << sizeof(a) << " byte\n";
    std::cout << "Nilai max: " << std::numeric_limits<int>::max() << "\n";
    std::cout << "Nilai min: " << std::numeric_limits<int>::min() << "\n";

    long b = 0;
    std::cout << "Ukuran long: " << sizeof(b) << " byte\n";
    std::cout << "Nilai max: " << std::numeric_limits<long>::max() << "\n";
    std::cout << "Nilai min: " << std::numeric_limits<long>::min() << "\n";

    return 0;
}

