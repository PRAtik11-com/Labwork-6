#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str1[50],str2[50];
	printf("Enter your string name",str1);
	scanf("%s",str1);
	strcpy(str2,str1);
	strrev(str2);
	
	if(strcmp(str1,str2)==0)
	{
		printf("palindrome string.");
	}
	else
	{
		printf("not palindrome string.");
	}
	getch();
}
