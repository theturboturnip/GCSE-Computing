#include <stdio.h> 

int fibbonaci(int x){
    int first=0,second=0,current=0,i=0,firstTime=1;
    x-=2;
    printf("That number in the fibbonacci sequence is");
    if(x+2<3){
        printf(" 0\n");
        return 0;
    }
    for(i=0;i<x;i++){
        if((first==0||second==0)&&firstTime!=0){
            current=1;
            firstTime=0;
        }
        first=second;
        second=current;
        current=first+second;
    }
    printf(" %d!\n",current);
    return current;
}
int main(){
    int number,i;
    while(1){
        printf("Please give me a positive integer!\n");
        scanf("%d",&number);
        if(number==0){
            //test some numbers
            for(i=1;i<13;i++){
                fibbonaci(i);
            }
        }else{
            fibbonaci(number);
        }
    }
    return 0;
}

  
