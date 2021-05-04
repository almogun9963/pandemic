#include "Board.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "City.hpp"
#include "Medic.hpp"
using namespace pandemic;

Medic& Medic::treat(City city1){
    return *this;
}