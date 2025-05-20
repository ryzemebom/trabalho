#include <stdio.h>

#define TAMANHO 100

void bubbleSort(int arr[], int n) {
    int i, j, temp;


    for (i = 0; i < n - 1; i++) {

        for (j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void imprimirVetor(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[TAMANHO] = {15, 22, 8, 5, 12, 19, 27, 3, 14, 10, 18, 6, 2, 24, 9, 1, 17, 11, 21, 13,
                        4, 16, 25, 23, 7, 20, 29, 30, 33, 32, 28, 34, 35, 36, 31, 39, 38, 37, 40, 41,
                        43, 44, 42, 46, 45, 47, 49, 50, 52, 51, 48, 54, 55, 56, 57, 53, 59, 58, 60, 61,
                        62, 64, 63, 66, 65, 67, 68, 69, 70, 72, 71, 74, 73, 75, 77, 76, 78, 79, 80, 81,
                        82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100};

    printf("Lista original:\n");
    imprimirVetor(arr, TAMANHO);

    bubbleSort(arr, TAMANHO);

    printf("\nLista ordenada:\n");
    imprimirVetor(arr, TAMANHO);

    return 0;
}
