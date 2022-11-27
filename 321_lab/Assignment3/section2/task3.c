#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int main(){
FILE *fp = fopen("count.txt","a");
int a,b,c,status;
char buff[255];
a = fork();
if (a == 0){
if(!getpid()&1){
fork();
}
fputs("1",fp);
exit(1);
}
wait(&status);
b = fork();
if (b == 0){
if (!getpid()&1){
fork();
}
fputs("1",fp);
exit(1);
}
wait(&status);
c = fork();
if (c == 0){
if (!getpid()&1){
fork();
}
fputs("1",fp);
exit(1);
}
fclose(fp);
if (a>0 && b>0 && c>0){
wait(&status);
FILE *p = fopen("count.txt","r");
fscanf(p, "%s", &buff);
printf("%d\n",1+strlen(buff));
fclose(p);
}
remove("count.txt");
}
