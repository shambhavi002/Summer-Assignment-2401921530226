#include <iostream>
using namespace std;

class Test {
public:
    virtual int square(int n) = 0;
};

class Arithmetic : public Test {
public:
    int square(int n) {
        return n * n;
    }
};

class ToTestInt {
public:
    void show() {
        Arithmetic a;
        cout << "Square = " << a.square(5);
    }
};

int main() {

    ToTestInt t;
    t.show();

    return 0;
}
