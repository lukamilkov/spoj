#include <iostream>
#include <cmath>

int enter_number_cases()
{
  int cases {};

  std::cout << "\nEnter the number cases to consider: ";
  std::cout << "\nNumber must be in the range 1 <= NUMBER <= 10: ";
  std::cin >> cases;

  return cases;
}

int * enter_number_to_callculate( const int& cas )
{

  unsigned a {};
  unsigned b {};
  int wynik {};
  int * tab = new int[cas];
  for(auto i = 0; i<cas; i++)
  {
    std::cin.ignore();
    std::cout << "\nEnter the value a: ";
    std::cin >> a;
    std::cout << "\nEnter the value b: ";
    std::cin >> b;

    wynik = std::pow(a,b);
    tab[i]=wynik;

  }

  return tab;
}

void show_all_vec(int * tab, const int& n)
{
  for(auto i=0; i<n;i++)
  std::cout << tab[i] << '\n';
}

int * cal_unity_of_result(int * tab, const int& num)
{
  for(auto i =0; i<num; i++)
    tab[i]=tab[i]%10;

  return tab;
}
int main()
{

  int test_case = enter_number_cases();

  std::cout << test_case;

  int * vec = enter_number_to_callculate(test_case);

  int * vec_unity = cal_unity_of_result(vec,test_case);
  show_all_vec(vec_unity, test_case);
  return 0;
}
