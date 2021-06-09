#include <iostream>
#include <string>
std::string a, b;
int main() {
    std::cin >> a >> b;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < 92) {
            a[i] += 32;
        }
        if (b[i] < 92) {
            b[i] += 32;
        }
    }
    if (a < b) {
        std::cout <<"-1";
    } else if (a > b) {
        std::cout <<"1";
    } else if (a == b) {
        std::cout <<"0";
    }
}
