#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter n:";
  cin>>n;

  char ch = 'A';

  int row =1;

  while (row<=n)
  {
    int col=1;
    while (col<=n)
    {
      cout<<ch<<" ";
      col++;
      ch++;
    }
    cout<<endl;
    ch = ch-(col-2);
    row++;
  }

    return 0;
}