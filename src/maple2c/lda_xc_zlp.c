/* 
  This file was generated automatically with ../scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  Maple source      : ../maple/lda_xc_zlp.mpl
  Type of functional: work_lda
*/

static void
func0(const XC(func_type) *p, XC(lda_work_t) *r)
{
  double t2, t3, t4, t7, t10, t13, t14, t17;
  double t22, t23, t29, t32, t47, t48;


  t2 = 0.10e1 + 0.17015585953589753871e3 * r->rs;
  t3 = log(t2);
  t4 = 0.1e1 / r->rs;
  t7 = 0.10e1 - 0.58769648175943739859e-2 * t3 * t4;
  r->f = -0.57830313462623868354e0 * t7 * t4;

  if(r->order < 1) return;

  t10 = 0.1e1 / t2;
  t13 = r->rs * r->rs;
  t14 = 0.1e1 / t13;
  t17 = -0.99999999999999999997e0 * t10 * t4 + 0.58769648175943739859e-2 * t3 * t14;
  r->dfdrs = -0.57830313462623868354e0 * t17 * t4 + 0.57830313462623868354e0 * t7 * t14;

  if(r->order < 2) return;

  t22 = t2 * t2;
  t23 = 0.1e1 / t22;
  t29 = 0.1e1 / t13 / r->rs;
  t32 = 0.17015585953589753870e3 * t23 * t4 + 0.19999999999999999999e1 * t10 * t14 - 0.11753929635188747972e-1 * t3 * t29;
  r->d2fdrs2 = -0.57830313462623868354e0 * t32 * t4 + 0.11566062692524773671e1 * t17 * t14 - 0.11566062692524773671e1 * t7 * t29;

  if(r->order < 3) return;

  t47 = t13 * t13;
  t48 = 0.1e1 / t47;
  r->d3fdrs3 = -0.57830313462623868354e0 * (-0.57906033068800186712e5 / t22 / t2 * t4 - 0.51046757860769261610e3 * t23 * t14 - 0.59999999999999999998e1 * t10 * t29 + 0.35261788905566243916e-1 * t3 * t48) * t4 + 0.17349094038787160506e1 * t32 * t14 - 0.34698188077574321013e1 * t17 * t29 + 0.34698188077574321013e1 * t7 * t48;

  if(r->order < 4) return;


}

static void
func1(const XC(func_type) *p, XC(lda_work_t) *r)
{
  double t2, t3, t4, t7, t10, t13, t14, t17;
  double t22, t23, t29, t32, t47, t48;


  t2 = 0.10e1 + 0.17015585953589753871e3 * r->rs;
  t3 = log(t2);
  t4 = 0.1e1 / r->rs;
  t7 = 0.10e1 - 0.58769648175943739859e-2 * t3 * t4;
  r->f = -0.57830313462623868354e0 * t7 * t4;

  if(r->order < 1) return;

  t10 = 0.1e1 / t2;
  t13 = r->rs * r->rs;
  t14 = 0.1e1 / t13;
  t17 = -0.99999999999999999997e0 * t10 * t4 + 0.58769648175943739859e-2 * t3 * t14;
  r->dfdrs = -0.57830313462623868354e0 * t17 * t4 + 0.57830313462623868354e0 * t7 * t14;
  r->dfdz = 0;

  if(r->order < 2) return;

  t22 = t2 * t2;
  t23 = 0.1e1 / t22;
  t29 = 0.1e1 / t13 / r->rs;
  t32 = 0.17015585953589753870e3 * t23 * t4 + 0.19999999999999999999e1 * t10 * t14 - 0.11753929635188747972e-1 * t3 * t29;
  r->d2fdrs2 = -0.57830313462623868354e0 * t32 * t4 + 0.11566062692524773671e1 * t17 * t14 - 0.11566062692524773671e1 * t7 * t29;
  r->d2fdrsz = 0;
  r->d2fdz2 = 0;

  if(r->order < 3) return;

  t47 = t13 * t13;
  t48 = 0.1e1 / t47;
  r->d3fdrs3 = -0.57830313462623868354e0 * (-0.57906033068800186712e5 / t22 / t2 * t4 - 0.51046757860769261610e3 * t23 * t14 - 0.59999999999999999998e1 * t10 * t29 + 0.35261788905566243916e-1 * t3 * t48) * t4 + 0.17349094038787160506e1 * t32 * t14 - 0.34698188077574321013e1 * t17 * t29 + 0.34698188077574321013e1 * t7 * t48;
  r->d3fdrs2z = 0;
  r->d3fdrsz2 = 0;
  r->d3fdz3 = 0;

  if(r->order < 4) return;


}

void 
XC(lda_xc_zlp_func)(const XC(func_type) *p, XC(lda_work_t) *r)
{
  if(p->nspin == XC_UNPOLARIZED)
    func0(p, r);
  else
    func1(p, r);
}

#define maple2c_order 3
#define maple2c_func  XC(lda_xc_zlp_func)