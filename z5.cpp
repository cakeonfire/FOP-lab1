#include <stdio.h>
#include <iostream>

using namespace std;


int main(void) {
    
    int f, c;

    // C version
    printf("Enter temperature (F): ");
    scanf("%d", &f);
    c = 5.0 * (f - 32) / 9.0;
    printf("That's %d degrees Celsius\n", c);

    // C++ version
    cout << "Enter temperature (F): ";
    cin >> f;
    c = 5.0 * (f - 32) / 9.0;
    cout << "That's " << c << " degrees Celsius" << endl;

    return 0;
}
