#include <iostream>
#include<string.h>
using namespace std;

int main() {
    char s[10];
    int m;
    cout<<"enter the number - ";
    cin>>s;
    m=strlen(s);
    for(int i=0;s[i]!=s[m];i++)
    cout<<s[m-i-1]-48;
   return 0;
   
}
