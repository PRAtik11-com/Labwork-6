#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{ 
   char str[15],i;
   int str1[26]={0};
   	printf("Enter your string name: ",str);
	scanf("%s",str);
	
	for(i=0;str[i]!='\0';i++)
	{
		str1[str[i]-'a']+=1;
	}
	printf("the frequency of character is ");
	
	for(i=0;i<26;i++)
	{
		if(str1[i]!=0)
		{
			char sun='a'+i;
			printf("%c=%d \n",sun,str[i]);
		}
		
	}
	getch();
	}
