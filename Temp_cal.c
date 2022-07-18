# include <stdio.h>
# include <conio.h>

void main()
{
    int c,f;
    printf("Celcius temp is: ");
    scanf("%d",&c);

    f = (((c*9)/5) + 32);
    
    printf("Fahrenheit temp is: %d",f);
    getch();
}