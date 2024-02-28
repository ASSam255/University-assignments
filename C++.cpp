// Задача 1
// Написать программу, которая вычисляет значение выражения: 10 sin x+|(x^4)-(x^5)|;

  #include <iostream>
  #include <cmath>
  #include <iomanip>
  using namespace std;
  int main() {
  double x;
  cout<<"x=";
  cin>>x;
  cout<<fixed<<setprecision(6);
  cout<< 10*sin (x)+ abs(pow(x,4)-pow(x,5));
 return 0;
}
