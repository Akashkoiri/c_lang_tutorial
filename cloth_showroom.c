#include<stdio.h>
#include<conio.h>

void main()
{
    int pa,ta;
    printf("Enter the total purchase amount: Rs.");
    scanf("%d",&pa);
    
    if(pa<=2000)
    {
        ta = (pa-((pa*5)/100));
    }
    else if(pa>=2001 && pa<=5000)
    {
        ta = (pa-((pa*25)/100));
    }
    else if(pa>=5001 && pa<=10000)
    {
        ta = (pa-((pa*35)/100));
    }
    else
    {
        ta = (pa-((pa*45)/100));
    }
    printf("Your total payable amount after discount is Rs.%d",ta); 
    getch();
}