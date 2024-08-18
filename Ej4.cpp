#include <iostream>
#include <vector>
using namespace std;
int mayor( const vector<int>& numero, int n){
  int may=mayor(numero,n-1);

if(n==1){
    return numero[0];
}
if (may > numero[n-1]){
    return may;
}
else {
    return numero[n-1];
}

}
int main (){

     vector<int>numero;
     int n;
    cout << "Ingrese el tamanio"<< endl;
    cin >> n;
    cout << "Ingrese los elementos del vector:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> numero[i];
    }
    cout << mayor(numero,n);

}
