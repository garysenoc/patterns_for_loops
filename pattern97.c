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
    for(s=1;s<=n*2;s++)
    {
        if((s>=(((n*2)/2)+i-n+1)) && s<=((n*2)/2)+n-i)
            printf(" ");
        else
            printf("*");
    }
    printf("\n");
}

}

