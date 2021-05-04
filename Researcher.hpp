#include "Color.hpp"
#include "City.hpp"
#include "Board.hpp"
#include "Player.hpp"
namespace pandemic{
    class Researcher: public Player{
    public:
        Researcher(Board b, City city1): Player(b, city1){}
        Researcher& discover_cure(Color color1);
        const std::string role() const{return "Researcher";}
    };
}