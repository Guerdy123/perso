#include <stdio.h>

struct fecha{
    unsigned int mes,dia,anyo;
};
struct tiempo{
    unsigned int horas ,minutos;
};
struct persona{
    char nombre[30];
    unsigned int edad;
    float altura;
    int peso;
    struct fecha fe;
};
struct persona_empleado{
    struct persona unapersona;
    long int salario;
    unsigned int horas_por_semana;
};
void entrada(struct persona_empleado* p);
void salida(struct persona_empleado up);
int main() {

    struct persona_empleado p;
    entrada(&p);
    salida(p);
    return 0;
}
void entrada(struct persona_empleado * p){
    printf("Digite su nombre:");
    gets(p->unapersona.nombre);
    printf("Digite su edad:\n");
    scanf("%d",&p->unapersona.edad);
    printf("Digite su altura:");
    scanf("%f",&p->unapersona.altura);
    printf("Digite su peso:");
    scanf("%d",&p->unapersona.peso);
    printf("Digite su fecha de nacimiento:\n");
    scanf("%d %d %d",&p->unapersona.fe.dia,&p->unapersona.fe.mes,&p->unapersona.fe.anyo);
    printf("Digite su salario:");
    scanf("%ld",&p->salario);
    printf("Ingresa horas por semana:");
    scanf("%d",&p->horas_por_semana);

}
void salida(struct persona_empleado up){
    printf("Datos del empleado:");
    puts("\n\n \t________________");
    printf("Nombre:%s\n",up.unapersona.nombre);
    printf("Edad: %d\n",up.unapersona.edad);
    printf("Altura: %.2f\n",up.unapersona.altura);
    printf("Peso: %d\n",up.unapersona.peso);
    printf("Fecha de nacimiento: %d/%d/%d\n",up.unapersona.fe.dia,up.unapersona.fe.mes,up.unapersona.fe.anyo);
    printf("Salario:%ld\n",up.salario);
    printf("Horas por semana:%d\n",up.horas_por_semana);

}
