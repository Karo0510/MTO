#include <stdio.h>
#include <string.h>
#include<ctype.h>

int my_printf_int(char* number, char* param)
{

	for (int i = 0; i<strlen(number); i++)
	{
		if ((number[i] == '#') && (number[i+1] == 'g'))
		{
			i = i+1;
			printf("%s ", param);
			
			
			int licznik = 0;
			
			for (int k = i; *(number + k)!= ' '; k++)
			{
				licznik++;
			}
			
			int liczba = atoi(number + i+licznik);
				
			if (liczba == 0)
			{
				printf("To nie liczba");
			}
			else
			{
				for (int j = strlen(number)-1; j>i; j--)
				{
				
					if (number[j] == ' ')
					{
						continue;
					}
					else
					{
						putchar(number[j]);
					}
				}
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
