#include <iostream> 
#include <vector>

using namespace std ;

template <class X>
class Comparator {
    protected : 
        vector <X> a,b;

    public :
        Comparator(vector <X> a, vector <X> b);
        bool equals();
};

template <class X>
Comparator<X>::Comparator(vector <X> a, vector <X> b){
    this-> a= a ;
    this-> b = b ;
}

template <class X> 
bool Comparator <X>:: equals(){
    bool equal = true ;
    if(this-> a.size() == this-> b.size()){
        for(int i=0; i< a.size() && equal; i++) {
            if (!(a[i] == b[i]))
                equal = false ; 
        }
    }else {
        equal = false ;
    }
    return equal ;
}