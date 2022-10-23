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
				printf("%s", param);
			
				for (int j = 0; j<strlen(format_string); j++)
				{
					if (islower(*(format_string+j)))
					{
						*(format_string+j) = toupper(*(format_string+j)); 
					}
					else
					{
						*(format_string+j) = tolower(*(format_string+j));
					}
				}
			}
			else
			{
				if ((isdigit(format_string[i+1]) && format_string[i+2] == 'k'))
				{
					int liczba = format_string[i+1] - '0';
					
					i = i+2;
					printf("%s", param);
						
					if (liczba <= 0)
					{
						
					}
					else
					{
						for (int j=0; j<liczba; j++)
						{
							if (islower(*(format_string+j)))
							{
								*(format_string+j) = toupper(*(format_string+j)); 
							}
							else
							{
								*(format_string+j) = tolower(*(format_string+j));
							}
						//putchar(*(format_string+j));
						}
					}
				}
				else
				{
					putchar(format_string[i]);
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
