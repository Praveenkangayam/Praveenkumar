#include <iostream>
using namespace std;
 
int main()
{
    float kel, cel;
		cout << "\n\n Convert temperature in Celsius to Kelvin  :\n";
		cout << "---------------------------------------------------\n";	
    cout << " Input the temperature in Celsius : ";
    cin >> cel;
    kel = cel + 273.15;
    cout << " The temperature in Celsius : " << cel;
    cout << " The temperature in Kelvin : " << kel;
    return 0;
}
