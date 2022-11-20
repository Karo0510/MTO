#include <stdio.h>
#include <string.h>
#include<ctype.h>

int my_printf_int(char* number, char* param)
{

	for (int i = 0; i<strlen(number); i++)
	{
		if ((number[i] == '#') && (isdigit(number[i+1])) && (number[i+2] == 'g'))
		{
			i = i+2;
			printf("%s", param);
			
			if (isdigit(number[i]))
			{
				int l = atoi(number[i]);
				
				if (l == 0)
				{
					l = 9;
				}
				else
				{
					l = l - 1;
				}
				char x = l + '0';
				putchar(x);
			}
			else
			{
				putchar('-1');
			}
			
		}
		else
		{
			putchar(number[i]);
		}

	}
	puts("");
	
	return 0;
}

int main(int argc, char *argv[]){
	char buf[1024],buf2[1024];
	while(gets(buf)){
		gets(buf2);
		my_printf_int(buf,buf2);
	}
	
	return 0;
}
