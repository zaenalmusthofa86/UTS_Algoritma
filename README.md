# UTS_Algoritma
SOAL 1

-Mendeklrasikan variable int a,b,x,y sebagai variable input
-Menentukan nilai x dan y dengan memasukkan nilai a dan b (x=a dan y=b)
-Hitung nilai pada x dan y pada program while(x!=y)
       {

      if(x<y)
            {x=x+a;}
      else
            {y=y+b;}
       }
-Cetak nilai X

-Berikut kode lengkapnya:
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


Berikut hasil screenshootnya:
1.Soal 1.1:

![img](https://github.com/zaenalmusthofa86/UTS_Algoritma/blob/master/Soal1.1.png)

2.Soal 1.2:

![img](https://github.com/zaenalmusthofa86/UTS_Algoritma/blob/master/Soal1.2.png)

SOAL 2

-Mendeklrasikan variable int N,X,T dan Batas
-Menentukan nilai N sesuai 2 digit no terakhir dari NIM anda
-Menginput cout << "Masukkan NIM anda :";
    cin >> N;
    Batas=N+100;
    X=20;
    T=N;
-Hitung nilai T pada program while(T<=Batas)
    {
        T=T+X;
        X=X+10;
    }
-Cetak nilai T

-Berikut kode lengkapnya:
#include <iostream>

using namespace std;

int main()
{
    int N,X,T, Batas;
    cout << "Masukkan NIM anda :";
    cin >> N;
    Batas=N+100;
    X=20;
    T=N;
    while(T<=Batas)
    {
        T=T+X;
        X=X+10;
    }
    cout << "Hasilnya adalah :" << T <<endl;

    return 0;
}
-Berikut screenshotnya:

![img](https://github.com/zaenalmusthofa86/UTS_Algoritma/blob/master/Soal2.png)