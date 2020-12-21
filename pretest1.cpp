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

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

string reverse(string text1){
    int i=0, L= text1.size();
    string reversed = "";
    while(i < L){
        reversed = reversed + text1[L-i-1];
        i++;
    }
    return reversed;
}



int main(){
    string yourtext;
    cout << "Enter your text: ";
    cin >> yourtext;
    cout << "Reversed text: ";
    cout << reverse(yourtext) << "\n";
    cout << "Palindrome: ";
    string a = func3(yourtext);
    string b = func3(reverse(yourtext));
    if(func3(yourtext) == func3(reverse(yourtext))){
        cout << "Yes" << "\n";
    }else{
        cout << "No" << "\n";
    }
    return 0;
}   

