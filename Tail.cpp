#include<iostream>
#include<stdlib.h>
using namespace std;

class Tail
{
    private:
        char *v;
        int tam, top;
    public:
        Tail(int);
        void ingresar(char);
        char sacar();
};


Tail::Tail(int t)
{
    tam=t;
    v=new char[tam];
    top=0;
}

void Tail::ingresar(char x)
{
    if(top<tam)
    {
        *(v+top)=x;
        top++;
    }
    else
    {
        cout<<"cola supero limite de datos...";
    }
    
}

char Tail::sacar()
{
    if(top>0)
    {
        char c=*v;
        for(int i=0;i<top-1;i++)
        {
            *(v+i)=*(v+i+1);
            
        }
        top--;

    }

    return '$';
}

int main()
{
    Tail t(5);
    t.ingresar('a');
    t.ingresar('b');
    t.ingresar('c');
    cout<<t.sacar();
    system("pause");
    return 0;
}