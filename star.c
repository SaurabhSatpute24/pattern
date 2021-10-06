/*
n=5
    *
   ***
  *****
 *******
********* 
*/
#include<stdio.h>
void main()
{
	int n = 5;//hight of tringle
	int count = 1; //number of star in row
	int i,j,temp; //for itration
	printf("Enter the  hight of tringle :- ");
	scanf("%d",&n);
	for(i=i;i<=n;i++)
	{
		temp=0;
		for(j=0;j<n-i;j++)
		{
			printf("  ");
		}
		while(temp<count)
		{
			printf("* ");
			temp++;
		}
	count+=2;
	printf("\n");
	}
}