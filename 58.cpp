#include<iostream>
using namespace std;
int main() 
{
    int i = 66;
    int k = 10;
    cout<<" value before swapping \t"<<i<<"\t"<<k<<"\n";
    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    cout<<"value after swapping\t"<<i<<"\t"<<k;
    return 0;
}
