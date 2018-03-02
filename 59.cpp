#include<iostream>
using namespace std;
int main(){
	int large, arr[50], size, i;
	cout<<"Enter array elements : ";
	for(i=0; i<10;i++)
	{
	cin>>arr[i];
	}
	cout<<"Searching for largest number ...\n\n";
	large=arr[0];
	for(i=0; i<10; i++)
	{
	if(large<arr[i])
	{
	large=arr[i];
	}}
	cout<<"Largest Number = "<<large;
	return 0;
}
