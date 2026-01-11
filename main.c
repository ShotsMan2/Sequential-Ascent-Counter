#include <stdio.h>
#include <stdlib.h>

int main()
{
        int sayi,i,sum,sayi1;

    printf("1. sayiyi girin");
    scanf("%d",&sayi1);

    if(sayi1==0){
        printf("sonuc: 0");
        return 0;
    }

    sum=0;

    i=1;

    for(;;){
        i++;

        printf("%d. sayiyi girin",i);
        scanf("%d",&sayi);

        if(sayi==0){
            break;
        }
        else{
            if(sayi>sayi1){
                sum++;
            }
        }
        sayi1=sayi;
    }
    printf("sonuc: %d",sum);

    return 0;
}
