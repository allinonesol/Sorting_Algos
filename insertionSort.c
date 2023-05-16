#include <stdio.h>

int main(){
    int a[20],i,j,n,key;
    printf("Enter the length of array:");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Array before sorting:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    //sorting
    for(i=1;i<n;i++){
        key = a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1] = a[j];
            j=j-1;
        }
            a[j+1] = key;
            //j--;


    }
    
    //result after sorting
    printf("\nSorted array using insertion sort:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;

}
