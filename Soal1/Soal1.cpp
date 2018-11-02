#include <iostream>

using namespace std;

int main()
{
    int a,b, x,y;
    cout << "Masukkan bilangan pertama :";
    cin >> a;

    cout << "Masukkan bilangan kedua :";
    cin >> b;

    x=a;
    y=b;

    while(x!=y)
       {

      if(x<y)
            {x=x+a;}
      else
            {y=y+b;}
       }
       cout << "Hasilnya adalah :" << x << endl;

    return 0;
}
