#include<stdio.h>
int i;char a;
int main(){
	for(a='a', i=1; a<='o' ,i<=15 ;i++,a++){
		printf("%c->%d\n",a,i);
	}
	return 0;
}