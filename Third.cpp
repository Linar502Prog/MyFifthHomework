#include<iostream>

int main(){
    setlocale(LC_ALL,"RUS");
    const int rows{3};
    const int columns{6};
    int arr[rows][columns]{
        {1,  5, 6, 7, 8, 9},
        {11,34,80,50,43,21},
        {3, 15,42,33,12,17}
    };
    int minn_i{0},minn_j{0},maxx_i{0},maxx_j{0};
    int minn{arr[0][0]},maxx{arr[0][0]};
    std::cout<<"Массив"<<std::endl;
    for(int i = 0; i<rows;++i){
        for(int j = 0; j<columns;++j){
            std::cout<<arr[i][j]<<'\t';
            if(arr[i][j]<minn){
                minn_i=i;
                minn_j=j;
                minn=arr[minn_i][minn_j];
            }
            if(arr[i][j]>maxx){
                maxx_i=i;
                maxx_j=j;
                maxx=arr[maxx_i][maxx_j];
            }
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    std::cout<<"Индекс минимального элемента: "<<minn_i<<"\t"<<minn_j<<std::endl;
    std::cout<<"Индекс максимального элемента: "<<maxx_i<<"\t"<<maxx_j<<std::endl;
    return EXIT_SUCCESS;
}
