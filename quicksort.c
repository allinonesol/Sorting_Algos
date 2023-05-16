#include<stdio.h>
void swap(int arr[], int i, int j){
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int partition(int arr[], int l, int r){
    int pivot,temp,j,i;
    pivot = arr[r];
    i = l-1;
    for(j=l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr, i,j);
        }
        
    }
    swap(arr, i+1,r);
    return i+1;
}

void quicksort(int arr[], int l, int r){
    int pi;
    if(l<r){
        pi = partition(arr,l,r);

        quicksort(arr,l, pi-1);
        quicksort(arr, pi+1, r);
    }
}

int main(){
    int arr[20], i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    quicksort(arr, 0, n-1);
    
    printf("Array after sort:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}