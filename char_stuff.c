#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
int main()
{
	char in[MAXSIZE],stuff[MAXSIZE],destuff[MAXSIZE];
	char *p,*q;
	int i;
	printf("NOTE: the characters 'dle' are taken as FLAG !");
	printf("\nenter the string to be char stuffed\n");
	scanf("%s",in);
	p=in;
	q=stuff;
	while(*p!='\0')
	{
		if(*p=='f')
		{
			*q=*p;
			p++;
			q++;
			if (*p=='l')
			{
			*q=*p;
			p++;
			q++;
			if(*p=='a')
			{
				*q=*p;
			p++;
			q++;
			if (*p=='g')
			{
			*q=*p;
			p++;
			q++;
			*(q++)='f';
			*(q++)='l';
			*(q++)='a';
			 *(q++)='g';
			}
		}
	}
	else
	{
		*q=*p;
		 p++;
		 q++;
	}
}
*q='\0';
printf("\n the stuffed string is");
printf("\n %s",stuff);
p=stuff;
q=destuff;
while(*p!='0')
{
	if(*p=='f')
	{
		*q=*p;
			p++;
			q++;
			if(*p=='l')
			{
				*q=*p;
			p++;
			q++;
			if(*p=='a')
			{
				*q=*p;
			p++;
			q++;
			if(*p=='g')
			{
				*q=*p;
			p++;
			q++;
			for(i=1;i<=4;i++)
			p++;
			}
			}
		}
	}
	else
	{
		*q=*p;
			p++;
			q++;
	}
}
*q='\0';
printf("\n the destuffed string is");
printf("\n %s",destuff);
return 0;
}
}

