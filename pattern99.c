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


    for(i=1;i<=n;i++){
        for(s=1;s<=2+(4*(n-1));s++)
        {
            if((i<n )&& ((s<=n-i) || (s>=n+i && s<=n+i+((2*(n-2)+1)-i+2-i))) ||s>2+(4*(n-1))-(n-i))
                printf(" ");
            else
                printf("*");
        }
    printf("\n");
    }
}

