#include<stdio.h>
int main()
{
    int d,m y;
    printf("Enter the date(d,m,y):");
    scanf("%d/%d/%d",&d,%m,%y);
    if(d==1||d==21||d==31)
    printf("%dst day of",d);
    else if(d==2||d==22)
    printf("%dnd day of",d);
    else if(d==3||d==23)
    printf("%drd day of",d); 
    else 
    printf("%dth day of",d);
    switch(m)
    {
        case 1:
        printf("January");
        break;
        case 2:
        printf("February");
        break; 
        case 3:
        printf("March");
        break;
        case 4:
        printf("April");
        break;
        case 5:
        printf("May");
        break;
        case 6:
        printf("June");
        break;
    }
    

    
}