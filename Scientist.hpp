#include "Color.hpp"
#include "Board.hpp"
#include "Player.hpp"
#include "City.hpp"
namespace pandemic{
    class Scientist: public Player{
    private:
        int hand;
    public:
        Scientist(Board b, City city1, int hand): Player(b, city1){}
        Scientist& discover_cure(Color color1);
        const std::string role() const{return "Scientist";}
    };
}