#include <stdio.h>
#include <string.h>
#include<ctype.h>

int my_printf_int(char* number, char* param)
{

	for (int i = 0; i<strlen(number); i++)
	{
		if ((number[i] == '#') && (number[i+1] == 'g'))
		{
			i++;
			printf("%s", param);
			
			
			for (int j = strlen(number)-1; j>i; j--)
			{
				putchar(number[j]);
			}
			break;
	
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
