#include<iostream>
using namespace std;
int main()
{
  int n, num, sum = 0,remainder,r;
  cout << "Enter the number : ";
  cin >> n;
  while(n != 0)
  {
   emainder = n%10;
    r = r*10 + remainder;
    n /= 10;
  }
  while (r != 0)
  {
  sum = r % 10;
   cout<<sum<<"	";
   r = r / 10;
 }
return 0;
}
