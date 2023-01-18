#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    float prezzo, percentuale;
    cout<<"Inserisci il prezzo"<<endl;
    cin>>prezzo;
    cout<<"Inserisci la percentuale di sconto"<<endl;
    cin>>percentuale;
    float sconto = prezzo/100*percentuale;
    float prezzoScontato = prezzo - sconto;
    cout<<"Lo sconto e' di "<<sconto<<endl;
    cout<<"Il prezzo scontato e' di "<<prezzoScontato;
    cout<<endl;
    return 0;
}
