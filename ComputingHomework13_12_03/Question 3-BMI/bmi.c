#include <stdio.h> 
 
int BMI(float weight,float height,int metric){
    if(!metric){
        weight*=703;
    }
    float bmi=weight/(height*height);
    printf("BMI: %f (",bmi);
    if(bmi<=18.5f){
        printf("Underweight");
    }else if(bmi>18.5f&&bmi<=25.0f){
        printf("Normal");
    }else if(bmi>25.0f&&bmi<=30.0f){
        printf("Overweight");
    }else if(bmi>30.0f){
        printf("Obese");
    }
    printf(")\n");
    return 0;
}
 
int main(void) { 
    int metric;
    float weight,height;
    while(1){
        printf("Please type 1 if you are using the metric system, and 0 otherwise.\nMetric:");
        scanf("%d",&metric);
        printf("(Height Weight) in ");
        if(!metric){
            printf("inches pounds:");
        }else{
            printf("meters kilograms:");
        }
        scanf("%f %f",&height,&weight);
        /*if(number==0){
            for(i=0;i<50;i++){
                factorize(i+1);
                printf("\n");
            }
        }else*/
        BMI(weight,height,metric);
        printf("\n"); 
    }
  return 0;  
} 
