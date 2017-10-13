
#include <iostream>
using namespace std;

void func_large(int arr2[],int i,int k)
{
	cout<<"\nThe "<<k<<" largest element is - "<<arr2[i-k];
}

void func_small(int arr2[],int i,int k)
{
	cout<<"\nThe "<<k<<" smallest element is - "<<arr2[k-1];
}

int main() {
int arr[20],arr2[20],i,j;
cout<<"Enter how many elements you want to have";
cin>>i;
cout<<"\nEnter the elements ";
for(int z=0;z<i;z++)
cin>>arr[z];

for(int z=0;z<i;z++)
arr2[z]=arr[z];
int k;
cout<<"\nEnter k to find the kth largest and kth smallest element";
cin>>k;

int small,pos;
for(int l=0;l<i;l++)
{small=arr[l];
	for(int k=l;k<i;k++)
	{	if(arr[k]<=small)
		{pos=k;
	             small=arr[k];
		}
	}
arr[pos]=arr[l];
arr2[l]=small;
}  

func_large(arr2,i,k);
func_small(arr2,i,k);
return 0;
}
