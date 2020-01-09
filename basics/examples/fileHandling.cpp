#include <iostream>
#include <fstream>

int main() {
    // Ofstream is a handler for writting and reading to textfiles
    // Ofstream.open opens a file with the given name
    // ofstream writes to file
    // ofs.close() is important to get rescoures back!
    ofstream ofs;
    ofs.open("test.txt");

    if (ofs.is_open()) {
	ofs << "Hallo Person";
        ofs.close();
    }

    return 0;
}
