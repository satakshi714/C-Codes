#include <stdio.h>

void printNum(int arr[]);

int main() {
    int arr[] = {1,2,3,4,5,6};
    printNum(arr);
    return 0;
}
void printNum(int arr[], int n){
    for (int i = 0 ; i<n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}