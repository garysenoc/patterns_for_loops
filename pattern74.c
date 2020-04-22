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
    int i,j,s,num;
    system("cls");
    num=1;
  for(i=1;i<=n+1;i++)
  {
      for(j=1;j<=i-1;j++)
      {
          printf(" ");
      }
      for(s=1;s<=1+(2*n) - (2*i-1);s++){
        if(s%2==0)
            printf(" ");
        else
            printf("%c",64+num++);
      }
      num=1;
      printf("\n");
  }
}

