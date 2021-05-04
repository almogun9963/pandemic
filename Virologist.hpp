#include "Board.hpp"
#include "City.hpp"
#include "Player.hpp"
#include "Color.hpp"
using namespace std;
namespace pandemic{
    class Virologist: public Player{
    public:
        Virologist(Board& b, City city1) : Player(b, city1){}
        Virologist& treat(City city1);
        const string role() const{return "Virologist";}
    };
}