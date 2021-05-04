#include <iostream>
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"

using namespace std;
using namespace pandemic;
namespace pandemic{
    bool Board::is_clean() {
        return true;  
    }
    int& Board::operator[] (const City& city1){
        return numOfDiseases;
    }
    ostream& operator<< (ostream& os, const Board& b) {
        os << " " << endl;
        return os;
    }
    Board& Board::remove_cures(){
        return *this;
    }
};