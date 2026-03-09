#include <stdio.h>
#include <math.h>
int main()
{
    double p,q;
    do
    {
        char r;
        printf("\nEnter choice:");
        scanf("%c",&r);
        switch(op)
        {
            case'a':
              printf("Enter a number:");
              scanf("%lf",&p);
              printf("Enter another number:");
              scanf("%lf",&q);
              printf("\n%lf",(p+q));
              break;
            case'b':
              printf("Enter a number:");
              scanf("%lf",&p);
              printf("Enter another number:");
              scanf("%lf",&q);
              printf("\n%lf",(p-q));
              break;
            case'c':
              printf("Enter a number:");
              scanf("%lf",&p);
              printf("Enter another number:");
              scanf("%lf",&q);
              printf("\n%lf",(p*q));
              break;
             case'd':
              printf("Enter a number:");
              scanf("%lf",&p);
              printf("Enter another number:");
              scanf("%lf",&q);
              printf("\n%lf",(p/q));
              break;
            case'e':
              printf("Enter a number:");
              scanf("%lf",&p);
              printf("Enter another number:");
              scanf("%lf",&q);
              printf("\n%lf",pow(p,q));
              break;
            case'f':
              printf("Enter a number:");
              scanf("%lf",&p);
              printf("Enter another number:");
              scanf("%lf",&q);
              printf("\n%lf",sqrt(p));
              break;
              
              
            default:
              printf("\n Exit");
              break;
        }
    }
    while(p!=0);
return o;
}
