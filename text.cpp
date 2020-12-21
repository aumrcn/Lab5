#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}
int main(){
    string text1 = "";
    cin >> text1;
    func1(text1);
return 0;
}