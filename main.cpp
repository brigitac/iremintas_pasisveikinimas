#include <iostream>
using namespace std;
int main()
{
    const int sk=13;
    const int sk2=14;
    string vardas;
    cout << "Įveskite savo vardą: ";
    getline (cin, vardas);
    auto l = vardas.length();
    if (vardas.back()=='a')
    {
        for(int i=0;i<(sk+l);i++)
        {
            cout<<'*';
        }
        cout<<endl;
        cout<<"*";
        for (int i=0;i<((sk+l)-2);i++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
        cout<<"* Sveika, "<<vardas<<"! *"<<endl;
        cout<<"*";
        for (int i=0;i<((sk+l)-2);i++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
        for(int i=0;i<(sk+l);i++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
    else
    {
        for(int i=0;i<(sk2+l);i++)
        {
            cout<<'*';
        }
        cout<<endl;
        cout<<"*";
        for (int i=0;i<((sk2+l)-2);i++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
        cout<<"* Sveikas, "<<vardas<<"! *"<<endl;
        cout<<"*";
        for (int i=0;i<((sk2+l)-2);i++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
        for(int i=0;i<(sk2+l);i++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}

