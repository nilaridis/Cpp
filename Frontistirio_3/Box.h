#include <iostream>
using namespace std ;

class Box
{
private:
    double x,y,z ;
public:
    Box();
    Box(double, double , double);

    // Setters & Getters
    void setx(double);
    void sety(double);
    void setz(double);

    double getx();
    double gety();
    double getz();

    // Operators

    Box operator * (double);
    Box operator / (double);
    Box operator + (double);
    Box operator - (double);
    Box operator + (Box);
    Box operator - (Box);
    
    Box operator = (Box);
    bool operator == (Box);
    bool operator != (Box);
    
    Box operator ++ ();  //Box&
    Box operator ++ (int);

    Box operator -- ();  //Box&
    Box operator -- (int);

    Box operator += (int);
    Box operator -= (int);
    Box operator *= (int);
    Box operator /= (int);
    
    friend ostream& operator<<(ostream& os, const Box& p);

};



