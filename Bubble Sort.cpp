#include <stdio.h>
#include <string.h>

//NOME: MARIA EDUARDA DE CASTRO LACHIMIA 24055202-2
//Bubble Sort (Ordenação por Troca)

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;}
    }
  }
}

int main() {
    int arr[] = {5, 3, 8, 4, 2};
    int n = 5;
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]);
    return 0;}
