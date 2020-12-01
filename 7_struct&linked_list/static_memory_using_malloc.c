#include <stdio.h>
#include <stdlib.h>
int main(){
    
    int * nums;
    int i;
    nums=(int*)malloc(10*sizeof(int));

    if(nums==(int*)NULL){   //defensive coding
        printf("malloc failed");
        exit(1);
    }

    for(i=0;i<10;i++){  //get 10 integers
        scanf("%d",&nums[i]);
    }

    for(i=0;i<10;i++){  //printf 10 integers
        printf("%d\t",nums[i]);
    }

    free(nums); //Don't forget to free the memory when you use memory dynamically.
    return 0;
}