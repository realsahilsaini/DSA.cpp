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
    while(col<=n){
      cout<<ch<<" ";
      ch++;
      col++;
    }
    ch-=(col-2);
    cout<<endl;
    row++;
  }

    return 0;
}