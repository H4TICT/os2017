#include<stdio.h>
#include<string.h>
#include<pthread.h>
#define BUFFER_SIZE 10

int i,j;

typedef struct {
	char type; // 0=fried chicken, 1=French fries
	int amount; // pieces or weight
	char unit;  // 0=piece, 1=gram
} item;

item buffer[BUFFER_SIZE];
int first = 0;
int last = 0;

void produce(item *i) {
	while
	((first + 1) % BUFFER_SIZE == last) {
	// do nothing -- no free buffer item
	      }
	memcpy(&buffer[first], i,sizeof(item));
	first = (first + 1) % BUFFER_SIZE;
}

item *consume() {
	item *i = malloc(sizeof(item));
	while
	(first == last) {
	// do nothing -- nothing to consume
}

	memcpy(i, &buffer[last],
sizeof (item));
	last = (last + 1) % BUFFER_SIZE;
return i;
}
//produce items
iteam* produce( char type, int amount, char unit){
	item* i= malloc(sizeof(item));
	i->type= type;
	i->amount= amount;
	i->unit= unit;
return i;}

printf("First: %d ;   Last: %d", first, last);

int main(){
//3 items
        item item1;
	itemA.type='0';
	itemA.amount= 2;
	itemA.unit='0';

	item item2;
	itemB.type='1';
	itemB.amount= 5;
	itemB.unit='1';

	item item3;
	item.type='1';
	item.amount=8;
	item.unit='0';

//create 3 produce threads
for (i=0;i<3;i++){
pthread_t producer[i];
pthread_create (&producer[i],NULL,produceItems,NULL);
pthread_join (producer[i],NULL);
}
//consume 2 consume threads
for (j=0;j<2;j++){
pthread_t consumer[j];
pthread_create (&consumer[j],NULL,consumeItems,NULL);
pthread_join (consumer[j],NULL);
}
return 0;
}


