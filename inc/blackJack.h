#ifndef BLACK_JACK_H
#define BLACK_JACK_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TIME_RAND() srand((unsigned)time(0))

typedef struct s_cards{
        int *type_cards;// 1 Clubs
                        // 2 Diamonds
                        // 3 Hearts
                        // 4 Spades
        int **dect;
        int *player;

}t_cards;

/*
 * create_new_game.c
 */
void create_new_dect(t_cards **root);

/*
 *  player_hand.c
*/
void player_hand(t_cards **root);



#endif // !BLACK_JACK_H
