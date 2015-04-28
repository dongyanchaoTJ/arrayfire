/*******************************************************
 * Copyright (c) 2014, ArrayFire
 * All rights reserved.
 *
 * This file is distributed under 3-clause BSD license.
 * The complete license agreement can be obtained at:
 * http://arrayfire.com/licenses/BSD-3-Clause
 ********************************************************/

#include <af/array.h>
#include <af/graphics.h>
#include "error.hpp"
#include <stdio.h>
namespace af
{
    void image(const array &in)
    {
        AF_THROW(af_draw_image(in.get()));
    }

    void plot(const array &X, const array &Y)
    {
        AF_THROW(af_draw_plot(X.get(), Y.get()));
    }

    void histogram1d(const array &X, const unsigned int nbins, const double minval, const double maxval)
    {
        AF_THROW(af_draw_histogram1d(X.get(), nbins, minval, maxval));
    }
}
