/*
n=11
*         *
**       **
***     ***
****   ****
***** *****
***********
***** *****
****   ****
***     ***
**       **
*         *

*/
#include<stdio.h>
void main()
{
	int n; //hight 
	int count=2;//number of star in row
	int i,j,k,temp,flag=1,starcount=0;;//for itration
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		j=0;k=0;starcount=0;
		while(j<count/2)
		{
			printf("* ");
			j++;
			starcount+=1;
		}
		while(j<n-(count/2))
		{
			printf("  ");
			j++;
		}
		while(starcount<n&&starcount<count)
		{
			printf("* ");
			starcount++;
		}
		if(count>=n)
			flag=0;
		if(flag==1)
			count+=2;
		else if(flag==0)
			count-=2;
		printf("\n");
	}
}