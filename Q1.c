#include<stdio.h>

int main(){
    
    float metros;
   
    printf("insira um valor em metros: ");
    scanf("%f" , &metros);
    
    float decimetros = metros * 10;
    float centimetros = metros * 100;
    float milimetros = metros * 1000;
    
    printf("%2.f metros equivale a:\n", metros);
    printf("%2.f decimetros equivale a:\n", decimetros);
    printf("%2.f centimetros equivale a:\n", centimetros);
    printf("%2.f milimetros equivale a; \n", milimetros);

    return 0; 
} 
