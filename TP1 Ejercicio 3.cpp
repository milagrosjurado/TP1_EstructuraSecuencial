#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3, num4, suma, producto;
    
    cout << "Ingrese el valor de cuatro numeros: ";
    cin >> num1 >> num2 >> num3 >> num4;
    
    suma = num1 + num2;
    producto = num3 * num4;

    cout << "La suma entre el primer numero y el segundo es: " << suma <<endl;
    cout << "El producto entre el tercerr numero y el cuarto es: " << producto <<endl;
   
    return 0;
}
