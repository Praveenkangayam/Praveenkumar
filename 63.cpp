#include <iostream>
using namespace std;
#include<string.h>
int main()
{
	   char strs[100], countw=0, strw[15], i;
	   cout<<"Write a sentence : ";
	    gets(strs);
	   int len=strlen(strs);
	   for(i=0; i<len; i++)
	{
		    if(strs[i]==' ')
		{
			   countw++;
		}
	}
	       cout<<"Total number of words in the sentence is "<<countw+1;
	        return 0;
}
