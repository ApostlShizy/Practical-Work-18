#include<iostream>

void evenDigits(long long num,int & ans)
{    
    if ((num % 10) % 2 == 0)
    {
        ++ans;        
    }
    num /= 10;
    if (num != 0)
    {
        evenDigits(num, ans);
    }
}

int main()
{
    int ans = 0;    
    evenDigits(9223372036854775806, ans);
    std::cout << "Ans is: " << ans;
}