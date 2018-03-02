#include <iostream>
using namespace std;
int main()
{
  int a1,b,temp,i;
  cout<<"enter thevalue of and b";
  cin>>a1>>b;
  cout<<"before swapping"<<a1<<endl<<b;
  temp=a1;
  a1=b;
  b=temp;
  cout<<"after swapping"<<a1<<endl<<b;
  return 0;
}
