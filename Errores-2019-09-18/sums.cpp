#include<cstdio>
#include<cmath>

//----- declarar funciones -----
double suma1(int N);
double suma2(int N);
double suma3(int N);

//----- Main -----
int main(void){
    int N;
    double sum1, sum2, sum3, d1, d2;

    for(N=1; N <= 10000; N++){
        sum1= suma1(N);
        sum2= suma2(N);
        sum3= suma3(N);
        d1= std::fabs(sum1-sum3)/sum3;
        d2= std::fabs(sum2-sum3)/sum3;
        std::printf("%10d\t%24.16e\t%24.16e\t%24.16e\t%24.16e\t%24.16e\n", N, 
            sum1, sum2, sum3, d1, d2);
    }


    return 0;
}

//----- Funciones -----
double suma1(int N){
    double sum=0;
    double sign = -1.0;
    for(int n=1; n <= 2*N; n++){
        sum+= sign*n/(n+1);
        sign *= -1.0;    
    }
    return sum;
}

double suma2(int N){
    double sum, sum1=0, sum2=0;
    for(int n=1; n <= N; n++){
        sum1+= (2.0*n-1.0)/(2*n);
        sum2+= (2.0*n)/(2*n+1);      
    }
    sum= -sum1+sum2;
    return sum;
}

double suma3(int N){
    double sum=0;
    for(int n=1; n <= N; n++){
        sum+= 1.0/(2*n*(2*n+1));      
    }
    return sum;
}