/*
10
         *
        * *
       * * *
      * * * *
     * * * * *
    * * * * * *
   * * * * * * *
  * * * * * * * *
 * * * * * * * * *
* * * * * * * * * *
*/
#include<stdio.h>
void Main()
{
	int n;
	scanf("%d",&n);
	int count = 1, flag = 0;
	for(int i=0;i<n;i++)
	{
		for (int j = 0; j < n - count; j++)
		{
			Console.Write(" ");
		}
		for(int j=0;j<2*count-1;j++)
		{
			if(flag==0)
			{
				printf("*");
				flag = 1;
			}
			else 
			{
				Console.Write(" ");
				flag = 0;
			}
		}
		printf("\n");
		count++;
		flag = 0;
	}
}