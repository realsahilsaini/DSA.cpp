#include<iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;

  int row = 1; //row number 

  while(row<=n){

    //print spaces
    int space = n-row;
    while (space)
    {
      cout<<" ";
      space--;
    }

    //print stars
    int col=1;
    while (col<=row)
    {
      cout<<row;
      col++;
    }
    cout<<endl;
    row++;
    
    

  }

    return 0;
}