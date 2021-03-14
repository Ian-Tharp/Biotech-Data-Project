#include "Data.h"
using namespace std;

//Default Constructor
Data::Data()
{
    DilutionFraction = 0;
    TubeID = 'Z';
    HemoType = 'Z';
    FullID = "";
    ImageNumber = -1;
}
//Parameterized Constructor
Data::Data(float fraction, char id, char type, string fullid, int imagenumber)
{
    DilutionFraction = fraction;
    TubeID = id;
    HemoType = type;
    FullID = fullid;
    ImageNumber = imagenumber;
}

//Sets
void Data::SetDilution(float fraction) { DilutionFraction = fraction; }
void Data::SetTubeID(char id) { TubeID = id; }
void Data::SetHemoType(char type) { HemoType = type; }
void Data::SetFullID(string fullid) { FullID = fullid; }
void Data::SetImageNumber(int imagenumber) { ImageNumber = imagenumber; }
//Gets
float Data::GetDilutionFraction() { return DilutionFraction; }
char Data::GetTubeID() { return TubeID; }
char Data::GetHemoType() { return HemoType; }
string Data::GetFullID() { return FullID; }
int Data::GetImageNumber() { return ImageNumber; }
