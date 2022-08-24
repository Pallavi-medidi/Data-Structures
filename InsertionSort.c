#include<stdio.h>
void InsertionSort(int arr[], int n) {
    int temp ;
    for(int i = 1 ; i <= n ; i++) {
        int m = arr[i];
        int j = i - 1 ;
        while(j >= 0 && arr[j] > m) {
            temp = arr[j] ;
            arr[j] = arr[j + 1] ;
            arr[j + 1] = temp ;
            j-- ;
        }
        arr[j + 1] = m; 
    }
    for(int i = 0 ; i < n ; i++) {
        printf("%d ", arr[i]) ;
    }
}
int main() {
    int n ;
    scanf("%d", &n) ;
    int arr[n] ;
    for(int i = 0 ; i < n ; i++) {
        scanf("%d", &arr[i]) ;
    }
    InsertionSort(arr, n) ;
    return 0 ;
    
}
