#include <iostream>
#include <cmath>

int main() {
  int a, b , c ;
  std::cout << " Please give the valuse for a  : " ; 
  std::cin >> a ;
  std::cout << " Please give the valuse for b  : " ; 
  std::cin >> b ;
  std::cout << " Please give the valuse for c  : " ; 
  std::cin >> c ;

  double root1 ;
  double root2 ;

  root1 = (-b +std::sqrt(b*b - 4*a*c)) /(2*a);
  root2 = (-b -std::sqrt(b*b - 4*a*c)) /(2*a);
  std::cout << "Root 1 is : " <<root1;
  std::cout << "\nRoot 2 is : " <<root2;

}