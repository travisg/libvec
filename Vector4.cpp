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
#include "Vector4.h"

namespace Libvec {

std::ostream &operator<<(std::ostream &os, const Vector4 &v)
{
    os << "[ " << v.getx() << " " << v.gety() << " " << v.getz() << " " << v.getw() << " ]";
    return os;
}

void Vector4::Normalize()
{
    float lenSquared = LengthSquared();

    if (lenSquared == 0.0f) {
        x = y = z = w = 0;
    } else {
        float invsqrt = 1.0f / Math<float>::sqrt(lenSquared);

        x *= invsqrt;
        y *= invsqrt;
        z *= invsqrt;
        w *= invsqrt;
    }
}

void Vector4::Normalize(float n)
{
    float lenSquared = LengthSquared();

    if (lenSquared == 0.0f) {
        x = y = z = w = 0;
    } else {
        float invsqrt = n / Math<float>::sqrt(lenSquared);

        x *= invsqrt;
        y *= invsqrt;
        z *= invsqrt;
        w *= invsqrt;
    }
}

}

