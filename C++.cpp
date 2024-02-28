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

// Задача 2
// Написать программу, которая подсчитывает: площадь равнобедренной трапеции с основаниями а и b и углом а при большем основании;

 #include <iostream>
 #include <cmath>
 using namespace std;
 int main()
 {
 double A,B,a;
 cin >> A >> B >> a;//A=меньшее оснавание,B=болшее оснавание,а=угол при болшем основание
 a=a*M_PI/180;
 cout<<fixed<<setprecision(8);
 cout <<”S=”<< ((A+B)*((B-A)/2*sin(a)/cos(a)))/2;
 return 0;
}

// Задача 3
//Написать программу, которая определяет: является ли сумма цифр двухзначного числа четной;

 #include <iostream>
 #include <cmath>
 using namespace std;
 int main() {
 int x;
 cin>> x;
 cout<< (((x/10)+(x%10))%2==0? "Четная": "Нечетная");
 return 0;
}

// Задача 4
//Разработать функцию f(x), которая число, кратное 5, уменьшает в 5 раз, а остальные числа увеличивает на 1. Продемонстрировать работу данной функции на примере.

 #include <iostream>
 #include <cmath>
 using namespace std;
 void func(int &x)
 { x=(x%5==0)? x/5: x+1;}
 int main()
 {
 int a;
 cin>>a;
 func(a);
 cout <<"a="<< a <<endl;
 return 0;
}

//Задача 5
// Дана точка на плоскости с координатами (х, у). Составить программу, которая выдает одно из сообщений «Да», «Нет», «На границе» в зависимости от того, лежит ли точка внутри заштрихованной области, вне заштрихованной области или на ее границе. Области задаются 
//графически следующим образом:

 #include <iostream>
 #include <cmath>
 using namespace std;
 int main() {
 double x,y;
 cin>> x>> y;
 if ((y<x)&&(x<70)&&(y>0)){
 cout<<"Inside";
 }
 else if ((y>x)||(x>70)||(y<0)){
 cout << "Outside";
 }
 else { cout<< "Border";
 }
 return 0;
}

// Задача 6
//Дан номер масти m (1 < m < 4) и номер достоинства карты к (6 < к < 14). Определить полное название соответствующей карты в виде «дама пик», «шестерка бубен» и т.д

 #include <iostream>
 using namespace std;
 int main()
 {
 int m,n;
 cin>>m>>n;
 switch (n)
 {
 case 6:cout<<"Шестерка "; break;
 case 7:cout<<"Семерка ";break;
 case 8:cout<<"Восьмерка ";break;
 case 9:cout<<"Девятка ";break;
 case 10:cout<<"Десятка ";break;
 case 11:cout<<"Валет ";break;
 case 12:cout<<"Дама ";break;
 case 13:cout<<"Король ";break;
 case 14:cout<<"Туз ";break;
 default :cout<< "Таких карт нет ";break;
 }
 switch (m)
 {
 case 1:cout<<"Пик ";break;
 case 2:cout<<"Крести ";break;
 case 3:cout<<"Черви ";break;
 case 4:cout<<"Бубен ";break;
 default:cout<<"Такик карт нет ";break;
 }
 return 0;
}

// Задача 7
// Вывести на экран: Таблицу стоимости для 10, 20, 30,..., 100 штук товара, при условии что одна штука товара стоит х руб (значение х водится с клавиатуры);
// Способ 1: с циклом 'For'

 #include <iostream>
 using namespace std;
 int main() {
 double x;
 cout <<"Введите цену товара:" << "\n";
 cin >> x;
 for(int i=10;i<=100;i+=10)
 cout << i << " шт. - " << x*i << " руб." << endl;
 return 0;
}
