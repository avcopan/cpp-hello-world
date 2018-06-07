#include <iostream>

int main() {
    /* Comment these lines in to fail the cppcheck: */
    int a[3] = {0, 1, 2};
    a[3] = 4;
    std::cout << "Hello world!" << std::endl;
}
