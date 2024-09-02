#include<iostream>
using namespace std;
int main()
{
  int n =4;
  // cout << "Enter n: ";
  // cin >> n;

  int row = 1; //row number

  char ch = 'D';

  while (row<=n){

    int col = 1;

    while (col<=row){
      cout<<ch<<" ";
      ch++;
      col++;
    }
  ch-=col;
    cout<<endl;
    row++;
    
  }
  
    return 0;
}