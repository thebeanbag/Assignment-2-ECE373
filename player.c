#include "player.h"

int add_card(struct player* target, struct card* new_card){

   /* Allocate space for new element */
   struct player* temp;  
   temp = (struct player.hand*)malloc(sizeof(struct player.hand));
   if (temp == NULL) { return -1; }

   /* Initialize new element */
   temp.hand.top = new_card;
   temp.hand.next = target.hand.top;
   
   /* Set list to temp, the new front of list*/
   target.hand = temp.hand;
   target.hand.size++;
   return 0;
}

int remove_card(struct player* target, struct card* old_card){

  struct player* iterator = target.hand;
  struct player* previous = NULL; 
 

   if (iterator == NULL) { return -1; } /* Return false; list is empty */
   
   while (iterator.top != old_card) { /* Check if we found the item */
     
     previous = iterator;               /* Store pointer to previous item */
     iterator = iterator.next;        /* Look at next item in list */
     
     if (iterator == NULL)             /* Check if end of list */
        return -1;                       /* Return false; didnâ€™t find item */
    }
    
    /* Found item; break out of loop */
    if (previous != NULL) 
       previous.next = iterator.next;	/* Remove item from list*/
    else {  
       target.hand = iterator.next;         /* Set new front of list */
       
    }
    /* Free memory of item we are removing */
    free(iterator);
    return 0; /* Return true; we found and removed the item */
  
}

void print_hand(struct player* target) {
     struct player* temp;
     int a = temp.player_number;
     temp = target;
     while (temp != NULL) {
       printf("Player %d's Hand -  %d", a, temp.hand.top);
       temp = temp.hand.next;
     }

}

void print_book(struct player* target) {
  struct player* temp;
  temp = target;
  int a=temp.player_number;
  for(int i=0;i<book_size;i++){
    printf("Player %d's Book - %d", a, temp.book[i]);
  }
}

char check_add_book(struct player* target){
  
  
}

int search(struct player* target, char rank){

  struct player* temp;
  temp = target;
  while(temp.hand.top != NULL){
 
    if(temp.hand.top.rank = rank)
      return 1;
    temp.hand.top = temp.hand.next;
  }
  return 0;
}

int transfer_cards(struct player* src, struct player* dest, char rank){

  struct player* from;
  from = src;
  int count = 0;

  while(from.hand.top != NULL){
    if(from.hand.top == NULL)
      return -1;
    if(temp.hand.top.rank = rank){
      add_card(dest,rank);
      count++;
    }
    from.hand.top = from.hand.next;
  }
  return count;
  
}

int game_over(struct player* target){

  if(target.book[7] != NULL)
    return 1;
  else
    return 0;

}

int reset_player(struct player* target){



}

char computer_play(struct player* target){


}

char user_play(struct player* target){



}
