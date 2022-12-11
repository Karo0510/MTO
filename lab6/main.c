#include <stdio.h>
#include <string.h>
#include<ctype.h>

int my_printf_int(char* number, char* param)
{
	int new_cyfra = 0;
	for (int i = 0; i<strlen(number); i++)
	{
		if (((number[i] == '#') && (number[i+1] == '.') && (isdigit(number[i+2])) && (number[i+3] == 'g')))
		{
			int size = number[i+2] - '0';
			i = i+4;
			printf("%s ", param);

			for (int j = 0; j<strlen(number); j++)
			{
				int liczba = number[j] - '0';
				new_cyfra = (liczba*9+1)%10;

				if (new_cyfra == 0)
				{
					new_cyfra = 9;
				}
				
				putchar(new_cyfra);
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
