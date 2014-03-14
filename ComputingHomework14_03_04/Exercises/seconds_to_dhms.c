#include <stdio.h>

int main(){
    int seconds=0,minutes=0,hours=0,days=0;
    printf("How many seconds?: ");
    scanf("%d",&seconds);
    minutes=seconds/60;
    seconds=seconds%60;
    hours=minutes/60;
    minutes=minutes%60;
    days=hours/24;
    hours=hours%24;
    printf("Days: %d, Hours: %d, Minutes: %d, Seconds: %d\n",days,hours,minutes,seconds);
    return 0;
}
