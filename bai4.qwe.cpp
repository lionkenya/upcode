#include <stdio.h>
int reverse (int product);

int main () { int x=100, y=100; int product; int palindrome;

while(((x>99)&&(x<1000))&&((y>99)&&(y<1000)))
{
	product=x*y;
	if(product==reverse(product))
		palindrome=product;
	x++;
	product=x*y;
	if(product==reverse(product))
		palindrome=product;
	y++;
	product=x*y;
	if(product==reverse(product))
		{
		palindrome=product;
		printf ("%d %d",x,y);}
}
printf("The largest palindrome is %d %d %d", palindrome,x,y);

return 0;
}

int reverse (int p) { int r=0; while (p!=0) { r=r*10; r=r+p%10; p=p/10; } return r; }
