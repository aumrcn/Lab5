#include<iostream>
using namespace std;

int main(){
    int numba;
    int odd = 0;
    int even = 0;
    cout << "Enter an integer: ";
    cin >> numba;
    while(numba != 0){
        if(numba%2 == 0){
            even++;
        }else{
            odd++;
        }
    cout << "Enter an integer: ";
    cin >> numba;
    }
    cout << "#Even numbers = " << even <<"\n";
    cout << "#Odd numbers = " << odd;
    return 0;
}
