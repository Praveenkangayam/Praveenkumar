
#include <iostream>
using namespace std;

int main() {
	int a;
	cout<<"Enter a number\n";
	cin>>a;
	if(a>0)
	{
		cout<<"Positive";
	}
	else if(a<0)
	{
		cout<<"Negative";
	}
	else
	{
		cout<<"Zero";
	}
	return 0;
}
