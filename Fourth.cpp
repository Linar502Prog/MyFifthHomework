#include<iostream>
#include<Windows.h>

int main(){
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int arr[10]{10,3,4,1,8,9,7,2,6,5};
    std::cout<<"Массив до сортировки: ";
    for(int a = 0; a<10; ++a){
        std::cout<<arr[a]<<" ";
    }
    std::cout<<std::endl;
    for(int i = 8; i>=0;--i){
        for(int j = 9; j>0;--j ){
            int rezerv=arr[i];
            if(arr[i]<arr[j]){
                arr[i]=arr[j];
                arr[j]=rezerv;
            }
            
        }
    }
    std::cout<<"Массив после сортировки: ";
    for(int b = 0; b<10; ++b){
        std::cout<<arr[b]<<" ";
    }
    std::cout<<std::endl;
    return EXIT_SUCCESS:
    
}
