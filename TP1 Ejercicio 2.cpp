#include <iostream>
using namespace std;

int main() {
    float base, altura, area;

    cout << "Ingrese la base del cuadrado: ";
    cin >> base;
    cout << "Ingrese la altura del triangulo: ";
    cin >> altura;
    
    area = (base * altura)/2;

    cout << "El area del triangulo es: " << area << endl;

    return 0;
}
