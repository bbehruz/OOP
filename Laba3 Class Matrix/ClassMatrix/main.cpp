#include <iostream>
#include "matrix.h"

using namespace std;
using namespace algebra;

int main()
{
    Matrix a(2, 2);
    Matrix b(2, 1);
    Matrix c(2, 1);
    a.SetMatrix({{2, 3},{1, -1}});
    b.SetMatrix({{15, 5}});
   // a.random(5, 10);
   // b.random(5, 10);
    c =  b * a.inverse();
    cout << "Matrix A" << endl;
    print_matrix(a);
    cout << "Matrix B" << endl;
    print_matrix(b);
    cout << "Matrix C" << endl;
    print_matrix(c);

    /*cout << "Matrix A" << endl;
    print_matrix(a);
    cout << "Matrix B" << endl;
    print_matrix(b);

    try {
        c = a + b;
        cout << "Matrix A+B" << endl;
        print_matrix(c);

        c = a - b;
        cout << "Matrix A-B" << endl;
        print_matrix(c);

        c = a * b;
        cout << "Matrix A*B" << endl;
        print_matrix(c);

    } catch (Error err) {
        if (err == SizeError)
            cout << "Matrices have different sizes\n" << endl;
    }


    double num = 2;
    c = a * num;
    cout << "Matrix A*" << num << endl;
    print_matrix(c);

    Matrix d(2, 2);
    d.same_num(12);
    cout << "Matrix D" << endl;
    print_matrix(d);

    try {
        cout << "d[1][1] = " << d.element(0,0) << endl;
        d.set_element(5, 0, 0);
        cout << "\nMatrix D" << endl;
        print_matrix(d);

    } catch (Error err) {
        if (err == NoElement)
            cout << "There is no such element" << endl;
    }

    Matrix e(3, 3);
    e.random(0,10);
    cout << "Matrix E" << endl; print_matrix(e);
    e.transpose();
    cout << "Matrix E - transpose" << endl; print_matrix(e);
    double x = e.det();
    cout << "e.det = " << x << endl;
    e = e.inverse();
    cout << "Matrix E - inverse" << endl; print_matrix(e);*/

}
