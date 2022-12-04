// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Add {

public:
    double x, y, sum;
    Add() {
        x = 10.2;
        y = 3.5;
        sum = x + y;
    }
    void showsum() {
        cout << "The Sum of " << x << " + " << y << " = " << sum << endl;
    }
};
class Sub : virtual public Add {
private:
    double sub;
public:
    Sub() {
        sub = x - y;
    }
    void showsub() {
        cout << "The Sub of " << x << " - " << y << " = " << sub << endl;
    }
};
class Mult : virtual public Add {
private:
    double mul;
public:
    Mult() {
        mul = x * y;
    }
    void showmul() {
        cout << "The Mul of " << x << " * " << y << " = " << mul << endl;
    }
};
class Div : virtual public Add {
private:
    double div;
public:
    Div() {
        div = x / y;
    }
    void showdiv() {
        cout << "The Div of " << x << " / " << y << " = " << div << endl;
    }
};

int main() {
    Add addition;
    Sub substraction;
    Mult multiplication;
    Div division;
    addition.showsum();
    substraction.showsub();
    multiplication.showmul();
    division.showdiv();
    return 0;
}