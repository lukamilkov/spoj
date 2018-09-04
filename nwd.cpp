#include <iostream>
#include <cmath>
#include <algorithm>
bool check_range(const int& var)
{
  if( (0<= var) && (var <= 1000000))
    return true;
  else
    return false;
}
int return_tests_numbers()
{

  std::cout << "\nEnter number od tests: ";
  int n;
  while( std::cin >> n && !std::cin.good())
  {
    if(n > 0)
      std::cin.good();
  }
  return n;
}


int nwd(int a, int b) // zwraca nwd
{
  if(b!=0)
    return nwd(b,a%b);

  return a;
}


int set_a_b(int& a, int& b)
{
  if(b>a)
    std::swap(a,b);

  if( b != 0)
    return nwd(b,a%b);
  return a;
}

int wczytaj_ocen()
{
  int a {};
  int b {};
  int help_var {};
  while( !std::cin.good() ){

    std::cin.ignore();

    std::cout << "\nSet a: ";
    std::cin >> a;
    std::cout << "\nSet b: ";
    std::cin >> b;

    //if((a => 0 && b => 0) && ( a <= 1000000 && b <= 1000000))

    if(check_range(a) && check_range(b))
        return true;
    std::cin.good();
  }

  help_var = set_a_b(a,b);

  return help_var;
}

void show_all(int * tab, const int& n)
{
  std::cout << "\n\nNow looks like this: ";
  for(int i = 0 ; i<n ; i++)
  std::cout << '\n'<< i+1 << ": "<<tab[i]<<'\n';
}
void wczytaj(int&a , int&b)
{
  std::cin.sync();
  std::cin.clear();

  std::cout << "\nSet a: ";
  std::cin >> a;
  std::cout << "\nSet b: ";
  std::cin >> b;
}
int main()
{

  std::cout << "\nEnter number od tests: ";
  int in_tests;
  std::cin >> in_tests;
  int * tab = new int[in_tests];


  int a,b;
  int score = 0;
  for(int i=0;i<in_tests;i++)
  {
    wczytaj(a,b);
    score = set_a_b(a,b);

    tab[i] = score;

    score = 0;
  }


  show_all(tab,in_tests);


  std::cout << "\nLaFine!";
  return 0;
}
