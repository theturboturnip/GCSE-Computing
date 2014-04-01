#include <stdio.h>
#include <stdlib.h>
int print_array(int array[3][3])
{
	int x,y;
	for(x=0;x<3;x++){
		for(y=0;y<3;y++){
			printf("%d ",array[x][y]);
		}
        printf("\n");
	}
	return 0;
}
int row_and_column(int array[3][3])
{
	int x,y;
	printf("Row: ");
	scanf("%d",&y);
	printf("Column: ");
	scanf("%d",&x);
	printf("%d\n",array[x-1][y-1]);
}
int print_column(int array[3][3])
{
	int row,x;
	printf("Column: ");
	scanf("%d",&row);
	for (x=0;x<3;x++){
		printf("%d\n",array[x][row-1]);
	}
	return 0;
}
int print_row(int array[3][3])
{
	int column,y;
	printf("Row: ");
	scanf("%d",&column);
	for (y=0;y<3;y++){
		printf("%d ",array[column-1][y]);
	}
    printf("\n");
	return 0;
}
int get_row_column(int array[3][3])
{
	int number=-1;
	while (number>9||number<0){
		printf("What number? ");
		scanf("%d",&number);
	}
	int x,y;
	for(x=0;x<3;x++){
		for(y=0;y<3;y++){
			if (array[x][y]==number){
				printf("%d,%d",x,y);
			}
		}
	}
	return 0;
}
int is_in_list(int array[3][3], int target){
	int x,y;
	for(x=0;x<3;x++){
		for(y=0;y<3;y++){
			if (array[x][y]==target){
				return 1;
			}
		}
	}
	return 0;
}
int main(){
	srand(time(NULL));
	int array[3][3] = {{-1,-1,-1},{-1,-1,-1},{-1,-1,-1}};
	int randNum=rand()%9,x,y;
	for(x=0;x<3;x++){
		for(y=0;y<3;y++){
			while(is_in_list(array,randNum)){
				randNum=rand()%9;
			}
			array[x][y] = randNum;
            //printf("%d",randNum);
		}
	}
    printf("Print-Array\n");
    print_array(array);
    printf("From row and column\n");
    row_and_column(array);
    printf("Print column\n");
    print_column(array);
    printf("Print Row\n");
    print_row(array);
    printf("Get Address\n");
    get_row_column(array);
    printf("\n");
	return 0;
}
