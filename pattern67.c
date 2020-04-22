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
      for(j=0;j<=n-i;j++)
      {
          printf(" ");
      }
      for(s=1;s<=1+(2*(i-1));s++){
        if(s%2)
            printf(" ");
        else
            printf("%c",64+i-1);
      }

      printf("\n");
  }
}

