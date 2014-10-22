/*David Porter 10/22/14
class definition for 2d tuple
*/

#include "coord.h"

#ifndef TUPLE_2DA_H_INCLUDED
#define TUPLE_2DA_H_INCLUDED

class tuple_2da
// 2 dimensional tuple_2d class
{
private:
protected:
    real ab[2];
public:
    tuple_2da (void) {}
    tuple_2da (const tuple_2da &t);
    tuple_2da (real a, real b);
    void operator = (const tuple_2da &t);
    bool operator == (const tuple_2da &t) const;
    bool operator != (const tuple_2da &t) const;
    void operator () (real a, real b);
    real operator | (const tuple_2da &t) const;
    real operator [] (coord c) const;
    real &operator [] (coord c);
};
//end class definition

//inline functions
inline real tuple_2da::operator [] (coord c) const
{
    return ab[c];
    //returns coordinate of tuple
}
inline real &tuple_2da::operator [] (coord c)
{
    return ab[c];
    //returns coordinate of tuple
}

//end
#endif // TUPLE_2DA_H_INCLUDED
