/*
 * Copyright (c) 2008-2011 Travis Geiselbrecht
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files
 * (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#ifndef __LIBVEC_VEC_H
#define __LIBVEC_VEC_H

#include <cmath>

namespace Libvec {

template<class T>
class Math {
public:
	static T sqrt(T root);
	static T sin(T val);
	static T cos(T val);
	static T tan(T val);
	static T asin(T val);
	static T acos(T val);
	static T atan(T val);

private:
	Math<T>();
};

#define F_PI 3.14159f

inline float DegreeToRadians(float deg)
{
	return (deg * F_PI) / 180.0f;
}

inline double DegreeToRadians(double deg)
{
	return (deg * F_PI) / 180.0f;
}

/* specialization for float,double */

/* float */
template <>
inline float Math<float>::sqrt(float root)
{
	return ::sqrtf(root);
}

template <>
inline float Math<float>::sin(float root)
{
	return ::sinf(root);
}

template <>
inline float Math<float>::cos(float root)
{
	return ::cosf(root);
}

template <>
inline float Math<float>::tan(float root)
{
	return ::tanf(root);
}

template <>
inline float Math<float>::asin(float root)
{
	return ::asinf(root);
}

template <>
inline float Math<float>::acos(float root)
{
	return ::acosf(root);
}

template <>
inline float Math<float>::atan(float root)
{
	return ::atanf(root);
}

/* double */
template <>
inline double Math<double>::sqrt(double root)
{
	return ::sqrt(root);
}

template <>
inline double Math<double>::sin(double root)
{
	return ::sin(root);
}

template <>
inline double Math<double>::cos(double root)
{
	return ::cos(root);
}

template <>
inline double Math<double>::tan(double root)
{
	return ::tan(root);
}

template <>
inline double Math<double>::asin(double root)
{
	return ::asin(root);
}

template <>
inline double Math<double>::acos(double root)
{
	return ::acos(root);
}

template <>
inline double Math<double>::atan(double root)
{
	return ::atan(root);
}

}

#endif

