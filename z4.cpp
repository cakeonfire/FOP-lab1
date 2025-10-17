#include <stdio.h>
#include <iostream>

using namespace std;


int main(void) {

    // C verion - int
    int a1, b1;
    printf("Enter a: ");
    scanf("%d", &a1);
    printf("Enter b: ");
    scanf("%d", &b1);
    printf("sum: %d\n", a1+b1);
    printf("product: %d\n", a1*b1);

    printf("\n");

    // C verion - float
    float a2, b2;
    printf("Enter a: ");
    scanf("%f", &a2);
    printf("Enter b: ");
    scanf("%f", &b2);
    printf("sum: %f\n", a2+b2);
    printf("product: %f\n", a2*b2);

    printf("\n");

    // C++ version - int
    int a3, b3;
    cout << "Enter a: " << endl;
    cin >> a3;
    cout << "Enter b: " << endl;
    cin >> b3;
    cout << "sum: " << a3+b3 << endl;
    cout << "product: " << a3*b3 << endl;

    printf("\n");

    // C++ version - float
    float a4, b4;
    cout << "Enter a: " << endl;
    cin >> a4;
    cout << "Enter b: " << endl;
    cin >> b4;
    cout << "sum: " << a4+b4 << endl;
    cout << "product: " << a4*b4 << endl;

    return 0;
}
