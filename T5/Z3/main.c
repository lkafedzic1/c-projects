#include <stdio.h>

int main() {
    float a[5],b[5],c[5];
    int i;
    
    printf("Unesite clanove niza A: ");
    for(i=0;i<5;i++) 
        scanf("%f",&a[i]);
    
    printf("Unesite clanove niza B: ");
    for(i=0;i<5;i++) 
        scanf("%f",&b[i]);
        
    for(i=0;i<5;i++) 
        c[i]=2*a[i]+b[i];
    
    printf("Niz A glasi: ");
    for(i=0;i<5;i++){
        if(i==4)
            printf("%.2f",a[i]);
        else
            printf("%.2f, ",a[i]);
    }
   printf("\nNiz B glasi: ");
    for(i=0;i<5;i++){
                if(i==4)
            printf("%.2f",b[i]);
        else
            printf("%.2f, ",b[i]);
    }
    printf("\nNiz C glasi: ");
    for(i=0;i<5;i++){
               if(i==4)
            printf("%.2f",c[i]);
        else
            printf("%.2f, ",c[i]);
    }
	return 0;
}
