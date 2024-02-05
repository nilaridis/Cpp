#ifndef ELECTRICAL_SCOOTER_H
#define ELECTRICAL_SCOOTER_H


class ElectricalScooter:public Scooter{
    protected :
        int chargingTime ;
    public :
        ElectricalScooter();
        ElectricalScooter(int, int, int);
        ~ElectricalScooter();
        int getChargingTime();
        void setChargingTime(int);
        double getPollutionScore();
        double getTaxes();    
};


#endif 