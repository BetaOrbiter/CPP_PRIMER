#include <iostream>
using std::cin;
using std::cout;
using std::endl;
void MyFact (int);
void Absolute (int);
int main (void)
{
    int val;
    cin>>val;
    MyFact(val);
    Absolute(val);
    return 0;
}

void MyFact(int val)
{
    long sum = 1;
    while(val>1)
        sum*=val--;
    cout<<sum<<endl;
}

void Absolute(int val)
{
    if(val<0)
    val = -val;
    cout<<val<<endl;
}