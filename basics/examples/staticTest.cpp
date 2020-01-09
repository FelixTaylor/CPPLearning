#include <iostream>

struct zahl {
    static int timesTwo(int n) {
        return (n * 2);
    }
};

int main () {
    std::cout << zahl::timesTwo(198) << std::endl;
   return 0;
}
