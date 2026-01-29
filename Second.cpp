#include<iostream>
#include<Windows.h>

int main(){
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int arr[10]{1,3,15,6,7,8,90,2,4,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int minn{arr[0]},maxx{arr[0]};
    std::cout<<"Массив: ";
    for(int i = 0;i<size-1;++i){
        std::cout<<i<<',';
        if(arr[i]<minn){
            minn=arr[i];
        }
        if(arr[i]>maxx){
            maxx=arr[i];
        }
    }
    std::cout<<arr[size-1]<<std::endl;
    std::cout<<"Минимум: "<<minn<<std::endl;
    std::cout<<"Максимум: "<<maxx<<std::endl;
    
    return EXIT_SUCCESS;
}

