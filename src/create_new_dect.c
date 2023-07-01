#include "../inc/blackJack.h"

void create_new_dect(t_cards **root)
{
        int i;
        int j;
        int cards;

        if (!(*root) -> dect)
                (*root) -> dect = (int **)malloc(sizeof(int *) * 4); 
        i = 0;
        j = 0;
        while (i < 4){
                j = 0;
                cards = 1;
                (*root) -> dect[i] = (int *)malloc(sizeof(int) * 14);
                while (j < 13){
                        (*root) -> dect[i][j] = cards;
                        j++;
                        cards++;
                } 
                i++;
        } 
}
