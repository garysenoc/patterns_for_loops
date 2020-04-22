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
        if(i>1&& (s>=(((n*2)/2)+2-i)) && s<=((n*2)/2)+i-1)
            printf(" ");
        else
            printf("*");
    }
    printf("\n");
}

}

