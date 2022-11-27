#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
void toString(char[], int);
int main(int argc, char *argv[]){
pid_t pid = fork();
int n = argc;
char *arr[n];
for (int i = 1; i<n;i++){
arr[i-1] = argv[i];
}
for(int i=0;i<n-1;i++){
}
if(pid == 0){
char *path = "/home/ace/CSE321/Assignment3/section2/sort";
execl(path,"sort",arr,NULL);
}
else if(pid>0){
wait(NULL);
char *path ="/home/ace/CSE321/Assignment3/section2/oddeven";
execl(path,"oddeven",arr,NULL);
}
}
