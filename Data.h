#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

class Data 
{
    public:
        //Default Constructor
        Data();
        //Parameterized Constructor
        Data(float fraction, char id, char type, string fullid, int imagenumber, float beadsavg);
        
        //Sets
        void SetDilution(float fraction);
        void SetTubeID(char id);
        void SetHemoType(char type);
        void SetFullID(string fullid);
        void SetImageNumber(int imagenumber);
        void SetBeadsAverage(float beadsavg);
        //Gets
        float GetDilutionFraction();
        char GetTubeID();
        char GetHemoType();
        string GetFullID();
        int GetImageNumber();
        float GetBeadsAverage();

    private:
        float DilutionFraction;
        char TubeID;
        char HemoType;
        string FullID;
        int ImageNumber;
        float BeadsAverage;
};