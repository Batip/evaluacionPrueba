#include <iostream>
using namespace std;
/*
Declarar un acumulador de variable int
declarar una variable int para determinar el limite
pedir al usuario que determine el limite de la suma
Abrir un ciclo for para determinar el limite de la suma de los numeros
pedir al usuario que ingrese numeros para sumar
definir el acumulador
}mostrar la suma
*/
int main(){
    int acum;
    int limite;
    int numero;

    cout << "Determine el limite de la suma:";
    cin >> limite;

    for(int iterador = 1; iterador <= limite; iterador++){
        cout << "Ingrese un numero:";
        cin >> numero;
        if(numero > 0){
            acum = acum + numero;
        }
    }
    cout << "La suma de los numeros ingresados es de: " << acum;
}
