#include <stdio.h>
#include <stdlib.h>


int second_version(){
    int len = 1000;
    int y = 1; //переменная, которая следит за тем, чтобы простые числа ставились по порядку
    int k = 0; //переменная, которая следит, чтобы число ни на что не делилось
    int l; //переменная, для пересчёта числел
    int t; //переменная, для перебора элементов массива
    int* arr;// массив простых чисел
    arr = (int*) malloc(len * sizeof(int));
    if(arr == NULL){
        printf("err in array!");
        return 0;
    }
    else{
        printf("good\n");
    }
    for(t=0;t<=len;t++){
        arr[t]=1;
    }
    for(l=2;l<1000;l++){
        for(t=0;t<=y;t++){
            if(l%arr[t]==0){
                k++;
            }
        }
        if(k==2){
            arr[y]=l;
            y++;
        }
    k=0;
    }
    for(t=0;t<=y;t++){
        printf(" %d \n", arr[t]);
    }
    free(arr);
    return 0;
}

int first_version(){
    int l;
    int k;
    int y=0;
    for(l=1;l<=100;l++){
        for(k=1;k<=l;k++){
            if(l%k==0){
                y++;
            }
        }
        if(y==2){
            printf(" %d\n", l);
        }
        y=0;
    }
    return 0;
}

int main(){
    //first_version();
    second_version();
    return 0;
}
