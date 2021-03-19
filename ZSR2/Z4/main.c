#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("Unesite broj:");
    scanf("%d",&n);


    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==2 && j==1)
                printf(" ");
            else if(i==2 && j==3)
                printf(" ");
            else if(i==2 && j==2)
                printf("%d",n);
            else
                printf("*"");
        }
        printf("\n");
    }
    return 0;
}
