#include <stdio.h>
#include <string.h>

//NOME: MARIA EDUARDA DE CASTRO LACHIMIA 24055202-2
//Insertion Sort (Ordenação por Inserção)

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;}
        arr[j + 1] = key;}
}

int main() {
    int arr[] = {9, 7, 6, 3, 2};
    int n = 5;
    insertionSort(arr, n);
    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]);
return 0;}
