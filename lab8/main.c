#include <stdio.h>
#include <string.h>
#include<ctype.h>


char change(long long n)
{

	char zn = ' ';
	
	if (n>9)
	{
		switch(n)
            	{
            	case 0:
            	zn = 'o'; break;	
               case 10:
               zn = 'G';break;
               case 11:
               zn = 'H';break;
               case 12:
		zn = 'I';break;
               case 13:
               zn = 'J';break;
               case 14:
               zn = 'K';break;
               case 15:
               zn = 'L';break;
               default:
               break;
            	}			
	}
         else
         	zn = n + '0';
     
     
     return zn;
}

int my_printf_hex(char* number, char* param)
{
	int new_cyfra = 0;
	int size = strlen(number);
	
	for (int i = 0; i<size; i++)
	{
		if((number[i] == '#') && (number[i+1] == '.') && (number[i+3] == 'j') && isdigit(number[i+2]))
		{
			int change_n = isdigit(number[i+2]);
			i = i+3;
			*(param + strlen(param)-1) = '\x0';
			printf("%s ", param);
	
			char num[10];
			int roznica = size - i;
			
			strncpy(num, number+i+1, roznica);
			
			long long int a = atoi(num);
			char result[10];
			int i = 0;
			
			while(a>0)
			{
				result[i] = change(a%16);
				int res = (int)a/16;
				a = res;
				i = i+1;
			}
			result[i] = '\x0';
			
			int k = 0;
			for (int i = strlen(result)-1; i>=0; i--)
			{
				if (k < change_n)
				{
					putchar(tolower(result[i]));
					k++;
				}
				
			}
			k = 0;
			
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
		my_printf_hex(buf,buf2);
	}
	
	return 0;
}
