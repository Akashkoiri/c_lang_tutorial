#include<stdio.h>
#include<conio.h>
/*  
    1 2 3 4 5
  1 * * * * *
  2   * * * * 
  3     * * * 
  4       * * 
  5         * 
*/
void main()
{
   int i,j,n;
   printf("Enter the row number: ");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n;j++)
       {
           if(i<=j)
           {
               printf(" *");
           }
           else
           {
               printf("  ");
           }
       }
       printf("\n");
   } 

    getch();
}