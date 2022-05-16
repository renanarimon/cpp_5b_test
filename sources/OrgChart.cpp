#include "OrgChart.hpp"

namespace ariel{
        OrgChart::OrgChart(){}
        OrgChart::OrgChart(OrgChart& other){}
        OrgChart::OrgChart(OrgChart&& org) noexcept{}
        OrgChart& OrgChart::operator=(const OrgChart& org){return *this;}
        OrgChart& OrgChart::operator=(OrgChart&& org) noexcept{return *this;}
        OrgChart::~OrgChart(){}
        OrgChart OrgChart::add_root(std::string name){return *this;}
        OrgChart OrgChart::add_sub(std::string employer, std::string employee){return *this;}
        std::string* OrgChart::begin_level_order(){
            std::string a = "a";
            std::string* ptr;
            return ptr;
        }
        std::string* OrgChart::end_level_order(){
            std::string a = "a";
            std::string* ptr;
            return ptr;
        }
        std::string* OrgChart::begin_reverse_order(){
            std::string a = "a";
            std::string* ptr;
            return ptr;
        }
        std::string* OrgChart::reverse_order(){
            std::string a = "a";
            std::string* ptr;
            return ptr;
        }
        std::string* OrgChart::begin_preorder(){
            std::string a = "a";
            std::string* ptr;
            return ptr;
        }
        std::string* OrgChart::end_preorder(){
            std::string a = "a";
            std::string* ptr;
            return ptr;
        }
        std::string* OrgChart::begin(){
            std::string a = "a";
            std::string* ptr;
            return ptr;
        }
        std::string* OrgChart::end(){
            std::string a = "a";
            std::string* ptr;
            return ptr;
        }

        std::ostream &operator<<(std::ostream &out, const OrgChart &org){
            return out;
        }
}