#include<iostream>
#include<cmath>

//Declaracion de funciones
double suma_armonica(int N);

//----- Main -----
int main(void){
    int N;
    for(N=1; N<=1000; N++){
        std::cout<<N<<"\t"<<suma_armonica(N)<<"\n";
    }
    return 0;
}

//----- Funciones -----
double suma_armonica(int N){
    double suma = 0; 
    for (double i = 1; i <= N; i++){
        suma += 1.0/i;
    }

    return suma;
}