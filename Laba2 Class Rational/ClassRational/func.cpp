#include <iostream>
#include "func.h"
#include "rational.h"
#include <fstream>
#include <ctime>

using namespace std;

namespace randArr {

    void genArTFract(Rational* a, unsigned n)
    {
        srand(time(nullptr));
        int x, y;
        for (unsigned i = 0; i < n; i++)
        {
            x = 1 + rand() % 10;
            y = 1 + rand() % 10;

            a[i] = Rational(x,y);
        }
    }

    void out(Rational* a, unsigned n, std::string pth)
    {
        ofstream f1(pth);
        for (unsigned i = 0; i < n; i++)
        {
            f1 << a[i].getStr_a() << endl;
            f1 << a[i].getStr_b() << endl;
            f1 << endl;
        }
        f1.close();
    }

    Rational* inp(unsigned &n, std::string pth)
    {
        string s;
        ifstream f1(pth);
        unsigned i = 0;
        unsigned counter = 0;

        while(getline(f1,s))
        {
            counter += 1;
            if(counter == 3)
            {
                counter = 0;
                i += 1;
            }
        }

        n = i;
        f1.close();

        ifstream f2(pth);

        Rational* a = new Rational[n];
        i = 0;

        string aN, bD;
        for (unsigned i = 0; i < n; i++)
        {
            f2 >> aN;
            f2 >> bD;
            Rational *fract = new Rational(stoi(aN), stoi(bD));
            a[i] = *fract;
            delete fract;
        }

        return a;
    }
}
