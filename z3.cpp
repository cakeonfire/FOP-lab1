#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;


int main(void) {
    char tab_h[3][64];
    strcpy(tab_h[0], "nr");
    strcpy(tab_h[1], "imie");
    strcpy(tab_h[2], "nazwisko");

    // C version
    printf("\t\t\tLista Obecnosci\t\t\t\n");
    printf("----------------------------------------------------------------------------------\n");
    printf("| %24s | %24s | %24s |\n", tab_h[0], tab_h[1], tab_h[2]);
    printf("----------------------------------------------------------------------------------\n");
    printf("| %24d | %24s | %24s |\n", 1, "John", "Smith");
    printf("----------------------------------------------------------------------------------\n");
    printf("| %24d | %24s | %24s |\n", 2, "Jane", "Doe");
    printf("----------------------------------------------------------------------------------\n");
    printf("| %24d | %24s | %24s |\n", 3, "Jay", "Doe");
    printf("----------------------------------------------------------------------------------\n");

    printf("\n");

    // C++ version
    cout << "----------------------------------------------------------------------------------\n" << endl;
    cout << "| " << setw(24) << tab_h[0] << " | " << setw(24) << tab_h[1] << " | " << setw(24) << tab_h[2] << " |" << endl;
    cout << "| " << setw(24) << 0 << " | " << setw(24) << "John" << " | " << setw(24) << "Smith" << " |" << endl;
    cout << "| " << setw(24) << 1 << " | " << setw(24) << "Jane" << " | " << setw(24) << "Doe" << " |" << endl;
    cout << "| " << setw(24) << 2 << " | " << setw(24) << "Jay" << " | " << setw(24) << "Doe" << " |" << endl;

    return 0;
}
