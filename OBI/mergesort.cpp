#include <iostream>

using namespace std;

void merge(int* arr, int ini, int meio, int fim){
    // get sizes
    int dir_size = meio-ini+1;
    int esq_size = fim-meio;

    // copiar os dados pras arr aux 
    int dir[dir_size], esq[esq_size];
    for (int i=0; i<dir_size;i++) dir[i]=arr[ini+i]; 
    for (int i=0; i<esq_size;i++) esq[i]=arr[meio+1+i];

    // compara os elem das duas arrays
    int i = 0, j = 0, k = ini;
    for(; i < dir_size && j < esq_size; k++){ 
        if (dir[i] > esq[j]){
            arr[k] = dir[i];
            i++;
        } 
        else {
            arr[k] = esq[j];
            j++;
        }
    }

    // copia oq sobrou
    while(i<dir_size){
        arr[k] = dir[i];
        i++;
        k++;
    } 
    while (j<esq_size){
        arr[k] = esq[j];
        j++;
        k++;
    }
}

void mergeSort(int* arr, int ini, int fim){
    if (ini < fim){
        int meio = ini+(fim-ini)/2;
        mergeSort(arr, ini, meio);
        mergeSort(arr, meio+1, fim);
        merge(arr, ini, meio, fim);
    }
}

int main(){
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    mergeSort(arr, 0, n-1);

    for(int i = 0; i < n; i++) cout << arr[i]<< " ";
    cout << endl;

    return 0;
}
