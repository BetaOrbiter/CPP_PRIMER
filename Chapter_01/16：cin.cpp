#include<iostream>
int main(void){
    int sum=0,v=0;
    while(std::cin>>v)
        sum+=v;
    std::cout<<sum;
    return 0;
}