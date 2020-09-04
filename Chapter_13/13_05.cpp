#include <string>

class HasPtr {
public:
	HasPtr(const std::string& s = std::string()):
		ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr& right): 
        ps(new std::string(*right.ps)), i(right.i){}
private:
	std::string *ps;
	int i;
};