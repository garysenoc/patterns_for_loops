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

    for(i=1;i<=n+1;i++)
    {

    for(j=1;j<=n-i+1;j++)
    {
        printf(" ");
    }
    for(s=1;s<=i;s++)
    {
        printf("%d",n+(s-i));
    }
    printf("\n");
  }
    for(i=1;i<=n+1;i++)
    {

    for(j=1;j<=i;j++)
    {
        printf(" ");
    }
    for(s=1;s<=n-i+1;s++)
    {
        printf("%d",s+i-1);
    }
    printf("\n");
  }
}

