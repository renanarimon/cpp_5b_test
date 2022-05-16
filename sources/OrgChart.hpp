# pragma once
#include <iostream>
#include<vector>
namespace ariel{
    class OrgChart
    {
    public:
        struct Node
        {
            std::string _data;
            std::vector<Node*> _children;
        };

    private:
        Node* _root;
        std::vector<std::string*> _order;
        friend std::ostream &operator<<(std::ostream &out, const OrgChart &org);
        void BFS();
        void Reverse_BFS();
        void PreOrder();


    public:
        OrgChart();
        OrgChart(OrgChart& other); // copy constructor
        OrgChart(OrgChart&& org) noexcept; // move constructor
        OrgChart& operator=(const OrgChart& org); // copy assignment operator
        OrgChart& operator=(OrgChart&& org) noexcept; // move assignment operator
        ~OrgChart();
        OrgChart add_root(std::string name);
        OrgChart add_sub(std::string employer, std::string employee);
        std::string* begin_level_order();
        std::string* end_level_order();
        std::string* begin_reverse_order();
        std::string* reverse_order();
        std::string* begin_preorder();
        std::string* end_preorder();
        std::string* begin();
        std::string* end();
    };

}

