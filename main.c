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

        printf("请输入猜测数字:");
        scanf("%d", &gussNumber);

        if (gussNumber == num){
            printf("猜测正确");
            break;
        }


        if(num < gussNumber){
            printf("大啦");
        }

        if(num > gussNumber){
            printf("小啦");
        }




    }
    return 0;
}
