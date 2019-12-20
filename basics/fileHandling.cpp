#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ofstream ofs;
    ofs.open("test.txt");

    if (ofs.is_open()) {
        ofs << "Hallo Person";
        ofs.close();
    }

    return 0;
}
