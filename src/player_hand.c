#include "../inc/blackJack.h"

static void create_random_hand(t_cards **root)
{
        int card_number;
        int card_type;

CREATE_NEW_HAND:
        TIME_RAND();

        card_type = rand() % 4 + 1;
        card_number = rand() % 13;

        /*
         * 2  Diamonds
         * 7
         * */

        if ((*root) -> dect[card_type][card_number] == 0)
                goto CREATE_NEW_HAND;
        if (!(*root) -> player)
                (*root) -> player = (int *)malloc(sizeof(int) * 50);

}

void player_hand(t_cards **root)
{
        if (!(*root))
                (*root) = (t_cards *)malloc(sizeof(t_cards));

}
