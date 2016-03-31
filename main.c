#include <stdio.h>

int count;
extern void writ_extern();
main(){
	count = 5;
	write_extern();
}
