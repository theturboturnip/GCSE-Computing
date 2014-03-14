#include <stdio.h>
#include <stdlib.h>
int read_file(  char *file_to_get){
    FILE *file = fopen ( file_to_get, "r" );

    if ( file != NULL )
    {
        char line [ 128 ]; /* or other suitable maximum line size */
        while ( (fgets ( line, sizeof(line), file ) != NULL)) /* read a line */
        {
            printf("%s",&line);
        }
        fclose ( file );
    }
    else
    {
	printf("ERRORERROR");
        perror ( file_to_get ); /* why didn't the file open? */
    }
    return 0;
}
int main(){
    char file_to_get;
    printf("Filename: ");
    scanf("%s",&file_to_get);
    read_file(&file_to_get);
}
