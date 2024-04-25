#include <iostream>
using namespace std;

int main(){
int numero;

cout << "Ingrese un numero natural:";
cin >> numero;
bool esPrimo = true;

if(numero <= 1){
    esPrimo = false;
}else{
    for(int i = 2; i*i <= numero; i++){
        if(numero%i == 0){
            esPrimo =false;
            break;
        }
    }
}
if (esPrimo){
    cout << numero << " es un numero primo";
}else{
    cout << numero << " no es un numero primo";
}
}
