#include <stdio.h>
/*函数声明*/
void func(void);
static int count = 5; /*全局变量*/
main(){
	while(count--){
		func();
	}
	return 0;
}
void func(void){
	static int i = 5;/*局部静态变量*/
	i++;

	printf("i is %d and count is %d\n", i, count);
}
