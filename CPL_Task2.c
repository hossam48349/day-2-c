#include <stdio.h>
# include<stdlib.h>
int main() {
	int sec, h, m, s;
	printf("Input seconds: ");
	scanf("%d", &sec);
	h = (sec/3600); 
	m = (sec -(3600*h))/60;
	s = (sec -(3600*h)-(m*60));
	printf("Hours:%d\n",h);
	printf("Minutes:%d\n",m);
	printf("Seconds:%d\n",s);
	system("pause");
	return 0;
}
