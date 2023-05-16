#include <stdio.h>

void max_heapify(int arr[], int n, int i){
  int largest = i;
  int temp;
  int left = 2 * i;
  int right = 2 * i + 1;

  if (left < n && arr[left] > arr[largest])
    largest = left;

  if (right < n && arr[right] > arr[largest])
    largest = right;

  if (largest != i) {
      temp = arr[i];
      arr[i] = arr[largest];
      arr[largest] = temp;
      max_heapify(arr, n, largest);
  }
}

void build_max_heap(int arr[], int n){
    int hs = n;
    int i;
    for (int i = hs / 2 - 1; i >= 0; i--)
      max_heapify(arr, n, i);
}

void heapsort(int arr[],int n){
    int i,temp;
    build_max_heap(arr, n);
    for (int i = n - 1; i >= 0; i--) {
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        max_heapify(arr, i, 0);
    }
}


void display(int arr[], int n){
    int i;
    printf("After heap sort-->\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int arr[20],i, n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }

    heapsort(arr,n);
    display(arr, n);
}
