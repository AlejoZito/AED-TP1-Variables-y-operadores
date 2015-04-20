/* Tp1 - Variables y Operadores
 * Alejo Zito
 * 20/4/15
 */

#include <iostream>
using namespace std;
#include <string.h>

string nombre;
string apellido;
unsigned largoNombre;
unsigned largoApellido;
int caracteresNombre;
bool varbool;
bool varbool2;
double numerox;
double numeroz;
double cociente;

int main()
{
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su apellido: ";
    cin >> apellido;
    cout << "Ingrese un número X: ";
    cin >> numerox;
    cout << "Ingrese un número Z: ";
    cin >> numeroz;

    cout << "Su nombre es " << nombre+ " " << apellido << "\n"; //Concatenación de Strings
    largoNombre=nombre.length();
    largoApellido=apellido.length();
    caracteresNombre = largoNombre+largoApellido; //Sumatoria de Unsigned
    varbool = caracteresNombre%2==0; //Utilización de resto (sobre variable int) e igualdad para asignar un valor a la variable booleana.
    cout << "Su nombre posee " << caracteresNombre << " caracteres. \n\n";
    cout << "Si el siguiente número es 1, la sumatoria de los caracteres de su nombre es un número par. Si se muestra un 0 la sumatoria dió como resultado un número impar: "<<varbool <<"\n\n";
    
        varbool2=numerox+numeroz!=caracteresNombre;
    cout << "Si el siguiente número es 1, la suma de X y Z es diferente a la sumatoria de los caracteres de su nombre, en caso contrario se mostrará un 0: "<<varbool2 <<"\n\n";
    
    cociente=numerox/numeroz;
    //Operaciones con variables double
    cout << "La suma x + z es " <<numerox+numeroz << "\n";
    cout << "La resta x - z es " <<numerox-numeroz << "\n";
    cout << "El producto entre x y z es " <<numerox*numeroz << "\n";
    cout << "El cociente entre x y z es " <<cociente << "\n";
    
    
    return 0;
}