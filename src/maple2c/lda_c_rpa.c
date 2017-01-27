/* 
  This file was generated automatically with ../scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  Maple source      : ../maple/lda_c_rpa.mpl
  Type of functional: work_lda
*/

static void
func0(const XC(func_type) *p, XC(lda_work_t) *r)
{
  double t1, t6, t9, t10;


  t1 = log(r->rs);
  r->zk = 0.311e-1 * t1 - 0.48e-1 + 0.9e-2 * r->rs * t1 - 0.17e-1 * r->rs;

  if(r->order < 1) return;

  t6 = 0.1e1 / r->rs;
  r->dedrs = 0.311e-1 * t6 + 0.9e-2 * t1 - 0.8e-2;
  r->dedz = 0;

  if(r->order < 2) return;

  t9 = r->rs * r->rs;
  t10 = 0.1e1 / t9;
  r->d2edrs2 = -0.311e-1 * t10 + 0.9e-2 * t6;
  r->d2edz2 = 0;
  r->d2edrsz = 0;

  if(r->order < 3) return;

  r->d3edrs3 = 0.622e-1 / t9 / r->rs - 0.9e-2 * t10;
  r->d3edz3 = 0;
  r->d3edrs2z = 0;
  r->d3edrsz2 = 0;

  if(r->order < 4) return;


}

static void
func1(const XC(func_type) *p, XC(lda_work_t) *r)
{
  double t1, t6, t9, t10;


  t1 = log(r->rs);
  r->zk = 0.311e-1 * t1 - 0.48e-1 + 0.9e-2 * r->rs * t1 - 0.17e-1 * r->rs;

  if(r->order < 1) return;

  t6 = 0.1e1 / r->rs;
  r->dedrs = 0.311e-1 * t6 + 0.9e-2 * t1 - 0.8e-2;
  r->dedz = 0;

  if(r->order < 2) return;

  t9 = r->rs * r->rs;
  t10 = 0.1e1 / t9;
  r->d2edrs2 = -0.311e-1 * t10 + 0.9e-2 * t6;
  r->d2edz2 = 0;
  r->d2edrsz = 0;

  if(r->order < 3) return;

  r->d3edrs3 = 0.622e-1 / t9 / r->rs - 0.9e-2 * t10;
  r->d3edz3 = 0;
  r->d3edrs2z = 0;
  r->d3edrsz2 = 0;

  if(r->order < 4) return;


}

void 
XC(lda_c_rpa_func)(const XC(func_type) *p, XC(lda_work_t) *r)
{
  if(p->nspin == XC_UNPOLARIZED)
    func0(p, r);
  else
    func1(p, r);
}

#define maple2c_order 3
#define maple2c_func  XC(lda_c_rpa_func)
