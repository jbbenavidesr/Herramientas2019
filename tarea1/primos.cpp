#include<iostream>
#include<cmath>

//Declaracion de funciones
bool es_primo(int x);

//-------Main------
int main(void){
    unsigned int i, min = 0, max = 5e7, contador = 0, suma = 0;

    for (i=min; i<max; i++){
        if (es_primo(i)){
            //contador++;
            //suma += i;
            //std::cout<<i<<"\n";
        }
        
    }
    //std::cout<<contador<<"\n";   
    //std::cout<<suma<<"\n";

    return 0;
}

//------ Funciones-----
bool es_primo(int x){
    //Funcion que revisa si un numero x es primo
    double raiz, mod;
    bool esprimo = true;
    if (x <= 1){
        esprimo = false;
    }

    else{
        raiz = sqrt(x);
        for(int i=2; i<=raiz; i++){
            mod = x%i;
            if (mod == 0){
                esprimo = false;
                break;
            }
        }
    }
    return esprimo;
}
