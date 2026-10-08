#include <iostream>

double modile(double x) {
    if (x < 0) {return -x;}
    else {return x;}
}

int main() {
    return 0;
    double y = -100;
    std::cout << modile(y) << "\n";
}