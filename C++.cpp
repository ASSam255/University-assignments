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

//Способ 2: с циклом 'While'
 #include <iostream>
 using namespace std;
 int main() {
 double x;
 cout <<"Введите цену товара:"<< "\n";
 cin >> x;
 int i = 10;
 while (i<=100) {
 cout << i << " шт. - " << x*i << " руб." << endl;
 i+=10;
 }
 return 0; 
}
//Способ 3: 'Do While'
  
 #include <iostream>
 using namespace std;
 int main() {
 double x;
 cout <<"Введите цену товара"<<"\n";
 cin >> x;
 int i = 10;
 do {
 cout << i << " шт. - " << x*i << " руб." << endl;
 i+=10;
 }
 while (i<=100);
 return 0;
}
//Задача 8
// Вывести на экран числа в виде следующей таблицы:
// 7
// 6 6
// 5 5 5
// 4 4 4 4
// 3 3 3 3 3

 #include <iostream>
 using namespace std;
 int main() {
 int s,c;
 cin>>s>>c;//что бы построить таблицу из любых чисел s=кол-во строк
 for(int i=1;i<=s;i++,cout <<endl)
 for (int j=1;j<=i;j+=1)
 cout <<c-i<<"\t";
 return 0;
}

// Задача 9 
//Постройте таблицу значений функции y=f(x) для Х€[а,Ь] с шагом h. Если в некоторой точке х функция не
//определена, то выведите на экран сообщение об этом.

 #include <iostream>
 #include <cmath>
 using namespace std;
 void f( double x) {
 if ( (x>1)|| (x<-1))
 cout << (sqrt(x*x-1));
 else
 cout<<"функция не определена" ;
 }
 int main()
 {
 double h, a, b ;
 cin >> a >> b >> h ;
 cout << "a\t \t \t y=f(x)\t\n" ;
 while (a<=b) {
 cout <<fixed<< a <<"\t \t" ;
 f(a);
 cout << endl;
 a+=h;
}

//Задача 10
// Написать программу, вычисляющую первые n элементов заданной последовательности:
 #include <iostream>
 #include <iomanip>
 #include <cmath>
 using namespace std;
 int main() {
 int n;
 double b,b1=1;
 cin >>n;
 if (n>0){
 cout << "b1=1"<<endl;
 for (int i=2;i<=n;i++){
 b=0.25*((3*b1)+1/(3*b1));
 cout << fixed<<setprecision(8);
 cout<< "b"<<i<<"="<<b<<endl;
 b1=b;
 }
 }
 return 0;
}
//Задача 11
// Для заданного натурального n и действительного x
//подсчитать следующие суммы:
//S=1^3-2^3+3^3...+(-1)^(n-1)*n^3
 #include <iostream>
 #include <cmath>
 using namespace std;
 int main (){
 int n,a=1,s1=1,a1=1;
 cin>>n;
 int i=2;
 while (i<=n){
 a=pow(i, 3);
 a1=a*(i%2==0?-1:1);
 s1+=a1;
 i++;
 }
 cout <<"S="<<s1;
}

//Задача 12
//В данной строке вставить символ c1 после каждого вхождения символа с2.
 #include <iostream>
 #include <string>
 using namespace std;
 int main(){
 string str,s;
 char s1,s2;
 getline(cin,str);
 cin >> s1 >> s2;
 for (int i=0;str.length()>i;i++){
 if (str[i]==s2){
 s+=s2;
 s+=s1;
 }else{
 s+=str[i];
 }
 }
 cout<< s<<endl;
}
