#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;
template <class P> class Cola;
template <class P>
Cola<P> operator+(const Cola<P> &c1, const Cola<P> &c2)
{
    Cola<P> result = c1;

    for(unsigned i = 0; i<c2.items.size(); i++){
        result.items.push_back(c2.items[i]);
    }
    return result;
}
template <typename T>
Cola<T> operator -(const Cola <T> &c1, const Cola<T> &c2)
{
    Cola<T> result;
    for(unsigned i=0; i<c1.items.size();i++)
    {
        bool temp=false;
        for(unsigned j=0; j<c2.items.size();j++)
        {
            if(c1.items[i]==c2.items[j])
                temp=true;
        }
        if(temp==false)
            result.push(c1.items[i]);
    }
    return result;
}

template<class P>
ostream &operator<<(ostream &o,const Cola<P> &c1)
{
    for(unsigned i=0; i<c1.items.size();++i)
        o<<c1.items[i];
    return o;
}

template <class P>
class Cola{
    friend Cola<P> operator +<>(const Cola<P> &c1, const Cola<P> &c2);
    friend Cola<P> operator -<>(const Cola<P> &c1, const Cola<P> &c2);
    friend ostream &operator<<(ostream &o,const Cola<P> &c1);
    vector <P> items;
public:
    bool empty() const{return items.empty();}
    void push(const P &item) {items.push_back(item);}
    P pop(){
        P first = items.front();
        items.pop_back();
        return first;
    }
    void mostrar()
    {
        for(int i=0;i<items.size();i++)
            cout<<items[i]<<endl;
    }

};
int main()
{
    Cola <float> a,b;
    a.push(3.5);
    a.push(5.6);
    a.push(4.6);
    b.push(5.8);
    b.push(6.4);
    b.push(7.2);
    Cola<float> c = a+b;
    Cola<float> d = a-b;
    c.mostrar();
    cout<<endl;
    d.mostrar();
    //cout<<c1<<endl;



    return 0;
}
