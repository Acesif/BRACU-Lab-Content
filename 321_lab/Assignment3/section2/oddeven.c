#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(int argc, char *argv[]) 

{

    int n = argc;
    int arr[30];

 for(int i=1;i<n;i++)

    {

        arr[i-1] = atoi(argv[i]);

    }

    for(int i=0;i<n-1;i++)

    {

        if(arr[i]%2==0){

            printf("%d is even\n", arr[i]);
    }
	else if(arr[i]%2 != 0){
	printf("%d is odd\n",arr[i]);
}
}
}
