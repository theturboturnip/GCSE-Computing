#include <stdio.h>
#include <string.h>
char *replace_str(char *str, char *orig, char *rep)
{
  static char buffer[4096];
  char *p;

  if(!(p = strstr(str, orig)))  // Is 'orig' even in 'str'?
    return str;

  strncpy(buffer, str, p-str); // Copy characters from 'str' start to 'orig' st$
  buffer[p-str] = '\0';

  sprintf(buffer+(p-str), "%s%s", rep, p+strlen(orig));

  return buffer;
}
int read_file(  char *file_to_get, char *file_to_put, char *to_replace,char *replace_with){
    FILE *file = fopen ( file_to_get, "r" );
    FILE *file2 = fopen ( file_to_put, "w+" );
    int tmp;
    char *buffer;
    int i, extra_word,previous_i,len_of_new_word;
    char to_add[128],new_word[256];
    if ( file != NULL )
    {
        char line[128]; /* or other suitable maximum line size */
        while ( (tmp=fgets ( line, sizeof(char)*128, file ) >0)) /* read a line */
        {
            if(extra_word){
                for (i=0;i++;i<128){
                    if (line[i]==" "){
                        previous_i=i;
                        char second_half[previous_i];
                        for(i=0;i++;i<previous_i){
                            new_word[i+len_of_new_word]=line[i];
                        }
                        printf("%s",new_word);
                    }
                }
            }
            extra_word=0;
            to_add[0]="\o";
            for(i=127;i--;i>0){
                if (line[i]==" "){
                    char to_add[128-i];
                    extra_word=1;
                    int previous_i=i;
                    new_word[0]="\o";
                    for (i=i;i++;i<128){
                        new_word[i-previous_i]=line[i];
                    }
                    len_of_new_word=128-previous_i;
                }
            }
            buffer = replace_str(line,to_replace,replace_with);
            tmp = fwrite(buffer, sizeof(char), strlen(buffer), file2);
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
    char file_to_get[128]="file1.txt", to_replace[128]="f", replace_with[128]="g", file_to_put[128]="file2.txt";
    //printf("Please put, in this order: \nfile_to_get file_to_put to_replace replace_with\n");
    //scanf("%s %s %s %s", file_to_get, file_to_put, to_replace, replace_with);
    //printf("%s %s %s %s", file_to_get, file_to_put, to_replace, replace_with);
    read_file(file_to_get, file_to_put, to_replace, replace_with);
    return 0;
}
