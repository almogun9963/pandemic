#include "Color.hpp"
#include "Board.hpp"
#include "Player.hpp"
#include "City.hpp"
using  namespace std;
namespace pandemic{
    class OperationsExpert: public Player{
    public:
        OperationsExpert(Board b, City city1): Player(b, city1){}
        OperationsExpert& build();
        const string role() const{return "OperationsExpert";}
    };
}