#include <string>

class HasPtr {
public:
	HasPtr(const std::string& s = std::string()):
		ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr& right): 
        ps(new std::string(*right.ps)), i(right.i){}
    ~HasPtr(){delete ps;}
    HasPtr & operator=(const HasPtr &r);
private:
	std::string *ps;
	int i;
};
HasPtr & HasPtr::operator=(const HasPtr &r){
    delete ps;
    ps = new std::string(*r.ps);
    i = r.i;
    return *this;
}