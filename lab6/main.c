#include <stdio.h>
#include <string.h>
#include<ctype.h>

int my_printf_int(char* number, char* param)
{

	for (int i = 0; i<strlen(number); i++)
	{
		if (((number[i] == '#') && (number[i+1] == '.') && (isdigit(number[i+2])) && (number[i+3] == 'g')))
		{
			i = i+4;
			printf("%s", param);

			if (i < strlen(number))
				break;

			for (int j = 0; j<i; j++)
			{
				new_cyfra = (number[i]*9+1)%10;

				if (new_cyfra == 0)
				{
					new_cyfra = 9;
				}
			}
		}
		else if ((number[i] == '#') && (isdigit(number[i+1])) && (number[i+2] == 'g'))
		{
			i = i+3;
			printf("%s", param);
			
			if (i < strlen(number))
				break;
			
			for (int j = 0; j<i; j++)
			{
				if (isdigit(number[j]))
				{
					int l = atoi(number[j]);
				
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
					continue;
				}
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
