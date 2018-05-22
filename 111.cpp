#include <iostream>
using namespace std;
int main() {
	int num,a=0,m;
	cout<<"enter the number\n";
	cin>>num;
	while(num!=0)
	{
		num=num/10;
		a++;
	}cout<<a;
	return 0;
}
