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
#include <iostream>
#include "Vec.h"
#include "Vector3.h"

namespace Libvec {

template<class T>
std::ostream &operator<<(std::ostream &os, const Vector3<T> &v)
{
    os << "[ " << v.getx() << " " << v.gety() << " " << v.getz() << " ]";
    return os;
}

template<class T>
void Vector3<T>::Normalize()
{
    T lenSquared = LengthSquared();

    if (lenSquared == 0.0f) {
        x = y = z = 0;
    } else {
        T invsqrt = 1.0f / Math<T>::sqrt(lenSquared);

        x *= invsqrt;
        y *= invsqrt;
        z *= invsqrt;
    }
}

template<class T>
void Vector3<T>::Normalize(T n)
{
    T lenSquared = LengthSquared();

    if (lenSquared == 0.0f) {
        x = y = z = 0;
    } else {
        T invsqrt = n / Math<T>::sqrt(lenSquared);

        x *= invsqrt;
        y *= invsqrt;
        z *= invsqrt;
    }
}

template<class T2>
Vector3<T2> Cross(const Vector3<T2> &v1, const Vector3<T2> &v2)
{
    return Vector3<T2>(
               v1.y * v2.z - v1.z * v2.y,
               v1.z * v2.x - v1.x * v2.z,
               v1.x * v2.y - v1.y * v2.x);
}

/* template instantiation */
template void Vector3<float>::Normalize();
template void Vector3<double>::Normalize();

template void Vector3<float>::Normalize(float n);
template void Vector3<double>::Normalize(double n);

template std::ostream &operator<<(std::ostream &os, const Vector3<float> &v);
template std::ostream &operator<<(std::ostream &os, const Vector3<double> &v);

template Vector3<float> Cross(const Vector3<float> &v1, const Vector3<float> &v2);
template Vector3<double> Cross(const Vector3<double> &v1, const Vector3<double> &v2);

}

