#include <iostream>
using namespace std;

int main() {
    float precio, cantidad, total;
    
    cout << "Ingrese el precio del producto: ";
    cin >> precio;
    
    cout << "Ingrese la cantidad que esta llevando: ";
    cin >> cantidad;
    
    total = precio * cantidad;
    
    cout << "El total a abonar es de: " << total << endl;
    
return 0;
}

