#include<iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter n: ";
    cin >> n;

    int row = 1; //row number

    while (row<=n)
    {
      int col = 1; //column number
      char ch = 'A';
      while (col<=n)
      {
        cout<<ch<<" ";
        ch++;
        col++;
      }
      cout<<endl;
      row++;
      
    }
    

    return 0;
}

