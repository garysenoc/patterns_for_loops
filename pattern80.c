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
    int i,j,s,num=1;
    system("cls");
  for(i=1;i<=n;i++)
  {
      for(j=n+1-i;j>1;j--)
      {
          printf(" ");
      }
      for(s=1;s<=1+(2*(i-1));s++)
      {
          if(s%2)
          {
              printf("%c",64+num);
               num++;
          }

        else
            printf(" ");


      }
      num=1;
      printf("\n");
  }

  num=0;
  for(i=1;i<=n-1;i++)
  {

      for(j=1;j<i+1;j++)
      {
          printf(" ");
      }
      for(s=1;s<=1+((n-1)*2)-(2*i-1);s++)
      {
          if(s%2)
          {
               printf("%c",65+i+num);
               num++;
          }

        else
            printf(" ");
      }
      num=0;
      printf("\n");
  }



}


