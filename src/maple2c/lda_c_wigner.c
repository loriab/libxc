/* 
  This file was generated automatically with ../scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  Maple source      : ../maple/lda_c_wigner.mpl
  Type of functional: work_lda
*/

static void
func0(const XC(func_type) *p, XC(lda_work_t) *r)
{
  double t1, t4, t9;


  t1 = 0.78e1 + r->rs;
  r->zk = -0.44e0 / t1;

  if(r->order < 1) return;

  t4 = t1 * t1;
  r->dedrs = 0.44e0 / t4;
  r->dedz = 0;

  if(r->order < 2) return;

  r->d2edrs2 = -0.88e0 / t4 / t1;
  r->d2edz2 = 0;
  r->d2edrsz = 0;

  if(r->order < 3) return;

  t9 = t4 * t4;
  r->d3edrs3 = 0.264e1 / t9;
  r->d3edz3 = 0;
  r->d3edrs2z = 0;
  r->d3edrsz2 = 0;

  if(r->order < 4) return;


}

static void
func1(const XC(func_type) *p, XC(lda_work_t) *r)
{
  double t1, t4, t9;


  t1 = 0.78e1 + r->rs;
  r->zk = -0.44e0 / t1;

  if(r->order < 1) return;

  t4 = t1 * t1;
  r->dedrs = 0.44e0 / t4;
  r->dedz = 0;

  if(r->order < 2) return;

  r->d2edrs2 = -0.88e0 / t4 / t1;
  r->d2edz2 = 0;
  r->d2edrsz = 0;

  if(r->order < 3) return;

  t9 = t4 * t4;
  r->d3edrs3 = 0.264e1 / t9;
  r->d3edz3 = 0;
  r->d3edrs2z = 0;
  r->d3edrsz2 = 0;

  if(r->order < 4) return;


}

void 
XC(lda_c_wigner_func)(const XC(func_type) *p, XC(lda_work_t) *r)
{
  if(p->nspin == XC_UNPOLARIZED)
    func0(p, r);
  else
    func1(p, r);
}

#define maple2c_order 3
#define maple2c_func  XC(lda_c_wigner_func)
