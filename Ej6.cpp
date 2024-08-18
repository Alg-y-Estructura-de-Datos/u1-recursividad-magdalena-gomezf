#include <iostream>
using namespace std;
int paresEnPosImpar(int n, int pos){
    int ultimonum, contador;
    if (n==0){
        return 0;
    }
    ultimonum=n%10;
    contador=0;
    if(ultimonum%2==0 && pos%2!=0){
        contador=1;

    }
    return contador + paresEnPosImpar(n/10,pos-1);

}
int main (){
    int n, digitos;
    cout << "Ingrese un numero entero positivo" << endl;
    cin >> n;
    cout << "INgrese cantidad de digitos"<< endl;
    cin >> digitos;
    int resultado;
    resultado = paresEnPosImpar(n, digitos-1);
    cout << resultado;
}