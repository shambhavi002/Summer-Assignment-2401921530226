#include <iostream>
using namespace std;

namespace music
{
    class Playable
    {
    public:
        virtual void play() = 0;
    };
}

namespace music::string_instrument
{
    class Veena : public music::Playable
    {
    public:
        void play()
        {
            cout << "Playing Veena" << endl;
        }
    };
}

namespace music::wind
{
    class Saxophone : public music::Playable
    {
    public:
        void play()
        {
            cout << "Playing Saxophone" << endl;
        }
    };
}

int main()
{
    music::string_instrument::Veena v;
    music::wind::Saxophone s;

    v.play();
    s.play();

    music::Playable* p;

    p = &v;
    p->play();

    p = &s;
    p->play();

    return 0;
}
