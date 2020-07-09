#include<unistd.h>
void ft_is_negative(int n)
  {char positive;
    positive='P';

    char  negative;
    negative='N';



        if(n >= 0)
    {
    write(1,&positive,1);
    }

    else {
        write(1,&negative,1);
        }
    }

