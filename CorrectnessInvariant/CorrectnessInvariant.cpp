#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void printArray (int N, int arr[]) {
    for(int j=0;j<N;j++)
    {
        printf("%d",arr[j]);
        printf(" ");
    }
    printf ("\n");
}


void insertionSort(int N, int arr[]) {
    int i,j;
    int value;
    for(i=1;i<N;i++)
    {
        value=arr[i];
        j=i-1;
        while(j>=0 && value<arr[j])
        {
            arr[j+1]=arr[j];
            arr[j]=arr[j-1];

            j--;
        }
        arr[j+1]=value;

    }
    printArray(N, arr);
}

int main(void) {

    int N;
    scanf("%d", &N);
    int arr[N], i;
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(N, arr);

    return 0;
}
