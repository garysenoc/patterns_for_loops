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
    for(i=1;i<=n;i++){
            for(j=1;j<=n;j++)
                printf("*");
            printf("\n");
    }
}
