#include <iostream>
#include "class.hpp"
void swap_num(int &i, int &j) {
 
  i = i + 100;
  j = j + 100;
 
}

int main() {
    Movie cloud_atlas("Cloud Atlas", "Tom Hanks");

    std::cout << cloud_atlas.get_movie_name() << "\n";
    
    std::cout << cloud_atlas.get_actor_name() << "\n";

    Sport new_sport("Football", "Football Player");

    new_sport.get_score();

    new_sport.get_sport_name();

    new_sport.get_player_name();

    int first = 100;
    int second = 300;
    std::cout << "first: " << &first << " " <<first << "\n";
    std::cout << "second: " << &second <<" "<< second <<"\n";
    std::cout << "operation " << first + 100 << "\n";
    swap_num(first, second);
    std::cout << "function first: " << first << " and second: " << second << "\n";
    std::cout << "first: " << &first <<" "<<first << "\n";
    std::cout << "second: " << &second <<" "<<second <<"\n";

}