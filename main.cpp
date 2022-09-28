#include <iostream>

using namespace std;

void moveArrayElToRight(int *first, int *last);

void moveArrayElToLeft(int *a, int size, int step);

int main()
{

  system("chcp 1251"); system("cls");

  const int size = 5;
  int a[size] = {1, 2, 3, 4, 5};

  int *a_first;
  int *a_last;
  a_first = a;
  a_last = &a[size - 1];

  cout << "массив: ";

  for(int i = 0; i <= a_last - a_first; i++)
  {
    cout << a_first[i];
  }

  int step;

  cout << "\n\n\nвведите сдвиг массива: ";
  cin >> step;

  moveArrayElToLeft(a, size, step);

  /*while(step != 0)
  {
    moveArrayElToRight(a_first, a_last);
    step--;
  }*/

  cout << "массив после сдвига: ";

  for(int i = 0; i <= a_last - a_first; i++)
  {
    cout << a_first[i];
  }

  return 0;
}

void moveArrayElToRight(int *first, int *last)
{
  int temp = *last;

  while(*last != *first)
  {
    --last;
    last[+1] = *last;
  }

  *first = temp;
}

void moveArrayElToLeft(int *a, int size, int step)
{
  while(step != 0)
  {
      int *first;
      int *last;
      first = a;
      last = &a[size - 1];
      int temp = *first;
      while(*last != *first)
      {
        first++;
        first[-1] = *first;
      }
      *last = temp;

      step--;
  }
}
