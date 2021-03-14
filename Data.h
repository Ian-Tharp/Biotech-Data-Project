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
        Data(float fraction, char id, char type, string fullid, int imagenumber);
        
        //Sets
        void SetDilution(float fraction);
        void SetTubeID(char id);
        void SetHemoType(char type);
        void SetFullID(string fullid);
        void SetImageNumber(int imagenumber);
        //Gets
        float GetDilutionFraction();
        char GetTubeID();
        char GetHemoType();
        string GetFullID();
        int GetImageNumber();

    private:
        float DilutionFraction;
        char TubeID;
        char HemoType;
        string FullID;
        int ImageNumber;
};