#include <iostream>
#include <fstream>

using namespace std;

int main() {
    //Ofstream is a Handler for writting and reading to textfiles
    //Ofstream.open öffnet eine text Datei mit dem entsprechenden namen
    //ofstream schreibt in die Textdatei
    //ofs.close() is important to get rescoures back!
    ofstream ofs;
    ofs.open("test.txt");

    if (ofs.is_open()) {
	ofs << "Hallo Person";
        ofs.close();
    }

    return 0;
}
