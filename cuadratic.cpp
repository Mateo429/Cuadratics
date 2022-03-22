#include<iostream>//Componente de la librería estándar usada para operaciones de entrada y salida en la terminal.
#include<cmath>//Librería matemática para funciones como sqrt()
#include<vector>//Librería que nos permite manipular arreglos de números con sus propios métodos.
std::vector<double> cuadratic1(const double a,const  double b, double c);//Se declaran dos funciones que recibirán los coeficientes de la ecuación y devolveran
std::vector<double> cuadratic2(const double a, const double b, double c);//Un vector de tamaño 2 con las dos raíces halladas.


int main(){

std::cout.precision(10);std::cout.setf(std::ios::scientific);//Se ajusta std::cout para que imprima en notación científica y con 10 decimales de precisión.

   for(int n=1;n<=10;++n){
//Realizamos un ciclo que, para cada valor de n el cual varía de 1 a 10, nos imprima, el correspondiente valor de n, y los resultados de cada cuadrática, fijando
//el valor de a y b a 1.0. Realizamos el ciclo empezando en n=1 dado que para n=0 la cuadrática toma soluciones complejas que nos devuleven un nan.

     std::cout<< n << cuadratic1(1.0,1.0,std::pow(10,-n))[0]<<" " << cuadratic1(1.0,1.0,std::pow(10,-n))[1]<<" "<<cuadratic2(1.0,1.0,std::pow(10,-n))[0]<<" "<<
     cuadratic2(1.0,1.0,std::pow(10,-n))[1]<<std::endl;

   }


    return 0;

}


//Se implementan las dos funciones, se declaran dentro de ellas el vector de solución, y se le asignan las correspondintes fórmulas cuadráticas.
std::vector<double> cuadratic1(const double a, const double b, double c){

    std::vector<double> sol;

    sol={(-b+std::sqrt(b*b-4*a*c))/2*a,(-b-std::sqrt(b*b-4*a*c))/2*a};

    return sol;
}

std::vector<double> cuadratic2(const double a, const double b, double c){

    std::vector<double> sol;

    sol={-2*c/(b+std::sqrt(b*b-4*a*c)),-2*c/(b-std::sqrt(b*b-4*a*c))};

        return sol;
}
