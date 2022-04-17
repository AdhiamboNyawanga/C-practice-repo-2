#include <stdio.h>
  #include <stdlib.h>
  #include <time.h>
  
  int main(void)
  {
  	int i,j,k;
  	for(i = 48; i < 58; i++)
  	{
  		for(j =49; j <58; j++)
  		{
  			for(k=50; k<58; k++)
  			{
  				putchar (i);
  				putchar(j);
  				putchar(k);
  				if(i !=57 || j !=57 || k != 57)
  				{
  					putchar(',');
  					putchar(' ');
				  }
			  }
		  }
	  }
  	
  	putchar('\n');  	
  	return (0);
  }
