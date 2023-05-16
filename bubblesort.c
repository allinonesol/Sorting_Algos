#include <stdio.h>

int main(){
    int a[20],i,j,n, temp;
    printf("Enter the length of array:");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Array before sorting:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    //sorting
    for(i=1;i<=n-1;i++){
        for(j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    //result after sorting
    printf("\nSorted array using bubble sort:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}
