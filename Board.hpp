#pragma once
#include "City.hpp"
#include "Color.hpp"
#include <iostream>

using namespace std;
namespace pandemic {
    class Board
    {
    public:
        int numOfDiseases;
        Board(){}
        bool is_clean();
        int& operator[] (const City& city1) ;
        friend ostream& operator<< (ostream&, const Board& b);
        Board& remove_cures();
    };
}