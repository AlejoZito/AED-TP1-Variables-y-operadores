/* Tp1 - Variables y Operadores
 * Alejo Zito
 * 15/4/15
 */

#include <iostream>
using namespace std;
#include <string.h>


string nombre;
string apellido;
unsigned largoNombre;
unsigned largoApellido;
bool booleano;
int numerox;
int numeroz;
double cociente;

int main()
{
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su apellido: ";
    cin >> apellido;
    cout << "Su nombre es " << nombre+ " " << apellido << "\n";
    largoNombre=nombre.length();
    largoApellido=apellido.length();

    cout << "Su nombre posee " <<largoNombre+largoApellido << " caracteres. \n\n";
    
    cout << "Ingrese un número x: ";
    cin >> numerox;
    cout << "Ingrese un número z: ";
    cin >> numeroz;
    
    cociente=numerox/numeroz;
    
    cout << "La suma x + z es " <<numerox+numeroz << "\n";
    cout << "La resta x - z es " <<numerox-numeroz << "\n";
    cout << "El producto entre x y z es " <<numerox*numeroz << "\n";
    cout << "El cociente entre x y z es " <<cociente << "\n";
    
    
    return 0;
}
