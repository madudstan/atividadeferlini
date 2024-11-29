#include <stdio.h>
#include <string.h>

//NOME: MARIA EDUARDA DE CASTRO LACHIMIA 24055202-2
//Selection Sort (Ordenação por Seleção)

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) 
                min = j;}
    int temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;}
}

int main() {
    int arr[] = {4, 1, 3, 9, 5};
    int n = 5;
    selectionSort(arr, n);
    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]);
return 0;}
