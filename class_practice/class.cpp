#include "class.hpp"
#include <iostream>

Movie::Movie(std::string add_movie_name, std::string add_actor_name)
: movie_name(add_movie_name), actor_name(add_actor_name){};

std::string Movie::get_movie_name() {
    return movie_name;
}

std::string Movie::get_actor_name() {
    return actor_name;
}

Movie::~Movie() {
    std::cout << "Goodbye " << movie_name << "\n";
    std::cout << "Goodbye " << actor_name << "\n";
}

Sport::Sport(std::string add_sport_name, std::string add_player_name, int score)
: sport_name(add_sport_name), player_name(add_player_name), score(0){};

std::string Sport::get_sport_name() {
    return sport_name;
}

std::string Sport::get_player_name() {
    return player_name;
}

int Sport::get_score() {
    return score;
}

void Sport::add_score() {
    score = score + 1;
}

Sport::~Sport() {
    std::cout << "Your final score is " << score << "\n";
    std::cout << "Your favorite sport was " << "\n";
    std::cout << "Goodbye " << player_name << "\n";
}
