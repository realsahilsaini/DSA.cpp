#include<iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;

  int row = 1; //row number

  while(row<=n){
    int col =1; //column number
    int count = row;

    while (col<=row)
    {
      cout << count << " ";
      count--;
      col++;
    }
    cout << endl;
    row++;
  }

    return 0;
} 