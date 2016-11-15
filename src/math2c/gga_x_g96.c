/* 
  This file was generated automatically with ../scripts/math2c.pl.
  Do not edit this file directly as it can be overwritten!!

  Mathematica source: ..//mathematica/functionals/gga_x_g96.m
  Type of functional: work_gga_x
*/

void XC(math2c_gga_x_g96_enhance)
  (const XC(func_type) *p, int order, 
   FLOAT x, FLOAT *f, FLOAT *dfdx, FLOAT *d2fdx2, FLOAT *d3fdx3)
{


    if(order >= 0){
      *f = 1. + (0.0072992700729927005*POW(x,1.5))/X_FACTOR_C;
    }


    if(order >= 1){
      *dfdx = (0.010948905109489052*POW(x,0.5))/X_FACTOR_C;
    }


    if(order >= 2){
      *d2fdx2 = 0.005474452554744526/(POW(x,0.5)*X_FACTOR_C);
    }


    if(order >= 3){
      *d3fdx3 = -0.002737226277372263/(POW(x,1.5)*X_FACTOR_C);
    }

}


#define math2c_order 3
#define math2c_func  XC(math2c_gga_x_g96_enhance)

