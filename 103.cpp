#include <stdio.h>
int main(void) 

{
	char str[50];
	int i=0,n;
	cin>>str;
	n=strlen(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(i==0)
			str[i]=toupper(str[i]);
		if(str[i]==' ')
			str[i+1]=toupper(str[i+1]);
	}
	cout<<str;
	return 0;
}
