#include <string>

class Movie {

    std::string movie_name;
    std::string actor_name;

    public:
    Movie(std::string add_movie_name, std::string add_actor_name);

    std::string get_movie_name();
    std::string get_actor_name();

    ~Movie();
};

class Sport {

    std::string sport_name;
    std::string player_name;
    int score;

    public:
    Sport(std::string add_sport_name, std::string add_player_name, int score = 0);

    std::string get_sport_name();
    std::string get_player_name();
    int get_score();
    void add_score();

    ~Sport();
};