#include <iostream>
#include <vector>

struct X {
	X() {std::cout << "X()" << std::endl;}
	X(const X&) {std::cout << "X(const X&)" << std::endl;}

    ~X(){std::cout << "~X()" << std::endl;}

    X& operator=(const X& r){std::cout << "operator="  <<std::endl; return *this;}
};
void aaa(const X&arg1, X arg2){};
int main(void){
    std::vector<X> vec(1);
    X x = vec.front();
    X x1 = x;
    x1 = x;
    auto xptr = new X;
    delete xptr;
    vec.push_back(x);
    vec.emplace_back(x);
    vec.pop_back();
    aaa(x, x1);
    return 0;
}