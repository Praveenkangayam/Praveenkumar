#include <iostream>
using namespace std;

int main() {
	
    int num,m =21,n=41;

    

    printf("Print evenNumbers in a given range m to n:\n");


 
    for (num = m; num <= n; num++)

        {

               if (num % 2 == 0)

                  printf ("%d ", num);

         }
	return 0;
}
