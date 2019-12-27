#include <iostream>
#include <vector>
#include "rational.h"
#include "func.h"

using namespace randArr;
using namespace std;


int main()
{
    Rational R1, R2, R3;

    try{
        R1 = Rational(0,2);  R2 = Rational(4,5);

        cout << "- - - - - - - - - -" << endl;

        cout << "Add: " << R1.toStr() << " + " << R2.toStr() << " = ";
        R3 = R1 + R2;
        cout << R3.toStr() << endl;
        float x = R3.toFlt();
        cout << x << endl;

        cout << "- - - - - - - - - -" << endl;

        cout << "Sub: " << R1.toStr() << " - " << R2.toStr() << " = ";
        R3 = R1 - R2;
        cout << R3.toStr() << endl;
        float y = R3.toFlt();
        cout << y << endl;

        cout << "- - - - - - - - - -" << endl;

        cout << "Mult: " << R1.toStr() << " * " << R2.toStr() << " = ";
        R3 = R1 * R2;
        cout << R3.toStr() << endl;

        cout << "- - - - - - - - - -" << endl;

        cout << "Div: " << R1.toStr() << " / " << R2.toStr() << " = ";
        R3 = R1 / R2;
        cout << R3.toStr() << endl;

        cout << "- - - - - - - - - -" << endl;

        cout << "Comparison: " << R1.toStr() << " = " << R2.toStr() << endl;
        if( R1 == R2)
        {
            cout << "OK" << endl;
        }
        else cout << "NO OK" << endl;

        cout << "- - - - - - - - - -" << endl;

        cout << "Comparison: " << R1.toStr() << " > " << R2.toStr() << endl;
        if( R1 > R2)
        {
            cout << "OK" << endl;
        }
        else cout << "NO OK" << endl;

        cout << "- - - - - - - - - -" << endl;

        cout << "Comparison: " << R1.toStr() << " < " << R2.toStr() << endl;
        if( R1 < R2)
        {
            cout << "OK" << endl;
        }
        else cout << "NO OK" << endl;
    }
    catch(FractException err){
        if (err == InvalidValue)
            cout << "error cannot be divided by zero" << endl;
        if (err == FractZero)
            cout << "fraction is zero" << endl;
    }

    cout << "- - - - - - - - - -" << endl;
    unsigned arSize = 5;
    unsigned ar2Size = 1;
    Rational* fractArr;
    fractArr = new Rational[arSize];

    string path = "fileOutTest2.txt";

    genArTFract(fractArr, arSize);

    out(fractArr, arSize, path);

    cout << "Array read from file" << endl;
    for (unsigned i = 0; i < ar2Size; i++)
    {
        cout << "Fract[" << i+1 << "] = " << inp(ar2Size,path)[i].toStr() << endl;
    }
    delete [] fractArr;


    vector<Rational*> vec1; // набор из указателей на объекты
    Rational *s4 = new Rational(1,2);
    vec1.push_back(s4);
    vec1.push_back(new Rational(4,5));
    for (unsigned i = 0; i < vec1.size(); i++){
        cout << vec1[i]->toStr()  << endl;
    }
    // удаление динамически созданных объектов
    for (unsigned i = 0; i < vec1.size(); i++){
        delete vec1[i];
    }


}
