#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define array_length 10000
int organize(int* unorganized,int*organized){
	int i,storage,min_no=unorganized[0];
    int used_element=0,len_of_list=array_length;
    //int organized[len_of_list];
    while (len_of_list>0){
        for(i=1;i<len_of_list;i++){
            if(min_no>unorganized[i]){
                min_no=unorganized[i];
                used_element=i;
            }
        }
        organized[array_length-len_of_list]=min_no;

        move_down(unorganized,used_element,len_of_list);
        len_of_list--;
        min_no=unorganized[0];
	}
    
	return 1;
}
int move_down(int* unorganized, int from,int len_of_array){
    int i=0;
    for (i=from;i<len_of_array;i++){
        unorganized[i]=unorganized[i+1];
        
    }
    unorganized[len_of_array-1]=0;
}
int main(){
    int unorganized[array_length],organized[array_length],i=1;
        
	srand(time(NULL));
	int isOrganized=0;
    for(i=0;i<array_length;i++){
        unorganized[i]=rand()%array_length;
    }    
    /*printf("Unorganized:\n");
    for(i=0;i<array_length;i++){
        printf("%d\n",unorganized[i]);
    }*/
    organize(unorganized,organized);

    /*printf("Organized:\n");
    for(i=0;i<array_length;i++){
        printf("%d\n",organized[i]);
    }*/

}
