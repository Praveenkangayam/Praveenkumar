#include<stdio.h>
int main()
{
	int b,a,c,i,sum=0;
	cout<<"enter no.of.elements in ap series ";
	cin>>a;
	cout<<"enter starting number ";
	cin>>b;
	cout<<"enter the difference ";
	cin>>c;
	for(i=0;i<a;i++)
	{
		sum=sum+b;
		b=b+c;
		
	}
	cout<<sum;
}
