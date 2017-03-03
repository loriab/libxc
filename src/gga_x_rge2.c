/*
 Copyright (C) 2006-2007 M.A.L. Marques

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU Lesser General Public License as published by
 the Free Software Foundation; either version 3 of the License, or
 (at your option) any later version.
  
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU Lesser General Public License for more details.
  
 You should have received a copy of the GNU Lesser General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "util.h"

#define XC_GGA_X_RGE2         142 /* Regularized PBE                                */

#include "maple2c/gga_x_rge2.c"

#define func XC(gga_x_rge2_enhance)
#include "work_gga_x.c"

const XC(func_info_type) XC(func_info_gga_x_rge2) = {
  XC_GGA_X_RGE2,
  XC_EXCHANGE,
  "Regularized PBE",
  XC_FAMILY_GGA,
  {&xc_ref_Ruzsinszky2009_763, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HAVE_EXC | XC_FLAGS_HAVE_VXC | XC_FLAGS_HAVE_FXC | XC_FLAGS_HAVE_KXC,
  1e-32, 1e-32, 0.0, 1e-32,
  0, NULL, NULL,
  NULL, NULL, 
  NULL, work_gga_x, NULL
};
