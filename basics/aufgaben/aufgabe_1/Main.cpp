// Schreibe ein Programm, das den Namen des Benutzers einliest und ihn dann mit
// seinem Namen begrüßt. Verwende sowohl printf bzw. scanf als auch cout und cin.

#include<iostream>
//#include<stdio.h>

int main() {
    char name[25];

    // std::cout << "Wie heißt du?" << std::endl;
    // std::cin >> name;
    // std::cout << "Hallo " << name << "!" << std::endl;

    printf("Wie heißt du?\n");
    scanf("%24s", name);
    printf("Hallo %s\n",name);

    return 0;
}
