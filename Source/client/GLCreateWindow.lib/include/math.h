/* 
 * math.h
 *
 * Mathematical functions.
 *
 * This file is part of the Mingw32 package.
 *
 * Contributors:
 *  Created by Colin Peters <colin@bird.fu.is.saga-u.ac.jp>
 *
 *  THIS SOFTWARE IS NOT COPYRIGHTED
 *
 *  This source code is offered for use in the public domain. You may
 *  use, modify or distribute it freely.
 *
 *  This code is distributed in the hope that it will be useful but
 *  WITHOUT ANY WARRANTY. ALL WARRANTIES, EXPRESS OR IMPLIED ARE HEREBY
 *  DISCLAMED. This includes but is not limited to warranties of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * $Revision: 2.3 $
 * $Author: colin $
 * $Date: 1998/04/17 02:59:22 $
 *
 */

#ifndef _MATH_H_
#define _MATH_H_

#include <sys/config.h>

/*
 * Types for the _exception structure.
 */

#define	_DOMAIN		1	/* domain error in argument */
#define	_SING		2	/* singularity */
#define	_OVERFLOW	3	/* range overflow */
#define	_UNDERFLOW	4	/* range underflow */
#define	_TLOSS		5	/* total loss of precision */
#define	_PLOSS		6	/* partial loss of precision */

/*
 * Exception types with non-ANSI names for compatibility.
 */

#ifndef	__STRICT_ANSI__
#ifndef	_NO_OLDNAMES

#define	DOMAIN		_DOMAIN
#define	SING		_SING
#define	OVERFLOW	_OVERFLOW
#define	UNDERFLOW	_UNDERFLOW
#define	TLOSS		_TLOSS
#define	PLOSS		_PLOSS

#endif	/* Not _NO_OLDNAMES */
#endif	/* Not __STRICT_ANSI__ */


#ifndef RC_INVOKED

#ifdef __cplusplus
extern "C" {
#endif

/*
 * HUGE_VAL is returned by strtod when the value would overflow the
 * representation of 'double'. There are other uses as well.
 *
 * __imported_name(_HUGE) is a pointer to the actual variable _HUGE in
 * MSVCRT.DLL. If we used _HUGE directly we would get a pointer
 * to a thunk function.
 *
 * NOTE: The CRTDLL version uses _HUGE_dll instead.
 */
#ifdef __MSVCRT__
extern double	__imported_name(_HUGE);
#define	HUGE_VAL	__imported_name(_HUGE)
#else
/* CRTDLL */
extern double	__imported_name(_HUGE_dll);
#define	HUGE_VAL	_imported_name(_HUGE_dll)
#endif


struct _exception
{
	int	type;
	char	*name;
	double	arg1;
	double	arg2;
	double	retval;
};


#define sin __imported_name(sin)
extern double	sin (double x);
#define cos __imported_name(cos)
extern double	cos (double x);
#define tan __imported_name(tan)
extern double	tan (double x);
#define sinh __imported_name(sinh)
extern double	sinh (double x);
#define cosh __imported_name(cosh)
extern double	cosh (double x);
#define tanh __imported_name(tanh)
extern double	tanh (double x);
#define asin __imported_name(asin)
extern double	asin (double x);
#define acos __imported_name(acos)
extern double	acos (double x);
#define atan __imported_name(atan)
extern double	atan (double x);
#define atan2 __imported_name(atan2)
extern double	atan2 (double y, double x);
#define exp __imported_name(exp)
extern double	exp (double x);
#define log __imported_name(log)
extern double	log (double x);
#define log10 __imported_name(log10)
extern double	log10 (double x);
#define pow __imported_name(pow)
extern double	pow (double x, double y);
#define sqrt __imported_name(sqrt)
extern double	sqrt (double x);
#define ceil __imported_name(ceil)
extern double	ceil (double x);
#define floor __imported_name(floor)
extern double	floor (double x);
#define fabs __imported_name(fabs)
extern double	fabs (double x);
#define ldexp __imported_name(ldexp)
extern double	ldexp (double x, int n);
#define frexp __imported_name(frexp)
extern double	frexp (double x, int* exp);
#define modf __imported_name(modf)
extern double	modf (double x, double* ip);
#define fmod __imported_name(fmod)
extern double	fmod (double x, double y);


#ifndef	__STRICT_ANSI__

/* Complex number (for cabs) */
struct _complex
{
	double	x;	/* Real part */
	double	y;	/* Imaginary part */
};

#define _cabs __imported_name(_cabs)
extern double	_cabs (struct _complex x);
#define _hypot __imported_name(_hypot)
extern double	_hypot (double x, double y);
#define _j0 __imported_name(_j0)
extern double	_j0 (double x);
#define _j1 __imported_name(_j1)
extern double	_j1 (double x);
#define _jn __imported_name(_jn)
extern double	_jn (int n, double x);
#define _y0 __imported_name(_y0)
extern double	_y0 (double x);
#define _y1 __imported_name(_y1)
extern double	_y1 (double x);
#define _yn __imported_name(_yn)
extern double	_yn (int n, double x);

#ifndef	_NO_OLDNAMES

/*
 * Non-underscored versions of non-ANSI functions. 
 * Provided for extra portability.
 */
#define cabs _cabs
#define hypot _hypot
#define j0 _j0
#define j1 _j1
#define jn _jn
#define y0 _y0
#define y1 _y1
#define yn _yn

#endif	/* Not _NO_OLDNAMES */

#endif	/* Not __STRICT_ANSI__ */

#ifdef __cplusplus
}
#endif

#endif	/* Not RC_INVOKED */

#endif	/* Not _MATH_H_ */

