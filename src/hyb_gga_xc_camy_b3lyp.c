/*
 Copyright (C) 2013 Rolf Wuerdemann, M.A.L. Marques

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

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "util.h"

#define XC_HYB_GGA_XC_CAMY_B3LYP        459 /* B3LYP with Yukawa screening */

void
XC(hyb_gga_xc_camy_b3lyp_init)(XC(func_type) *p)
{
  static FLOAT ac = 0.81;
  static int   funcs_id  [4] = {XC_GGA_X_B88, XC_GGA_X_SFAT, XC_LDA_C_VWN, XC_GGA_C_LYP};
  static FLOAT funcs_coef[4];

  p->cam_omega = 0.34;
  p->cam_alpha = 0.65;
  p->cam_beta  =-0.46;
  
  funcs_coef[0] = 1.0 - p->cam_alpha;
  funcs_coef[1] =-p->cam_beta;
  funcs_coef[2] = 1.0 - ac;
  funcs_coef[3] = ac;
  
  XC(mix_init)(p, 4, funcs_id, funcs_coef);

  XC(gga_x_ityh_set_params)(p->func_aux[1], XC_GGA_X_B88, p->cam_omega);
}

const XC(func_info_type) XC(func_info_hyb_gga_xc_camy_b3lyp) = {
  XC_HYB_GGA_XC_CAMY_B3LYP,
  XC_EXCHANGE_CORRELATION,
  "CAMY version of B3LYP",
  XC_FAMILY_HYB_GGA,
  {&xc_ref_Seth2012_901, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HYB_CAM | XC_FLAGS_HAVE_EXC | XC_FLAGS_HAVE_VXC,
  1e-32, 1e-32, 0.0, 1e-32,
  XC(hyb_gga_xc_camy_b3lyp_init),
  NULL, NULL, NULL, NULL
};

