#ifndef GAME_HPP
#define GAME_HPP

class Game {
    public:
        Game();
        ~Game();
        virtual void start() = 0;
        virtual void quit() = 0;
        virtual void pause() = 0;
        virtual void play() = 0;
        virtual void initPlayer() = 0;
        virtual void endGame() = 0;
};

#endif