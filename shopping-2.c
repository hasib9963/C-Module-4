#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int taka;
    scanf("%d",&taka);
    if(taka>1000)
    {
        printf("I will buy Punjabi\n");
        if(taka-1000>=500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes");
        }
    }
    else
    {
        printf("Bad luck!");
    }
    return 0;
}
