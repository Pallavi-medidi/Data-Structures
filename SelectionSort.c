#include <stdio.h>
void SelectionSort(int arr[], int n) {
    int temp ;
    for(int i = 0 ; i < n ; i++) {
        int min = i ;
        for(int j = i ; j < n ; j++){
            if(arr[min] > arr[j]) {
                temp = arr[min] ;
                arr[min] = arr[j] ;
                arr[j] = temp ;
            }
        if (arr[i] != arr[min]) {
            temp = arr[i] ;
            arr[i] = arr[min] ;
            arr[min] = temp ;
        }
        }
    }
    for(int i = 0 ; i < n ; i++) {
        printf("%d ", arr[i]) ;
    }
}
int main()
{
    int n ; 
    scanf("%d", &n) ;
    int arr[n] ;
    for(int i = 0 ; i < n ; i++) {
        scanf("%d", &arr[i]) ;
    }
    SelectionSort(arr, n) ;

    return 0;
}

