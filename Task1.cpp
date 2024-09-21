#include<iostream>
#include<vector>

void swapVec(std::vector<int>& vec_0, std::vector<int>& vec_1)
{
    int count = vec_0.size() > vec_1.size() ? count = vec_1.size() : count = vec_0.size();
    /*Нахожу меньший вектор на случай если их размер будет отличаться и мы не вышли за предел вектора*/
    for(int i = 0; i < count;++i)
    {
        int temp = vec_0[i];
        vec_0[i] = vec_1[i];
        vec_1[i] = temp;
    }
}

int main ()
{
    std::vector<int> vec_0 = {1,2,3,4};
    std::vector<int> vec_1 = {2,4,6,8};
    swapVec(vec_0,vec_1);
    std::cout<<"vec_0: ";
    for(int i = 0; i < vec_0.size();++i)
    {
        std::cout<<vec_0[i]<<" ";
    }    
    std::cout<<"\nvec_1: ";
    for(int i = 0;i < vec_1.size();++i)
    {
        std::cout<<vec_1[i]<<" ";
    }
}