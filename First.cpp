#include<iostream>

int main(){
    int arr[10]{1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<size-1;++i){
        std::cout<<arr[i]<<',';
    }
    std::cout<<arr[size-1]<<std::endl;
    return EXIT_SUCCESS;
}

