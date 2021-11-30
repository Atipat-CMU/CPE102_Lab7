#include<iostream>
#include<string>

using namespace std;

string textReverse(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string textNormalize(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string text, reversed_text;
    cout << "Input text: ";
	cin >> text;
	reversed_text = textReverse(text);
    cout << "Reversed text: " << reversed_text << endl;
    cout << "Palindrome: ";

	if(textNormalize(text) == textNormalize(reversed_text)){
		cout << "Yes";
	}else{
		cout << "No";
	}
    return 0;
}
