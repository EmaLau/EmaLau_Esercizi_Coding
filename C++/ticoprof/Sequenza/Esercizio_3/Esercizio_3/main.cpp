#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    float lato1;
    float lato2;
    float lato3;
    cout<<"inserisci i valori dei lati del parallelepipedo ";
    cin>>lato1;
    cin>>lato2;
    cin>>lato3;
    cout<<"il volume e' "<<lato1*lato2*lato3<<endl;
    cout<<"superficie totale "<<lato1*lato2*2+lato1*lato3*2+lato2*lato3*2;
    return 0;
}
