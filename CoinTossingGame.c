#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int head=0,tail=0,i;
    char funame[15];
    srand((unsigned int)time(NULL));
    printf("Tossing a coin...\n");
    printf("Who are you?\n > ");
    scanf("%s",funame);
    printf("Hello, %s\n",funame);
    for(i=0;i<3;i++){
        if(0==rand()%2){
            head++;
            printf("Round %d: Heads\n",i+1);
        }
        else{
            tail++;
            printf("Round %d: Tails\n",i+1);
        }
    }
printf("Heads:%d, Tails: %d\n",head,tail);
if(head > tail){
printf("%s won!\n", funame);
}
else{
printf("%s lost!\n",funame);
}
return 0;
}