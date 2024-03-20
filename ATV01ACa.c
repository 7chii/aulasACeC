#include <stdio.h>
//encontrar o maior e o menor elemento de um vetor qualquer (aquele que NAO necessariamente percorre todos os elem)
int maxrec(int[], int);
int max(int, int);

int minrec(int[], int);
int min(int, int);

int main(){
    //int arr[] = {44, 2, 1, 43, 34};
    int numvec;
    printf("insira num de ele no vetor: \n");
    scanf(" %d", &numvec);
    int arr[numvec];
    for(int i=0; i<numvec;i++){
        printf("insira elemento %d do vetor: \n",i);
        scanf(" %d",&arr[i]);
    }
    int max = maxrec(arr, numvec);
    printf("\nmaximo elemento: %d\n",max);
    int min = minrec(arr, numvec);
    printf("\nminimo elemento: %d\n",min);
}
int maxrec(int* arr, int lenght){
    if (lenght == 1)
        return arr[0];
    return max(maxrec(arr, lenght - 1),arr[lenght-1]);
}
int max(int n1, int n2){
    return n1 > n2 ? n1 : n2;
}
int minrec(int* arr, int lenght){
    if (lenght == 1)
        return arr[0];
    return min(minrec(arr, lenght - 1), arr[lenght-1]);
}
int min(int n1, int n2){
    return n1 < n2 ? n1 : n2;
}