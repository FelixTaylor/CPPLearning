#include <iostream>
using namespace std;

struct zahl {
    static int timesTwo(int n) {
        return (n * 2);
    }
};

int main () {
   cout << zahl::timesTwo(198) << endl;
   return 0;
}
