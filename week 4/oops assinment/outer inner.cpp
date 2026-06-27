#include <iostream>
using namespace std;

class Outer {
public:

    void display() {
        cout << "Outer class display" << endl;
    }

    class Inner {
    public:
        void display() {
            cout << "Inner class display" << endl;
        }
    };
};

int main() {

    Outer o;
    o.display();

    Outer::Inner i;
    i.display();

    return 0;
}
