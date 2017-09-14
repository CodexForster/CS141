#include<iostream>
#include<cctype>
using namespace std;

int main() {
	char a='a';
	cout<<"enter a character";
	cin>>a;
	if(isalpha(a))
	cout<<"\nThe entered character is an alphabet";
	else
	cout<<"\nThe entered character is not an alphabet";
	return 0;
}
