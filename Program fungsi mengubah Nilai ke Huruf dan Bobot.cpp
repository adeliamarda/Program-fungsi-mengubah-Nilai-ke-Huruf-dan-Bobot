#include<iostream>
using namespace std;
int main()
{
    int nilai;

    cout<<"Konversi nilai ke huruf dan bobot"<<endl;
    cout<<"Masukan nilai"<<endl;
    cin>>nilai;

    if(nilai>85, nilai<100)
    {
        cout<<"Nilai hurufnya adalah A bobotnya adalah 3"<<endl;
    }
    else if(nilai>70, nilai<85)
    {
        cout<<"Nilai hurufnya adalah B bobotnya adalah 3"<<endl;
    }
    else if(nilai>60, nilai<70)
    {
        cout<<"Nilai hurufnya adalah C bobotnya adalah 0"<<endl;
    }
    else if(nilai>50, nilai<60)
    {
        cout<<"Nilai hurufnya adalah D bobotnya adalah 3"<<endl;
    }
    else if(nilai>0, nilai<50)
    {
        cout<<"Nilai hurufnya adalah E bobotnya adalah 1"<<endl;
    }
    return 0;
}
