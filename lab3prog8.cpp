#include<iostream>
#include<cctype>
#include<stdio.h>
using namespace std;

int main() {
	char a='a';
	cout<<"enter an alphabet";
	cin>>a;
	a=tolower(a);
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
	cout<<"\nThe entered alphabet is a vowel";
	else
	cout<<"\nThe entered alphabet is a consonant";
	return 0;
}
