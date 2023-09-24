#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Declaracion de variables
    int opcion;
    float areaCuadrado, areaCirculo, areaTriangulo, radio, lado1, lado2, base, altura;

    // Menu
    cout << "CALCULADORA DE AREA" << endl;
    cout << "1=Cuadrado" << endl;
    cout << "2=Circulo" << endl;
    cout << "3=Triangulo" << endl;
    cout << "Seleccione una figura geometrica: ";
    cin >> opcion;

    // Ingreso y Salida de Datos
    switch (opcion)
    {

    case (1):
        cout << "\nIngrese los lados del cuadrado: " << endl;
        cin >> lado1;
        cin >> lado2;
        areaCuadrado = lado1 * lado2;
        cout << "\nEl area del cuadrado es: " << areaCuadrado << " cm²" << endl;
        break;

    case (2):
        cout << "\nIngrese el radio del circulo: " << endl;
        cin >> radio;
        areaCirculo = 3.1416 * pow(radio, 2);
        cout << "\nEl area del circulo es: " << areaCirculo << " cm²" << endl;
        break;

    case (3):
        cout << "\nIngrese la base del triangulo: " << endl;
        cin >> base;
        cout << "Ingrese la altura del triangulo: " << endl;
        cin >> altura;
        areaTriangulo = (base * altura) / 2;
        cout << "\nEl area del Triangulo es: " << areaTriangulo << " cm²" << endl;
        break;

    default:
        cout << "Ingrese un numero valido" << endl;
        break;
    }
    return 0;
}
