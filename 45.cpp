#include<iostream>
using namespace std;
int main()
{
int no,b=0;
cout<<"Enter any num : ";
cin>>no;
while(no>0)
{
no=no/10;
b++;
}
cout<<"\n"<<b;
return 0;
}
