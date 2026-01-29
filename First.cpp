#include<iostream>

int main(){
    int arr[10]{1,2,3,4,5,6,7,8,9,10};
    for(int i = 0;i<9;++i){
        std::cout<<arr[i]<<',';
    }
    std::cout<<arr[9]<<std::endl;
    return EXIT_SUCCESS;
}
