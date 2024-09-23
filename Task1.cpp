#include<iostream>
#include<vector>

void swapVec(int array [], std::vector<int>& vec)
{
    for(int i = 0; i < vec.size();++i)
    {
        int temp = array[i];
        array[i] = vec[i];
        vec[i] = temp;
    }
}

int main ()
{
    int array [] = {1,2,3,4};    
    std::vector<int> vec = {2,4,6,8};
    swapVec(array,vec);  
    std::cout<<"array: ";
    for(int i = 0; i < vec.size();++i)
    {
        std::cout<<array[i]<<" ";
    }    
    std::cout<<"\nvec: ";
    for(int i = 0;i < vec.size();++i)
    {
        std::cout<<vec[i]<<" ";
    }
}