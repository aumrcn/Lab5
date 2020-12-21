#include <iostream>
#include <cmath>
using namespace std;

int cheetah(int money){ 
    int startkuad = 0;
    int kuadjaksalak = 0;
    int salakleft = 0;
    startkuad = money /10;
    int kuad = startkuad;
    int salak = startkuad;

    while(salak >2){
        kuadjaksalak = salak/3;
        kuad = kuad+kuadjaksalak;
        salakleft = kuadjaksalak+(salak%3);
        salak = salakleft;
    }
    return kuad;
}

int main(){
    int z;
    cout << "Enter your money: ";
    cin >> z;
    cout << cheetah(z);
    return 0;
}  