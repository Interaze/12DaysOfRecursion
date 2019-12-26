#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char * GlobeGifts[12] = {"A partridge in a pear tree.\n", "Two turtle doves\n","Three french hens\n","Four calling bird\n","Five golden rings\n","Six geese a-laying\n","Seven swans a-swimming\n","Eight maids a-milking\n","Nine ladies dancing\n","Ten lords a-leaping\n","Eleven pipers piping\n","Twelve drummers drumming\n"};


char m[1000];
const char * dayOfChristmas(int day);

int main() {
	dayOfChristmas(12);
	return 1;
}

const char * dayOfChristmas(int day){
	char temp[1000];

	if(day == 1){
		printf("On the int %d day of Cristmas My True Love Gave to Me:\n%s", day, GlobeGifts[0]);
		return GlobeGifts[0];
	}

	strcpy(temp, GlobeGifts[day - 1]);
	strcat(temp, dayOfChristmas(day - 1));
	strcpy(m, temp);
	printf("On the int %d day of Cristmas My True Love Gave to Me:\n%s", day, m);
	return m;
}
