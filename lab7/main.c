#include <stdio.h>
#include <string.h>
#include<ctype.h>


char change(long long n, int p)
{

char zn = ' ';
     if(n>0)
     {
         //change(n/p,p);
         
         if(n%p>9)
            switch(n%p)
            {
               case 10:
               zn = 'G';break;
                 //putchar('G'); break;
               case 11:
               zn = 'H';break;
                 //putchar('H'); break;
               case 12:
		zn = 'I';break;
                 //putchar('I'); break;
               case 13:
               zn = 'J';break;
                 //putchar('J'); break;
               case 14:
               zn = 'K';break;
                 //putchar('K'); break;
               case 15:
               zn = 'L';break;
                 //putchar('L'); break;
               default:
               break;
                //putchar(n%p); break;
            }
         else
         	zn = n%p + '0';
             //putchar(n%p+'0');
     }
     
     return zn;
}

int my_printf_hex(char* number, char* param)
{
	int new_cyfra = 0;
	int size = strlen(number);
	
	for (int i = 0; i<size; i++)
	{
		if((number[i] == '#') && (number[i+1] == 'j'))
		{
			i = i+1;
			printf("%s", param);
	
			char num[10];
			int roznica = size - i;
			
			strncpy(num, number+i+1, roznica);
			
			long long int a = num - '0';
			
			while(a>0)
			{
				int res = (int)a/16;
				putchar(change(a%16, 16));
				a = res;
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
		my_printf_hex(buf,buf2);
	}
	
	return 0;
}
