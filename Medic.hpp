#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
using  namespace std;
namespace pandemic{
    class Medic: public Player{
    public:
        Medic(Board b, City city1): Player(b, city1){}
        Medic& treat(City city1);
        const string role() const{return "Medic";}
    };
}