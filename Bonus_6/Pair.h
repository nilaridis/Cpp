#ifndef PAIR 
#include <iostream>


using namespace std ;

template <class X> class Pair {
    protected: X a,b; 
    public:
        Pair();
        Pair(X a,X b);

        void setFirst(X a);
        void setSecond(X b);
        X getFirst();
        X getSecond();
        void swap();

        template <class Y>
        friend ostream& operator<<(ostream& os, const Pair<Y>& p);
};

template <class X> Pair<X>::Pair(){}


template <class X> Pair<X>::Pair(X a,X b){
    this -> a=a ;
    this -> b=b ;
}

template <class X> void Pair<X>::setFirst(X a){
    this -> a=a ; 
}

template <class X> void Pair<X>::setSecond(X b){
    this ->b=b ;
}

template <class X> X Pair<X>::getFirst(){
    return a; 
}

template <class X> X Pair<X>::getSecond(){
    return b;
}



template <class X> void Pair<X>::swap(){
    X k=a ;
    a=b ;
    b=k ;
}



template <class X> ostream& operator<<(ostream& os, const Pair<X>& p){
    os <<p.a << "," << p.b ;
    return os ;
}



#endif