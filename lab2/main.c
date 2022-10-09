#include <stdio.h>
#include <string.h>
#include<ctype.h>

int my_printf(char *format_string, char *param)
{
	for(int i=0;i<strlen(format_string);i++)
	{
		if((format_string[i] == '#') && isdigit(format_string[i+1]) && (format_string[i+2] == 'k'))
		{
			i++;
			
			int liczba = atoi(format_string[i+1]);
			
			for (int j = 0; j<liczba; i++)
			{
				if (islower(*param))
				{
					*param = toupper(*param); 
				}
				else
				{
					*param = tolower(*param);
				}
				printf("%s",param);
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
