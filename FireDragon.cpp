#include <stdexcept>
#include <functional>
using namespace std;

class ReptileEgg;
class Reptile
{
    public:
        virtual ~Reptile()
        {
            
        };
        virtual ReptileEgg* lay() = 0;
};
class ReptileEgg
{
    public:
        ReptileEgg(function<Reptile* ()> createReptile)
        {
            ...
        }

        // When a ReptileEgg hatches, a new reptile will
        // be created of the same species that laid the egg.
        Reptile* hatch()
        {
            // An logic_error is thrown if a ReptileEgg tries to hatch more than once.
            if (is2hatch)
            {
		        throw std::logic_error("A ReptileEgg tries to hatch more than once?");
	        }
            is2hatch = true;
            Reptile* fireDragon = new FireDragon();
            return fireDragon;
        }
    private:
        bool is2hatch = false;
};
class FireDragon : public Reptile
{
    public:
        FireDragon()
        {

        }

        // The FireDragon species implements the Reptile class.
        ReptileEgg* lay()
        {
            ReptileEgg* Egg = new ReptileEgg(...);
            return Egg;
        }
};

#ifndef RunTests
int main()
{
    Reptile* fireDragon = new FireDragon();
    ReptileEgg* egg = fireDragon->lay();
    Reptile* childDragon = egg->hatch();
}
#endif