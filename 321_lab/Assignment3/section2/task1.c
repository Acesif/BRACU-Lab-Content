#include <stdio.h>
#include <stdlib.h>

char input[20];
void writeToFile(FILE *p);
int main(int argc, char *argv[]){
FILE *fp = fopen(argv[1],"a");
writeToFile(fp);
fclose(fp);
}
void writeToFile(FILE *p){
scanf("%s",&input);
while(atoi(input) == -1){
fputs(input,p);
fputs("\n",p);
scanf("%s",&input);
}
}
