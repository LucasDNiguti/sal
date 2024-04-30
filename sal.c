#include <stdio.h>
#include <stdlib.h>

void nome(char *name){
    printf("\nDigite seu nome:");
    scanf("%s",name);
}

void salario(float *sal){
    printf("\nDigite seu salário:");
    scanf("%f",sal);
}

int main() {

  char name[100];
  float sal;

 nome(name);
 salario(&sal);

 printf("\nNome: %s", name);
  float Salperce = (sal * 28.5) / 100;
  sal = sal + Salperce;
 printf("\nSalario: %2.f",sal);

 return 0;
}