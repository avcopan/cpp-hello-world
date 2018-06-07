#include <iostream>

int main() {
    int a[3] = {0, 1, 2};
    /* Comment this line in to fail the cppcheck: */
    // a[3] = 4;
    std::cout << "Hello world!" << std::endl;
}
