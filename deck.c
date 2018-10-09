#include "deck.h"


int shuffle(){
	printf("Shuffling deck...\n\n");
	int count, i;
	for(i=0; i<52; i++){
		deck_instance.list[i].suit=C;
		if(i>1 && i<11){
		deck_instance.list[i].rank=(char) i
		}
		else{
			switch(i) {
				case 0 :
					deck_instance.list[i]=J;
					break;

				case 1 :
					deck_instance.list[i]=Q;
					break;

				case 11 :
					deck_instance
	}
}
