#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>

int * make_vec( const int& n)
{
  int * tab = new int[n];

  for(int i = 0; i<n; i++)
    tab[i] = i+1;

  return tab;
}

int set_first_number(int * tab, const int& n)
{
  tab[0] = 0;
  tab[1] = 1;
  for(auto i = 2; i<n;i++)
  {
    if(tab[i]%2 == 0)
      tab[i] = 0;
    else
      tab[i]=1;
  }
  return *tab;
}

void show_all_vec(int * tab, int n)
{
  for(auto i = 0; i<n; i++)
     std::cout << i+1 <<':'<<tab[i] << '\n';
}

int * enter_and_check(const int& n)
{
  int * tab = new int[n];

  for(auto i = 0 ; i<n ; i++ )
  {
    std::cin >> tab[i];
  }
  //show_all_vec(tab,n);
  return  tab;

}

void compare_entered_value(int * in , int * out, const int& test)
{
  int czek {};
  for(int i=0; i<test; i++)
  {
    czek = in[i];

    if(out[czek] == 1)
    {
      std::cout << "NIE\n";
    }else
    {
      std::cout << "TAK\n";
    }

  }
}

int main()
{

  //const int help = 10;
  std::cout << "\nEnter the number of test: "
            << "\nNumber from range 1...10000: ";
  const int range {10000};
  int test_value {};

  std::cin >> test_value;

  int * tab = make_vec(range);

  set_first_number(tab,range);

  int * entered_vec = enter_and_check(test_value);

  //show_all_vec(entered_vec,test_value);


  compare_entered_value(entered_vec,tab,test_value);




  std::cout << "\nLaFine!";
  return 0;
}
