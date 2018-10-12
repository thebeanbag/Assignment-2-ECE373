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

  struct linked_list* iterator = target.hand;
  struct linked_list* previous = NULL; 
 

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

char check_add_book(struct player* target){

  struct player* temp;
  temp = target;
  int book=0;
  
  for(int i=0;i<=10;i++){
    //switch between each of the suits
    while(temp.hand.top != null){
      if(temp.hand.top.rank[C][i]!=NULL)
	book++;
      temp.hand.top = temp.hand.next;
    }
    if(book==4){
      //remove cards
      for(int j=0; j<4;j++){
	remove_card(target,card.rank[j][i]);
      }
      target.book[?++] = i;
    }
    
  }

}

int search(struct player* target, char rank){


}

int transfer_cards(struct player* src, struct player* dest, char rank){


}

int game_over(struct player* target){


}

int reset_player(struct player* target){



}

char computer_play(struct player* target){


}

char user_play(struct player* target){



}
