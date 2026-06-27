#include <iostream>
using namespace std;

class Box {

protected:
    int length, breadth;

public:

    Box(int l, int b) {
        length = l;
        breadth = b;
    }

    int area() {
        return length * breadth;
    }
};

class Box3D : public Box {

    int height;

public:

    Box3D(int l, int b, int h) : Box(l, b) {
        height = h;
    }

    int volume() {
        return length * breadth * height;
    }
};

int main() {

    Box3D b(2, 3, 4);

    cout << "Area = " << b.area() << endl;
    cout << "Volume = " << b.volume();

    return 0;
}
