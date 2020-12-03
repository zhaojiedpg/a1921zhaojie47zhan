#include "zhang.h"


int main(int argc, char **argv){
	List *s = (List *)malloc(sizeof(List));
	InitList(s);
	Push(s,80);
	Push(s,90);
	Pop(s);
	Push(s,70);
	printf("栈顶元素为:%d\n", GetTop(s));

	
	
		printf("\n");
	deal();
		return 0;
}



