/*
 * 
 * WORK IN PROGRESS
 * 
 */ 


#include <stdio.h>
#include <stdlib.h>

#define DECKSIZE 52       /* the number of cards in the deck */
#define MAXHANDSIZE 12    /* max cards players can hold */

/* simple game of blackjack */

int deal_card(int deck[], int hand[]);

int get_suit(int card_index);
int get_val(int card_index);

int get_hand_val(int hand[]);
void print_card(int card_index);

// deal a card
// remove it from deck
// ask if you want to stay or check

int main()
{   
    __time_t t;
    srand((unsigned) time(&t));

    /* deck is in the order A-K; club, spade, heart, diamond  */
    int deck[DECKSIZE], playerhand[MAXHANDSIZE];

    int i;
    int card;

    for (i = 0; i < DECKSIZE; ++i)
        deck[i] = 1;
    for (i = 0; i < MAXHANDSIZE; ++i)
        playerhand[i] = -1;

    for (i = 0; i < 10; ++i) {
        card = deal_card(deck, playerhand);
        print_card(card);
        printf("Player hand value: %d\n", get_hand_val(playerhand));
    }

    return 0;
}

/* deal_card: returns a random card index and removes it from deck */
int deal_card(int deck[], int hand[])
{
    int r, i;

    do
    {
        r = rand() % DECKSIZE;
    } while (deck[r] == 0);

    i = 0;
    while (hand[i] >= 0) {
        ++i;
    }
    
    deck[r] = 0;
    hand[i] = r;

    return r;
}

/* get_suit: get card suit index from deck index */
int get_suit(int i)
{
    return (i % 52) / 13;
}

/* get_suit: get card value index from deck index */
int get_val(int i)
{
    return (i % 52) % 13;
}

/* get_hand_val: get total value of cards in hand */
int get_hand_val(int playerhand[])
{
    int i, hand_val;

    hand_val = 0;
    for (i=0; playerhand[i] >= 0; ++i)
        hand_val += (get_val(playerhand[i]) + 1); 
    return hand_val;
}

/* print_card: prints a human readable card name from its index */
void print_card(int i)
{
    int suit, val;

    suit = get_suit(i);
    val = get_val(i);

    switch (suit)
    {
    case 0 :
        printf("C-");
        break;
    case 1 :
        printf("S-");
        break;
    case 2 :
        printf("H-");
        break;
    case 3 :
        printf("D-");
        break;
    default:
        printf("\nHOW DID YOU EVEN GET HERE?\n");
    }

    switch (val)
    {
    case 0 :
        printf("A");
        break;
    case 10 :
        printf("J");
        break;
    case 11 :
        printf("Q");
        break;
    case 12 :
        printf("K");
        break;
    default:
        printf("%d", val+1);
    }

    printf("\n");

}


