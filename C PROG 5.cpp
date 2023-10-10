#include<stdio.h>
int main()
{
	char c;
	
	printf("ENTER A CHARACTER");
	scanf("%c",&c);
	
	// %d display the integer value of a character
	// %c display the actual value of character
	printf("ASCII value of %c= %d", c, c);
	
	return 0;
	
}