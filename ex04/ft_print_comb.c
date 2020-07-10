#include<unistd.h>
char num='0';
char num1= '0';
char num2= '0';
void ft_putchar(char c)
{
	write(1,&c,1);
}


void processor()
		{
			if(num <   num1 && num1 <  num2)
			{
	ft_putchar(num);
	ft_putchar(num1);
	ft_putchar(num2);
	ft_putchar(',');
    ft_putchar(' ');
}
}





void ft_print_comb(void)
{
 while(  num <= '9' )
 { 
	 while(  num1 <='9' )  

	 { 
		 while(  num2 <= '9' )

           
		
	 { 
		 
    processor(); 
   num2++;	
			}

			     num2=0;
				 num1++;

	 }
                   num1=0;
				   num++;
 }

}



int main(void)
{
	
 ft_print_comb();
	return 0;
}

