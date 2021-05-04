#include "Color.hpp"
#include "Board.hpp"
#include "Player.hpp"
#include "City.hpp"
using namespace std;
namespace pandemic{
    class FieldDoctor: public Player{
    public:
        FieldDoctor(Board b, City city1): Player(b, city1){}
        FieldDoctor& treat(City city1);
        const string role() const{return "FieldDoctor";}
    };
}