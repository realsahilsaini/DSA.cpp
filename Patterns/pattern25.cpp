#include<iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;

  int row = 1; //row number

  while (row<=n){
    int col = 1;
    while (col<=(n-row)+1)
    {
      cout<<col<<" ";
      col++;
    }

    // int firststar = row -1;
    // while (firststar)
    // {
    //   cout<<"*";
    //   firststar--;
    // }

    // int secondstar = row -1;
    // while (secondstar)
    // {
    //   cout<<"*";
    //   secondstar--;
    // }

    col = 1;
    while(col<= (row-1)*2){
      cout<<"* ";
      col++;
    }

    col = n-row+1;
    while (col>=1)
    {
      cout<<col<<" ";
      col--;
    }
    
    

    
    
    cout<<endl;
    row++;
  }


    return 0;
}