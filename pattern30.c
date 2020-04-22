#include <stdio.h>

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
   for(i=n;i>=1;i--){
    for(j=n;j>i;j--)
        printf(" ");
    for(s=1;s<=i;s++)
        printf("%d",i);
    printf("\n");
   }
}


