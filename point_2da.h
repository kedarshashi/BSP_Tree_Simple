/*David Porter 10/22/14
class definition for 2d tuple
*/
#include "tuple_2da.h"

#ifndef POINT_2DA_H_INCLUDED
#define POINT_2DA_H_INCLUDED

#ifndef 2D_VECTOR
class 2d_vector;
#endif

class point_2da : public tuple_2da
{
protected:
public:
    point_2da (void) {}
    point_2da (real a, real b);
    point_2da (const point_2da &p);
    point_2da (const 2d_vector &v) const:
    point_2da &operator = (const point_2da &p);
    point_2da operator + (const 2d_vector &v) const;
    2d_vector operator - (const point_2d &p) const;
};

//global variables:
extern point_2da ORIGIN_2D;
//origin of coordinate system

#endif // POINT_2DA_H_INCLUDED
