#include<iostream>
#include<Windows.h>

int main(){
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    std::cout<<"Массив до сортировки: ";
    int arr[10]{10, 3, 4, 1, 8, 9, 7, 2, 6, 5};
    for(int i =0;i<10;i++){
        std::cout<<arr[i]<<' ';
    }
    std::cout<<std::endl;
    for(int i = 0; i<9;i++){
        for(int j =9; j>i ;j--){
            int revers=arr[j];
            if(arr[j]<arr[j-1]){
                arr[j]=arr[j-1];
                arr[j-1]=revers;
            }
        }
    }
    std::cout<<"Массив после сортировки: ";
    for(int i =0;i<10;i++){
        std::cout<<arr[i]<<' ';
    }
    return EXIT_SUCCESS;
}

