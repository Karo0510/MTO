#include <stdio.h>
#include <string.h>
#include<ctype.h>


void change(long long n, int p)
{
     if(n>0)
     {
         change(n/p,p);
         if(n%p>9)
            switch(n%p)
            {
               case 10:
                 putchar('G'); break;
               case 11:
                 putchar('H'); break;
               case 12:
                 putchar('I'); break;
               case 13:
                 putchar('J'); break;
               case 14:
                 putchar('K'); break;
               case 15:
                 putchar('L'); break;
            }
         else
             putchar(n%p);
     }
}

int my_printf_hex(char* number, char* param)
{
	int new_cyfra = 0;
	int size = strlen(number);
	
	for (int i = 0; i<size; i++)
	{
		if((number[i] == "#") && (number[i+1] == "j"))
		{
			i = i+2;
			printf("%s", param);
	
			char num[10];
			int roznica = size - i;
			
			strncpy(num, number, roznica);
			
			long long int a = num - '0';
			
			change(a, 16);
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
