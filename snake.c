#include "snake.h"

int main() {

    //Initialization
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    curs_set(0);
    timeout(100);

    //Creates Player
    Head head = {25,7};
    head.next = NULL;
    head.last = NULL;

    gameState = INTRO;

    //Creates Food
    Food food;
    SpawnsFood(&food);

    //End Game bool
    int endsGame = 0;

    //Creates New Body flag
    int newBody = 0;

    //Detects last key to prevent body inversion
    int lastKey = 0;

    while(!endsGame) {
        int ch;
        switch (gameState) {
            case INTRO:
                ch = getch();
                attron(A_BOLD);
                    mvprintw(7,20,"SNAKE.C");
                attroff(A_BOLD);
                    mvprintw(9,16,"Press S to Start");
                    mvprintw(11,13,"Press F to Exit Anytime");
                if (ch == 's')
                    gameState = GAME;
                else if (ch == 'f')
                     endsGame = 1;
            break;
            
            case GAME:
                gameState = RunsGame(&head,&food,&newBody,&lastKey);
                if (gameState == 10)
                    endsGame = 1;
            break;

            case GAMEOVER:
                ch = getch();
                mvprintw(7,20,"Game Over");
                mvprintw(9,15,"Press R to Restart");
                if (ch == 'r') {
                    GameOver(&head,&food,&lastKey);
                    gameState = GAME;
                }
                else if (ch == 'f')
                    endsGame = 1;
            break;        
        }

        refresh();
    
    }

    endwin();

    return 0;
}

