#include <stdio.h>
#include <stdbool.h>

int binary_search(int arr[], int length, int goal);

// Para busca binária precisa do array estar ordenado com os número de forma crescente ou decrescente.
// Então tecnicamente ela só serve para arrays númericos. E ordenados

// Deve funcionar bem com um algoritmo de sorting (ordenação)

int main(void)
{
    int arr[] = {2, 7, 4, 9, 10, 50, 70, 80, 90, 100, 123, 111};
    int length = sizeof(arr) / sizeof(arr[0]);
    int goal = 50;

    int result = binary_search(arr, length, goal);
    if (result != 1)
    {
        printf("finded! The number of the position is : %i \n ", result);
    }
    else
    {
        printf("Not finded!");
    }
}
int binary_search(int arr[], int length, int goal)
{
    int menor = 0;
    int maior = length - 1;
    int steps = 0;
    while (menor <= maior)
    {
        int middle = (menor + maior) / 2;
        if (arr[middle] == goal)
        {
            return middle;
        }
        else if (arr[middle] > goal)
        {
            maior = middle - 1;
        }
        else if (arr[middle] < goal)
        {
            menor = middle + 1;
        }
        // DEBBUGING FEATURE
        steps++;
    }
    return 1;
}
