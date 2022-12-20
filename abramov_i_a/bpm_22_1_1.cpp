#include <iostream>
#include <cmath>
#include <algorithm>

int main() {
    double a = 0.1;
    double b = 1;
    double e = 0.0001;
    double d = 0.05;
    
    for (a; a <= b; a += d) {
        double s = 0;
        double x = 0;
        
        for (long long int i = 1; i >= 0; i++) {
            x = (std::pow(-1, i + 1)) * ((std::pow(x, 2 * i - 1)) / ( 4 * (std::pow(i, 2)) - 1));
            s += x;
            if (std::abs(x) < e) {
                std::cout << "x: " << a << " " << "E: " << s  << std::endl;
                break;
            }
        }
    }
    return 0;
}
