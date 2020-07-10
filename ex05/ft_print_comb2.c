#include<unistd.h>
char num  ='0';
char num1='0';
char num2='0';
char num3= '1';


void ft_putchar(char c)
{
	write(1,&c,1);
}


	void processor(void)
{
	
	   
		   ft_putchar(num);
			   ft_putchar(num1);
              	ft_putchar(' ');
                  ft_putchar(num2);
					  ft_putchar(num3);
				   ft_putchar(',');
				   ft_putchar(' ');
				    
	   
}


void ft_print_comb2(void)
{ 
	while(num <= '9')
	{
		while(num1 <= '8')
		{
			while(num2 <= '9')
			{
				while(num3 <= '9')
				{
					processor();
					num3++;
					num=0;
				}

					num2++;
					num=0;

			}
			        num1++;
					num=0;
		}
					num++;
					num=0;
	}

}
	int main(void)	
{
 ft_print_comb2();

return 0;
}
