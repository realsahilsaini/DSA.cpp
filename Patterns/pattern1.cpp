#include<iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int i=1; //row number

    while (i<=n)
    {
        int j=1; //column number
        //prints n stars in a row
        while (j<=n)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}