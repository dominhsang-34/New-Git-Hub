#include <iostream>
#include <iomanip>

int main()
{
    int n;
    std::cin>>n;

    long double factorial=1;
    long double geometricSequence=1;
    int i=1;
    long double sum=1;
    long double oldSum=0;
    while (sum-oldSum>0.001)
    {
        oldSum=sum;
        factorial=factorial*n;
        geometricSequence=geometricSequence*i;
        sum=sum+factorial/geometricSequence;
        i++;
    }
    std::cout<<std::fixed<<std::setprecision(4)<<sum;
}
