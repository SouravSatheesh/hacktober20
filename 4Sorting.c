#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i,j,temp;
    for( i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
}

void insertionSort(int arr[], int n) {
     int i, key, j; 
    for (i = 1; i < n; i++) { 
        key = arr[i]; 
        j = i - 1; 
  
        
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
    
}

void selectionSort(int arr[], int n) {
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main() {
    int q, n, t;
    int arr[5000];
    
    scanf("%d", &q);
    
    while (q--) {
        scanf("%d%d", &t, &n);
        int i;
        
        for(i = 0; i < n; ++i) {
            scanf("%d", &arr[i]);
        }
    
        if (t == 1) {
            bubbleSort(arr, n);
        } else if (t == 2) {
            insertionSort(arr, n);
        } else {
            selectionSort(arr, n);
        }
        
        for(i = 0; i < n; ++i) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}
