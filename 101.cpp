#include <stdio.h>
int main(void)
{
	char str[50];
	int i,n;
	cin>>str>>n;
	int len;
	len=strlen(str);
	for(i=n;i<=len;i++)
	{
cout<<str[i];
	}

	return 0;
}
