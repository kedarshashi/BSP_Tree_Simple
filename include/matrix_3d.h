//------------------------------------------------------------------------------
//	File:					matrix_3d.h
//	Date:					8/29/94
//	Author:				Bretton Wade
//
//	Description:	this file contains class declaration for a matrix_3d
//
//------------------------------------------------------------------------------

#include "tuple_3d.h"

#ifndef MATRIX_3D
#define MATRIX_3D

//------------------------------------------------------------------------------
//	classes
//------------------------------------------------------------------------------
class matrix_3d
{
	private:
	protected:
		real mat[4][4];
	public:
		static real indentity[4][4];
		matrix_3d(void){}
		matrix_3d(const matrix_3d &m);
		matrix_3d(real f[4][4]);
		void operator = (const matrix_3d &m);
		real &operator () (int r, int c);
		const real &operator () (int r, int x) const;
		matrix_3d operator * (const matrix_3d &m) const;
		real Cofactor (int r, int c) const;
		real Determinant(void) const;
		matrix_3d Inverse(void) const;
};
//------------------------------------------------------------------------------
//	inlines
//------------------------------------------------------------------------------
inline real	&matrix_3d::operator () (int r, int c)
{
	return (mat[r][c]);
}
inline real &matrix_3d::operator () (int r, int c) const
{
	return (mat[r][c]);
}
//------------------------------------------------------------------------------
//	operator functions
//------------------------------------------------------------------------------
tuple_3d operator * (const tuple_3d &t, const matrix_3d &m);
tuple_3d operator * (const matix_3d &m, const tuple_3d &t);
//------------------------------------------------------------------------------
//	global varuables
//------------------------------------------------------------------------------
extern matrix_3d IDENTITY_MATRIX;
//------------------------------------------------------------------------------
#endif //MATRIX_3D