#include<stdio.h>

int main(){
    int arr[20], i,n,j,temp;
    printf("Enter the size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n-1;i++){
        for(j=i;j<n;j++){
            if(arr[j]<arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array after sort:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

        return 0;
}