#include<stdio.h>

float somatorio(int m, float v[]){
	int i; float s = 0.0F;
	for(i=0;i<m;i++)
		s += v[i];
	return s;
}

int main (void){
	float v[] = {2.0, 3.0, 7.0};
	float s = somatorio(3, v);
	printf("the result of sum is: %f", s);
}
