#include <stdio.h>
#include <math.h>

struct circulo{
    Ponto p;/*centro do circulo*/
    float r;/*raio*/
};
typedef struct circulo Circulo;

int interior (Circulo* c, Ponto* p){
    float d = distancia(&c->p, p);
    return(d <c->r);
}

struct ponto {
    float x;
    float y;
};
typedef struct ponto Ponto;

float distancia (Ponto* p, Ponto* q){
    float d = sqrt ((q->x - p->x)* (q->x - p->x)
                + (q->y - p->y) * (q->y - p->y));
    return d;
}

int main(){
    float p, q;
    printf("Informe o ponto x:");
    scanf("%f", &p.x);
    printf("Informe o ponto y:");
    scanf("%f", &q.y);
    distancia(p,q);
}