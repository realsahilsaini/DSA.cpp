#include<iostream>
using namespace std;
int main()
{

  int n;
  cout << "Enter n: ";
  cin >> n;

  int row =1;


  char ch = 'A';

  while (row<=n)
  {
    int col = 1;
 
    while (col<=n)
    {
      cout<<ch<<" ";
      col++;
    }
    cout<<endl;
    ch++;
    row++;
    
  }
    return 0;
}