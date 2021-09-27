#include <iostream>
#include <vector>
#include <cpr/cpr.h>

int main()
{
    std::string query = "post";
    cpr::Url url = cpr::Url{"http://httpbin.org/"+ query};

    std::vector<cpr::Pair> vec;
    vec.push_back({"zorg", "red"});
    vec.push_back({"dog", "black"});
    vec.push_back({"cat", "black"});
    vec.push_back({"cat2", "blue"});
     
    
    cpr::Payload p(vec.begin(), vec.end());
    
    auto r = cpr::Post(url, p);
    std::cout << r.text <<std::endl;
}