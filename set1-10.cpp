#include <iostream>
using namespace std;


int main()
{
int no,a=0;

cout<<"Enter any num : ";
cin>>no;
if(no<0)
{
no=no * -1;
}
else if(no==0)
{
no=1;
}
while(no>0)
{
no=no/10;
a++;
}
cout<<"\n no. of digits in given number is: "<<a;

	return 0;
}
