#pragma once
#include "Board.hpp"
#include "City.hpp"
#include <vector>

using namespace std;

namespace pandemic {
    class Player {
        private:
            Board& b;
            vector<City> hand;
            City city1;
        public:
            Player(Board& b, City city1): b(b), city1(city1){}
            Player& take_card(const City& city1);
            Player& drive(const City& city1);
            Player& fly_charter(const City& city1);
            Player& fly_shuttle(const City& city1);
            virtual const string role(){ return "Player";}
            virtual Player& fly_direct(const City& city1);
            virtual Player& build();
            virtual Player& discover_cure(const Color& color1);
            virtual Player& treat(const City& city1);
    };
}