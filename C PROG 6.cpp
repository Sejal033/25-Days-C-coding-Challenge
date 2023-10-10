#include<stdio.h>
int main()
{
	int a,b,Q,R;
	
	printf("ENTER TWO NUMBERS: ");
	scanf("%d %d",&a,&b);
	
	// computes quotient
	Q=a/b;
	
	//computes remainder
	R=a%b;
	
	printf("QUOTIENT =%d",Q);
	printf("\nREMAINDER =%d",R);
	
	return 0;
}