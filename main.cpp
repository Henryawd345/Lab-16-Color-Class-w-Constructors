#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int W_NAME = 20, W_LAB = 13, W_VAL = 6;

class Color{
private:
    int redv;
    int greenv;
    int bluev;
    string name;
public:

    Color() {name = "none"; redv = 0; greenv = 0; bluev = 0;}
    Color(string N) {name = N; redv = 0; greenv = 0; bluev = 0;}
    Color(string N, int r, int g, int b) {name = N; redv = r; greenv = g; bluev = b;}

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
         << left  << setw(W_LAB)  << "Red Value:"   << setw(W_VAL) << redv   << ' '
         << left  << setw(W_LAB)  << "Green Value:" << setw(W_VAL) << greenv << ' '
         << left  << setw(W_LAB)  << "Blue Value:"  << setw(W_VAL) << bluev  << '\n';
    }
};

//void print(Color);

int main() {

    Color Red("Red", 255, 0, 0);
    Red.print();

    Color Green("Green", 0, 255, 0);
    Green.print();

    Color Blue("Blue", 0, 0, 255);
    Blue.print();

    Color Magenta("Magenta", 255, 0, 255);
    Magenta.print();

    Color Yellow("Yellow", 255, 255, 0);
    Yellow.print();

    Color Cyan("Cyan", 0, 255, 255);
    Cyan.print();

    Color White("White", 255, 255, 255);
    White.print();


    /*

    Color ;
    MagentaCl.setcolorName("Magenta");
    MagentaCl.setRedv(255);
    MagentaCl.setGreenv(0);
    MagentaCl.setBluev(255);
    MagentaCl.print();

    Color ;
    YellowCl.setcolorName("Yellow");
    YellowCl.setRedv(255);
    YellowCl.setGreenv(255);
    YellowCl.setBluev(0);
    YellowCl.print();

    Color ;
    CyanCl.setcolorName("Cyan");
    CyanCl.setRedv(0);
    CyanCl.setGreenv(255);
    CyanCl.setBluev(255);
    CyanCl.print();

    Color ;
    WhiteCl.setcolorName("White");
    WhiteCl.setRedv(255);
    WhiteCl.setGreenv(255);
    WhiteCl.setBluev(255);
    WhiteCl.print();*/

    return 0;
}

//void print(Color c){
    //cout << c.getcolorName()<< " RGB value: " << c.getRedv() << " " << c.getGreenv() << " " << c.getBluev() << " " << endl;
//}