#include<iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;

  int row = 1; //row number

  
  char ch = 'A';

  while(row<=n){
    int col =1;
    while(col<=row){
      cout<<ch<<" ";
      col++;
      ch++;
    }
    ch-=(row-1);
    cout<<endl;
    row++;
  }

    return 0;
}