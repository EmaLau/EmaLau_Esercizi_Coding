#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    float numero, cubo, quadrato;
    cout<<"Inserisci il numero da fare al quadrato e al cubo"<<endl;
    cin>>numero;
    cubo = numero*numero*numero;
    quadrato = numero*numero;
    cout<<"Il Cubo di "<<numero<<" e' di "<<cubo<<" il quadrato invece e' di "<<quadrato<<endl;
    return 0;
}
