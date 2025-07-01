#include<stdio.h>
#include<stdlib.h>
int main(){
    int n; 
    printf("Enter the size of array;\n");
    scanf("%d",&n);
    int*arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("Enter the value at arr[%d]index:\n",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    int newsize;
    printf("\nEnter the size of array:");
    scanf("%d",&newsize);
    int *newArr = (int*)realloc(arr,newsize*sizeof(int));
    for(int i=n; i<newsize; i++){
        printf("\nEnter the value of arr[%d] index",i);
        scanf("%d",&newArr[i]);
        }
        printf("\n All value in new array =");
        for(int i=0;i<newsize;i++){
            printf("%d",newArr[i]);
        }
    return 0;
}
