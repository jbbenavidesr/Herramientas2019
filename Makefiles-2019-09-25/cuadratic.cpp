#include<cstdio>
#include<cmath>

//----- Declarar Funciones -----


// ----- Main -----
int main(void){
    int n;
    float xp1, xp2, xm1, xm2;
    float a=1, b=1, c, det;
    std::printf("n\txp1\txp2\txm1\txm2");
    for(n=1; n<10; n++){
        c= std::pow(10,-n);
        det= std::sqrt(b*b-4*a*c);
        xp1= (-b+det)/(2*a);
        xm1= -(b+det)/(2*a);
        xp2= -(2*c)/(b+det);
        xm2= -(2*c)/(b-det);
        std::printf("%10d\t%24.16e\t%24.16e\t%24.16e\t%24.16e\n", 
            n, xp1, xp2, xm1, xm2);
    }


    return 0;
}

//----- Funciones -----
