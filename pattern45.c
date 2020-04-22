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
    int i,j,count=1,num,s;
    system("cls");
  for(i=1;i<=n;i++){
    for(s=1;s<=n-i;s++)
        printf(" ");
    for(j=1;j<=1+(2 *(i-1));j++)
    {
    	num = 1+(2 *(i-1));
    	num = (num/2)+1;
    		if(j<=num)
    		{
    			printf("%d",count);
				count++;
			}
			else
			{
				printf("%d",--count-1);
			}


    }
	count = 1;
    printf("\n");
  }
}


