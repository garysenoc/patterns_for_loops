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
    int i,j;
    system("cls");
    for(i=n;i>=1;i--){
           for(j=1;j<=i;j++)
                printf("%c",64+j);
            printf("\n");
    }
}

