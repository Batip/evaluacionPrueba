#include <iostream>
using namespace std;

int main(){
int conteo;
int regresivo;
cout << "Ingrese un numero para hacerle cuenta regresiva:";
cin >> regresivo;
for (int conteo = regresivo; conteo >= 1; --conteo){
        cout << conteo << endl;
}
}
