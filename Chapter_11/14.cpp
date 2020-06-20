/*
 * @Author: ¿Ó÷ﬁ≥œ 
 * @Date: 2020-04-04 00:04:20 
 * @Last Modifiecd by:   ¿Ó÷ﬁ≥œ 
 * @Last Modified time: 2020-04-04 00:04:20 
 */
#include<utility>
#include<iostream>
#include<vector>
#include<string>
#include<map>
class Families
{
public:
    using Child = std::pair<std::string,std::string>;//last name and birthday
    using Children = std::vector<Child>;
    using Data = std::map<std::string,Children>;
    void add(const std::string &firstName,const std::string &LastName,const std::string &birthday);
    void add(const std::string &firstName,const Child &chi);
    void print(void)const;
    void print(const std::string &firstName)const;
private:
    Data families;
public:
    Families()=default;
};
void Families::add(const std::string &firstName,const std::string &LastName,const std::string &birthday){
    families[firstName].push_back({LastName,birthday});
}
void Families::add(const std::string &firstName,const Child &chi){
    families[firstName].push_back(chi);
}
void Families::print(void)const{
    for(const auto&f:families){
        std::cout<<f.first<<":\n";
        print(f.first);
    }
}
void Families::print(const std::string &firstName)const{
    Data::const_iterator family;
    if(families.end()!=(family=families.find(firstName)))
        for(const auto&child:family->second)
            std::cout<<child.first<<' '<<child.second<<std::endl;
}
int main(void){
    Families f;
    for(std::string firstname;std::cout<<"Family name:\n",std::cin>>firstname&&"@q"!=firstname;)
        for(Families::Child chi;std::cout<<"name&birthday:\n",std::cin>>chi.first>>chi.second&&"@q"!=chi.first;)
            f.add(firstname,chi);
    
    f.print();
    return 0;
}