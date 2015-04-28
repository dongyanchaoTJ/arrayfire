/*******************************************************
 * Copyright (c) 2014, ArrayFire
 * All rights reserved.
 *
 * This file is distributed under 3-clause BSD license.
 * The complete license agreement can be obtained at:
 * http://arrayfire.com/licenses/BSD-3-Clause
 ********************************************************/

#pragma once

#include <af/array.h>

#ifdef __cplusplus
#include <utility>
namespace af
{
    AFAPI void image(const array &in);

    AFAPI void plot(const array &X, const array &Y);

    AFAPI void histogram1d(const array &X, const unsigned int nbins, const double minval, const double maxval);
}
#endif

#ifdef __cplusplus
extern "C" {
#endif
    AFAPI af_err af_draw_image(const af_array in);

    AFAPI af_err af_draw_plot(const af_array X, const af_array Y);

    AFAPI af_err af_draw_histogram1d(const af_array X, const unsigned int nbins, const double minval, const double maxval);
#ifdef __cplusplus
}

#endif
