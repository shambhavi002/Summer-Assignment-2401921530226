#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Abstract Class
class Compartment
{
public:
    virtual string notice() = 0;
};

// Derived Classes
class FirstClass : public Compartment
{
public:
    string notice()
    {
        return "First Class Compartment";
    }
};

class Ladies : public Compartment
{
public:
    string notice()
    {
        return "Ladies Compartment";
    }
};

class General : public Compartment
{
public:
    string notice()
    {
        return "General Compartment";
    }
};

class Luggage : public Compartment
{
public:
    string notice()
    {
        return "Luggage Compartment";
    }
};

int main()
{
    Compartment* c[10];

    srand(time(0));

    for (int i = 0; i < 10; i++)
    {
        int r = rand() % 4 + 1;

        switch (r)
        {
            case 1:
                c[i] = new FirstClass();
                break;

            case 2:
                c[i] = new Ladies();
                break;

            case 3:
                c[i] = new General();
                break;

            case 4:
                c[i] = new Luggage();
                break;
        }

        // Polymorphic call
        cout << c[i]->notice() << endl;
    }

    return 0;
}
