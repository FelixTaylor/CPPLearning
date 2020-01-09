// Lese mit scanf und cin ein Wort, ein Zeichen und eine Fließkommazahl ein und
// geben Sie die Inhalte mit printf und cout wieder aus.

#include <iostream>
#include <stdio.h>

int main() {
    float zahl {};
    char name [25] {};
    char buchstabe {};

    // std::cout<< "gib einen Namen ein:" << std::endl;
    // std::cin >> name;
    // std::cout << "gib eine Zahl ein:" << std::endl;
    // std::cin >> zahl;
    // std::cout << "gib einen Buchstaben ein:" << std::endl;
    // std::cin >> buchstabe;
    // std::cout << "deine eingegebenen Daten sind:" << std::endl;
    // std::cout << name << ", " << zahl << ", " << buchstabe << std::endl;
    // std::cout << zahl << std::endl;

    printf("Gib einen Namen ein:");
    scanf("%24s",name);
    printf("Gib eine Zahl ein:");
    scanf("%f", &zahl);
    printf("Gib einen Buchstaben ein:");
    scanf("%s", &buchstabe);

    // Ausgabe
    printf("\nDein angegebener Name: %s\n", name);
    printf("Dein angegebene Zahl: %f\n", zahl);
    printf("Dein angegebener Buchstabe: %s\n", &buchstabe);

    return 0;
}
