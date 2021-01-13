#include<stdio.h>
#include <string.h>

int main()
{
	int i, j, k, count, len;
	char string[100], unique[100] = {0};
	printf("Enter a string : ");
	gets(string);
	
	len=strlen(string);
	k=0;
	
	for (i=0;i<len;i++)
	{
		count=0;
		for (j=0;j<i;j++)
		{
			if(string[i]==unique[j])
			{
				count++;
			}
		}
		if(count==0)
		{
			unique[k++]=string[i];
		}
	}
	
	printf("The Unique characters in the string are..\n ");
	puts(unique);
}