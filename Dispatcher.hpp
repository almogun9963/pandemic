#include "Color.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "Player.hpp"
using namespace std;
namespace pandemic{
    class Dispatcher: public Player{
    public:
        Dispatcher(Board b, City city1): Player(b, city1){}
        Dispatcher& fly_direct(City city1);
        const string role() const{return "Dispatcher";}
    };
}