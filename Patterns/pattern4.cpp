#include<iostream>
using namespace std;
int main()
{
  int n; //number of rows and columns - Threshold
  cout<<"Enter n: ";
  cin>>n;

  int i=1; //row number

  int count = 1;

  while(i<=n){
    int j = 1; //column number
    while(j<=n){
      cout<<count<<" ";
      count++;
      j++;
    }
    cout<<endl;
    i++;
  }
    return 0;
}