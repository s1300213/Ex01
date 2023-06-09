#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    
    char name[100];
    printf("What is your name?\n");
    scanf("%s",name);
    printf("Hello, %s!\n",name);
    
    int sum=0,data;
    printf("Rolling dice...\n");
    srand(time(NULL));
    for(int i=1;i<3;i++){
        data = rand()%6+1;
        sum+=data;
        printf("Die %d: %d\n",i,data);
    }

    printf("Total value: %d\n",sum);
    if(sum>7) printf("%s won!\n",name);
    else printf("%s lost!\n",name);

    return 0;
}
