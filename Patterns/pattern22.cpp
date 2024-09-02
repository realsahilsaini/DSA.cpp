#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;

  int row = 1; // row number
  

  while(row <= n){

    //print spaces
    int space = row - 1;
    while (space)
    {
      cout<<" ";
      space--;
    }


    //print stars
    int count = row;
    int col = 1;
    while (col <= n-row+1)
    {
      cout<<count;
      col++;
      count++;
    }
    cout<<endl;
    row++;
    

  }

  return 0;
}