#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("Hello, World!\n");
    int num = 0;
    int gussNumber = 0;

    srand(time(0));
    num = rand()%100+1;

    while (1){

        printf("������²�����:");
        scanf("%d", &gussNumber);

        if (gussNumber == num){
            printf("�²���ȷ");
            break;
        }


        if(num < gussNumber){
            printf("����");
        }

        if(num > gussNumber){
            printf("С��");
        }




    }
    return 0;
}
