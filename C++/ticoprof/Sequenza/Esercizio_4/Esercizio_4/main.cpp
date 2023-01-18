#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int resto, caramelle, persone, divisione;
    cout<<"Inserire quante caramelle si hanno"<<endl;
    cin>>caramelle;
    cout<<"Inserire quante persone si devono dividere le caramelle"<<endl;
    cin>>persone;
    resto = caramelle % persone;
    divisione = caramelle / persone;
    if(resto != 0 )
        cout<<"Ogni bambino prende "<<divisione<<" caramelle, con il resto di "<<resto<<" caramelle"<<endl;
    else
        cout<<"Ogni bambino prende "<<divisione<<" caramelle"<<endl;
    return 0;
}
