#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int sum=0,data;
    printf("Rolling dice...\n");
    srand(time(NULL));
    for(int i=1;i<3;i++){
        data = rand()%6+1;
        sum+=data;
        printf("Die %d: %d\n",i,data);
    }

    printf("Total value: %d\n",sum);
    if(sum>7) printf("You won\n");
    else printf("You lost\n");

    return 0;
}
