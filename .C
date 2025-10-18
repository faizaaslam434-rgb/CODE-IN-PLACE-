#include<stdio.h>
int main(void)
{
	int a[5];
	int i;
	/*printf("enter 5 integers: ");
	for(i=0;i<5;i++)
	{
		scanf("\n%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}*/
	for(i=0;i<5;i++)
	{
		printf("\nenter 5 numbers: %d",i);
		scanf("%d",a[i]);
	}
	printf("you entered: ");
	for(i-0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
