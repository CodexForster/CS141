#include<iostream>
#include<cctype>
using namespace std;

int main() {
	char a='a';
	cout<<"enter a character";
	cin>>a;
	if(isalpha(a))
	cout<<"\nThe entered character is an alphabet";
	else if(isdigit(a))
	cout<<"\nThe entered character is a digit";
	else
	cout<<"\nThe entered character is a special character";
	return 0;
}
