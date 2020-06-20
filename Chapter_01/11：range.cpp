#include<iostream>
int main(void){
    int low,high;
    std::cin>>low>>high;
    while(low<=high){
        std::cout<<low++;
    }
    return 0;
}