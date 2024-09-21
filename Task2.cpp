#include<iostream>

int count_jumps(int n,int k = 3,int current_place = 0)
{
    int count = 0; 
   
    if(current_place > n)
    {
        return count;
    }
    if(current_place == n)
    {
        return ++count;
    }
    for(int i = 1; i <= k;++i)
    {        
        count += count_jumps(n,k,current_place + i);                            
    }   
    
    return count;
}

int main ()
{   
    std::cout<<"Number of variations: " << count_jumps(3,2);
}