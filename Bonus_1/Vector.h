

class Vector {
    private:
        double x , y ;
    public:
        Vector();
        Vector(double,double);
        void SetX(double);
        void SetY(double);
        double GetX();
        double GetY();
        // Functions
        double  magnitude();
        double  angle();
        double angleD();
        void multiply(double);
        Vector add(Vector);
        Vector clone();
           
        

};
