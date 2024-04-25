#include <iostream>
using namespace std;
/*
Declarar e inicializar variables de tipo float
Pedir al usuario que ingrese una temperatura en celsius
Convertir la temperatura a F°
Mostrar
*/
int main(){
double far;
double cel = 0;

cout << "Ingrese una temperatura en C°:";
cin >> cel;
far = (cel*1.8)+32;
cout << "La temperatura en F° es: " << far;
}
