#include <iostream>
using namespace std;
#include <cstdlib>

template <class T, int n>
class Array
{
  private:
    T ary[n];
  public:
    Array(){};
    explicit Array(const T & v);
    virtual T & operator[](int i);
    virtual const T & operator[](int i) const;
};

template <class T, int n>
Array<T, n>::Array(const T & v)
{
  for(int i = 0; i < n; i++)
    ary[i] = v;
}

template <class T, int n>
T & Array<T, n>::operator[](int i)
{
  if(i < 0 || i >= n)
  {
    cerr << "배열의 경계를 벗어나는 오류!\n";
    exit(1);
  }
  return ary[i];
}

template <class T, int n>
const T & Array<T, n>::operator[](int i) const
{
  if(i < 0 || i >= n)
  {
    cerr << "배열의 경계를 벗어나는 오류!\n";
    exit(1);
  }
  return ary[i];
}

int main()
{
  Array<int, 5> sums;
  Array<double, 5> av;
  Array<Array<int, 3>, 5> td;
  
  int i, j;
  for(i = 0; i < 5; i++) {
    sums[i] = 0;
    for(j = 0; j < 3; j++) {
      td[i][j] = (i + 1) * (j + 2);
      sums[i] += td[i][j];
    }
    av[i] = (double) sums[i] / 10;
  }
  
  for(i = 0; i < 5; i++) {
    for(j = 0; j < 3; j++) {
      cout.width(2);
      cout << td[i][j] << ' ';
    }
    cout << ": 합계 = ";
    cout.width(3);
    cout << sums[i] << ", 평균 = " << av[i] << endl;
  }
  system("PAUSE");
  return 0;
}
