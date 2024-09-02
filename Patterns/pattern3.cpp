#include<iostream>
using namespace std;
int main()
{
  int n; //number of rows and columns - Threshold
  cout<<"Enter n: ";
  cin>>n;

  int i=1; //row number

  while(i<=n){
    int j =1; //column number
    while(j<=n){
      cout<<j;
      j++;
    }
    cout<<endl;
    i++;
  }
    return 0;
}


/*
Enter n: 4
1234
1234
1234
1234
*/