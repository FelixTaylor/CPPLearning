#include <iostream>

using namespace std;

int main() {

    // Use signed stuff! If using unsigned integers there is a possiblity that
    // there is going to happen wired stuff!
    for (signed i = 5; i >= 0; i--) {
        cout << i << endl;
    }
}
