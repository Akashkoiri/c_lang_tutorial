# include <stdio.h>
# include <conio.h>

void main()
{
    int bp,da,hra,ta,gp,np;
    printf("Enter the basic pay: ");
    scanf("%d",&bp);
    
    da = (bp * 25)/100; 
    hra = (bp * 6)/100 + da;
    ta = (bp * 8.33)/100;
    gp = bp + da + hra;
    np = gp - ta;

    printf("The DA is: %d \n",da);
    printf("The HRA is: %d \n",hra);
    printf("The TA is: %d \n",ta);
    printf("The Gross Pay: %d \n",gp);
    printf("The Net Pay is: %d",np);
    getch();
}