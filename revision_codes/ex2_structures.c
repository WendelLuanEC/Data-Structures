#include<stdio.h>
struct ponto{
	float x;
	float y
};

void catch(struct ponto *pp){
	printf("Enter the coordinates (x,y) \n");
	scanf("%f", &pp->x);
	scanf("%f", &pp->y);
}

void print(struct ponto *pp){
	printf("The coordinates of point is: %.2f, %.2f", pp->x, pp->y);
}

int main(void){
	struct ponto p;
	catch(&p);
	print(&p);
	return 0;
}

