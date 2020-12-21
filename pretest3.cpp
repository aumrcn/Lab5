#include<iostream>
#include<cmath>
using namespace std;

int adiff(int angle1, int angle2){
    while(angle1 >= 360){
        angle1 = angle1-360;
    }
    while(angle2 >= 360){
        angle2 = angle2-360;
    }
    int diff1;
    int diff2;
    int diff3;
    int diff4;
    diff1 = angle1-angle2;
    if(diff1 < 0 ){
        diff1 = diff1*-1;
    }
    diff2 = angle2-angle1;
    if(diff2 < 0 ){
        diff2 = diff2*-1;
    }
    if(diff1 < diff2){
        diff3 = diff1;
    }else{
        diff3 = diff2;
    }
    if(diff3 > 180){
        diff4 = 360 - diff3;
    }else{
        diff4 = diff3;
    }
    return diff4;
}
int main(){
    int a,b;
    cout << "Enter first angle: ";
    cin >> a;
    cout << "Enter second angle: ";
    cin >> b;
    cout << adiff(a,b);
    return 0;
}