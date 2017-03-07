#include<stdio.h>
#include<string.h>
#define BUFFER_SIZE 10

typedef struct {
	char type;
	// 0=fried chicken, 1=French fries
	int amount;
	// pieces or weight
	char unit;
	// 0=piece, 1=gram
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

//create 2 items
int main(){
 
	item itemA;
	itemA.type='0';
	itemA.amount= 2;
	itemA.unit='0';

	item itemB;
	itemB.type='1';
	itemB.amount= 5;
	itemB.unit='1';

produce(&itemA); 
produce(&itemB);

item* consume1Item = consume();
	printf("Consume 1 item: type: %c amount: %d  unit: %c", consume1Item->type, consume1Item->amount, consume1Item->unit);

	return 0;
}


