#include<iostream>
#include<cmath>


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


//-------Main------
int main(void){
    int i, max = 100, min= 50 , sum = 0;
    bool esprimo;

    for(i=min; i<max; i++){
        esprimo= es_primo(i);
        if(esprimo){
            sum += i;
        }
    }
    std::cout<<sum<<"\n";

    return 0;
}