#include<iostream>
//#include<stdio.h>
int main() {
    char name[25];

    //std::cout << "Wie heißt du?" << std::endl;
    //std::cin >> name;
    //std::cout << "Hallo " << name << "!" << std::endl;

    printf("Hallo %s\n",name);
    printf("Wie heißt du?\n");
    scanf("%24s", name);

    return 0;
}
