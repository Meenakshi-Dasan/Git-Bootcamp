#include<stdio.h>
int main()
{
 float x,y;
 do
 {
  char w;
  printf("\nEnter operation:");
  scanf("%f",&w);
  switch(w)
  {
    case 'a':
    printf("Enter first number:");
    scanf("%f",&x);
    printf("Enter second number:");
    scanf("%f",&y);
    printf("\n%0.2f",(x+y));
    break;
    default:
        printf("Exit");
    break;
  }
 }
 while(x!=0);

return 0;
}

