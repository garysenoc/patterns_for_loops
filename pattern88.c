#include <stdio.h>
#include <math.h>
int getNum();
void pattern(int n);

int main(void){
    pattern(getNum());
return 0;
}

int getNum()
{
    int num;
    scanf("%d",&num);
    return num;
}

void pattern(int n){
    int i,j,s;
    system("cls");
  for(i=1;i<=n;i++)
  {

   for(s=1;s<i;s++){
    printf(" ");
   }
   for(j=1;j<=1+(2*(n-i));j++)
   {

       if(j==1 || j==1+(2*(n-i)))
        printf("%d",n+1-i);
       else
        printf(" ");
   }
   printf("\n");

  }
}


