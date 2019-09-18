#include<iostream>
#include<cmath>

//Declaracion de funciones
bool es_primo(int x);
int sum_primos(int min, int max);


//-------Main------
int main(void){
    int i, max = 100, min= 50 , sum = 0;

    std::cout<<sum_primos(min, max)<<"\n";

    return 0;
}

//------ Funciones-----
bool es_primo(int x){
    //Funcion que revisa si un numero x es primo
    double raiz, mod;
    bool esprimo = true;
    raiz = sqrt(x);
    for(int i=2; i<=raiz; i++){
        mod = x%i;
        if (mod == 0){
            esprimo = false;
            break;
        }
    }
    return esprimo;
}

int sum_primos(int min, int max){
    int i, sum = 0;
    bool esprimo;

    for(i=min; i<max; i++){
        esprimo= es_primo(i);
        if(esprimo){
            sum += i;
        }
    }
    return sum;
}