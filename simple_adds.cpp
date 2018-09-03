#include <iostream>

void enter_test_num(  int& n )
{

  while(n != std::cin.good())
  {
    std::cout << "\nHow much test u need to consider? Enter the numb: ";
    std::cin >> n;
    if((n > 0)&&(n < 100))
        break;
    else{
      std::cin.sync();
      std::cin.clear();
    }
  }
}

void sum_set_of_numbs(const int& n, int * tab)
{
  for(int i = 0 ; i<n ; i++)
  {
    int score {};
    int help {};
    int var {};
    std::cin.ignore();
    std::cout << "\nHow much numbs to sum, enter: ";
    std::cin >> help;
    for(int j = 0; j< help; j++)
    {
      std::cin.ignore();
      std::cout << j+1 << ": ";
      std::cin >> var;
      score += var;

    }
    tab[i] = score;
  }
}

void show_all(int * tab, const int& n)
{
  std::cout << "\n\nNow looks like this: ";
  for(int i = 0 ; i<n ; i++)
  std::cout << '\n'<< i+1 << ": "<<tab[i]<<'\n';
}

int main()
{
  int test {};
  enter_test_num(test);

  int * sum_vec = new int[test];

  sum_set_of_numbs(test,sum_vec);

  show_all(sum_vec,test);


  delete [] sum_vec;
  std::cout << "\nLaFine!";
  return 0;
}
