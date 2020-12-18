#include <iostream>
#include <cmath>
using namespace std;

int cheetah(int money){ 
    int a = 0;
    int b = 0;
    int c = 0;
    a = money /10;
    int kuad = a;
    int x = a;

    while(x >2){
        b = x/3;
        kuad = kuad+b;
        c = b+(x%3);
        x = c;
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