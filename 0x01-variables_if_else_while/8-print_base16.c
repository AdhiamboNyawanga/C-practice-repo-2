 #include <stdio.h>
   #include <math.h>
  
   int main (void)
   {
   
int n;
	char letters;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (letters = 'a'; letters <= 'f'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
  }
