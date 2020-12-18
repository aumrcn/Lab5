#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(){
    string text1 = "";
    string text2 = "";
    int N;
    int count = 0;
    
    cout << "Enter the first text: ";
    cin  >> text1;
    cout << "\nEnter the second text: ";
    cin  >> text2;
    cout << "\nEnter N: ";
    cin  >> N;
        while(count < N){
            if(count%2 == 0){
                cout << text1 << " ";
            }else{
                cout << text2 << " ";
            }
            count++;
        }
    return 0;    
}        
