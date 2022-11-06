#include <stdio.h>
#include <string.h>
#include<ctype.h>

int my_printf_int(char* number, char* param)
{

	if (!isdigit(number))
	{
		return -1;
	}
	
	for (int i = 0 i<strlen(number); i++)
	{
		if ((format_string[i] == '#') && (format_string[i+1] == 'g'))
		{
			i++;
			printf("%s", param);
			
			if (int j = strlen(number); j>=0; j--)
			{
				putchar(number[j]);
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

int my_printf(char *format_string, char *param){
	for(int i=0;i<strlen(format_string);i++){
		if((format_string[i] == '#') && (format_string[i+1] == 'k')){
			i++;
			printf("%s",param);
		}else
			putchar(format_string[i]);
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
