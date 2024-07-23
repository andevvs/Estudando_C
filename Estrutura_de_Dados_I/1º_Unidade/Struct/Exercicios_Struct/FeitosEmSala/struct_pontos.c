#include <stdio.h>
#include <math.h>
typedef struct ponto {
    float x;
    float y;
}Ponto;

float distancia(Ponto* p, Ponto* q) {
    float d = sqrt((q->x - p->x) * (q->x - p->x) + (q->y - p->y) * (q->y - p->y));
    return d;
}

typedef struct circulo {
    Ponto p; /* centro do circulo */
    float r; /* raio */
}Circulo;


int interior(Circulo* c, Ponto* p) {
    float d = distancia(&c->p, p);
    return (d < c->r);
}

int main() {
    Ponto p;
    Ponto q;
    Circulo c;
    printf("Informe o ponto x do centro do círculo: ");
    scanf("%f", &c.p.x);
    printf("Informe o ponto y do centro do círculo: ");
    scanf("%f", &c.p.y);
    printf("Informe o raio do círculo: ");
    scanf("%f", &c.r);
    printf("Informe o ponto x a ser testado: ");
    scanf("%f", &p.x);
    printf("Informe o ponto y a ser testado: ");
    scanf("%f", &p.y);
    if (interior(&c, &p)) {
        printf("O ponto está dentro do círculo.\n");
    } else {
        printf("O ponto está fora do círculo.\n");
    }

    return 0;
}
