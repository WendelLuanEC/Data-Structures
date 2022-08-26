#include<stdio.h>

// features in c
typedef float Real;
typedef struct ponto Ponto;
typedef struct ponto *PPonto;

Real r = 10.5;
Ponto p; p.x = 10.0;
PPonto pp = &p;

// definition of new types
typedef struct ponto{
	float x;
	float y;
} Ponto;

// from there use
Ponto p;
p.x = 10.00;


