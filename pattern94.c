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

   for(s=0;s<n-i;s++){
    printf(" ");
   }
   for(j=1;j<=1+(2*(i-1));j++)
   {

       if(j==1 || j==1+(2*(i-1)))
        printf("%c",64+i);
       else
        printf(" ");
   }
   printf("\n");
  }



  for(i=1;i<=n-1;i++){


    for(j=1;j<=i;j++)
    {
        printf(" ");
    }
    for(s=1;s<=1+(2*(n-2)) -(2*(i-1));s++)
    {
          if(s==1 || s==1+(2*(n-2)) -(2*(i-1)))
        printf("%c",64+n-i);
       else
        printf(" ");

    }
    printf("\n");
  }


}


