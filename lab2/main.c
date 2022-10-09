#include <stdio.h>
#include <string.h>
#include<ctype.h>
#include<stdlib.h>

int my_printf(char *format_string, char *param)
{
	for(int i=0;i<strlen(format_string);i++)
	{
	
		if (format_string[i] == '#')
		{
			if((format_string[i+1] == 'k'))
			{ 
				i++;
			
				for (int j = 0; j<strlen(param); j++)
				{
					if (islower(*param+j))
					{
						*(param+j) = toupper(*param+j); 
					}
					else
					{
						*(param+j) = tolower(*param+j);
					}
					printf("%s",param);
				}
			}
			else
			{
				if (format_string[i+1] == '.' && isdigit(format_string[i+2]) && format_string[i+3] == 'k' )
				{
					int liczba = atoi(format_string[i+2]);
					i = i+3;
					
					for (int j=0; j<liczba; j++)
					{
						*(param + j) = toupper(*(param + j)); 
						printf("%c", *(param + j));
					}
				}
			}
		}
		else
			putchar(format_string[i]);
	}
	puts("");
	return 0;
}

int main(int argc, char *argv[])
{
	char buf[1024],buf2[1024];
	while(gets(buf)){
		gets(buf2);
		my_printf(buf,buf2);
	}
	return 0;
}
