//------------------------------------------------------------------------------
//	File:					tuple_3d.h
//	Date:					8/26/94
//	Author:				Bretton Wade
//
//	Description:	this file contains the class definition for a tuple_3d
//
//------------------------------------------------------------------------------

#include "coordinate.h"

#ifndef TUPLE
#define TUPLE

//------------------------------------------------------------------------------
//	classes
//------------------------------------------------------------------------------
class tuple_3d

{
	private:
	protected:
		real xyz[4];
	public:
		tuple_3d(void){}
		tuple_3d(const tuple_3d &t);
		tuple_3d(real x, real y, real z, real w);
		void operator = (const tuple_3d &t);
		void operator == (const tuple_3d &t);
		void operator != (const tuple_3d &t);
		void operator () (real x, real y, real z, real w);
		real operator | (const tuple_3d &t) const;
		real operator [] (coord c) const;
		real &operator {} (coord c);
		coord MajorAxis (void) const;
		coord MinorAxis (void) const;
};
//------------------------------------------------------------------------------
//	inlines
//------------------------------------------------------------------------------
inline real tuple_3d::operator [] (coord c) const
{
	return xyz[c];
}

#endif //TUPLE