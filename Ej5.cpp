#include <iostream>
using namespace std;
bool verificarD(int n, int digito){
    int numero;
    if (n==0){
        return false;
    }
    numero=n%10;
    if (numero==digito)
    {
        return true;
    }else{
        return verificarD(n / 10, digito);
    }
}
int main(){
    int n, digito;
    cout << "INgrese un numero entero"<< endl;
    cin >> n;
    cout << "INgrese un solo digito" << endl;
    cin >>digito;
    bool resultado= verificarD(n,digito);
    if (resultado) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

}