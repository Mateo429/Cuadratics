#include<iostream>
#include<cmath>
#include<vector>
std::vector<double> cuadratic1(const double a,const  double b, double c);
std::vector<double> cuadratic2(const double a, const double b, double c);


int main(){

std::cout.precision(10);std::cout.setf(std::ios::scientific);

   for(int n=0;n<=10;++n){

     std::cout<< n << cuadratic1(1.0,1.0,std::pow(10,-n))[0]<<" " << cuadratic1(1.0,1.0,std::pow(10,-n))[1]<<" "<<cuadratic2(1.0,1.0,std::pow(10,-n))[0]<<" "<<
     cuadratic2(1.0,1.0,std::pow(10,-n))[1]<<std::endl;

     }


   for (int n=0; n<=10; ++n){

       std::cout<<std::pow(10,-n)<<std::endl;
   }





    return 0;

}
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
