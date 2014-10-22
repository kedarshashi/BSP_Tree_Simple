//------------------------------------------------------------------------------
//	File:					matrix_3d.cp
//	Date:					9/2/94
//	Author:				Bretton Wade
//
//	Description:	this file contains methods for the matrix_3d class
//
//------------------------------------------------------------------------------


#include "precompile.h"
#include "utility.h"
#include "matrix_3d.h"

//------------------------------------------------------------------------------
//	global variables
//------------------------------------------------------------------------------
real matrix_3d::identity[4][4] = 
	{{R(1.0), R(0.0), R(0.0), R(0.0)},     
    {R(0.0), R(1.0), R(0.0), R(0.0)},
    {R(0.0), R(0.0), R(1.0), R(0.0)},
    {R(0.0), R(0.0), R(0.0), R(1.0)}};
    matrix_3d IDENTITY_MATRIX (matrix_3d::identity);		