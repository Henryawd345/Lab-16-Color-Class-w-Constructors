#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int W_NAME = 20, W_LAB = 13, W_VAL = 5;

class Color{
private:
    int redv;
    int greenv;
    int bluev;
    string name;
public:
    string getcolorName() {return name;}
    int getRedv() {return redv;}
    int getGreenv() {return greenv;}
    int getBluev() {return bluev;}
    void setcolorName(string N) {name = N;}
    void setRedv(int r) {redv = r;}
    void setGreenv(int g) {greenv = g;}
    void setBluev(int b) {bluev = b;}

    void print() {
        cout << left  << setw(W_NAME) << ("Color >> " + name)
         << left  << setw(W_LAB)  << "Red Value:"   << right << setw(W_VAL) << redv   << ' '
         << left  << setw(W_LAB)  << "Green Value:" << right << setw(W_VAL) << greenv << ' '
         << left  << setw(W_LAB)  << "Blue Value:"  << right << setw(W_VAL) << bluev  << '\n';
    }
};

//void print(Color);

int main() {

    Color RedCl;
    RedCl.setcolorName("Red");
    RedCl.setRedv(255);
    RedCl.setGreenv(0);
    RedCl.setBluev(0);
    RedCl.print();

    Color GreenCl;
    GreenCl.setcolorName("Green");
    GreenCl.setRedv(0);
    GreenCl.setGreenv(255);
    GreenCl.setBluev(0);
    GreenCl.print();

    Color BlueCl;
    BlueCl.setcolorName("Blue");
    BlueCl.setRedv(0);
    BlueCl.setGreenv(0);
    BlueCl.setBluev(255);
    BlueCl.print();

    Color MagentaCl;
    MagentaCl.setcolorName("Magenta");
    MagentaCl.setRedv(255);
    MagentaCl.setGreenv(0);
    MagentaCl.setBluev(255);
    MagentaCl.print();

    Color YellowCl;
    YellowCl.setcolorName("Yellow");
    YellowCl.setRedv(255);
    YellowCl.setGreenv(255);
    YellowCl.setBluev(0);
    YellowCl.print();

    Color CyanCl;
    CyanCl.setcolorName("Cyan");
    CyanCl.setRedv(0);
    CyanCl.setGreenv(255);
    CyanCl.setBluev(255);
    CyanCl.print();

    Color WhiteCl;
    WhiteCl.setcolorName("White");
    WhiteCl.setRedv(255);
    WhiteCl.setGreenv(255);
    WhiteCl.setBluev(255);
    WhiteCl.print();

    return 0;
}

//void print(Color c){
    //cout << c.getcolorName()<< " RGB value: " << c.getRedv() << " " << c.getGreenv() << " " << c.getBluev() << " " << endl;
//}