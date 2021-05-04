
#include "Color.hpp"
#include "Board.hpp"
#include "Player.hpp"
#include "City.hpp"
using namespace std;
namespace pandemic{
    class GeneSplicer: public Player{
    public:
        GeneSplicer(Board b, City city1): Player(b, city1){}
        GeneSplicer& discover_cure(Color color1);
        const string role() const{return "GeneSplicer";}
    };
}