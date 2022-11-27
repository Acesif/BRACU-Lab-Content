#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){
int pid,pid2,status;
pid = fork();
if (pid == 0){
pid2 = fork();
if(pid2 ==0){
printf("I am grandchild\n");
}
else{
wait(&status);
printf("I am child\n");
}
}
else if (pid > 0){
wait(&status);
printf("I am parent\n");
}
else{
perror("error in fork");
}
}
