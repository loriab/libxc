/* 
  This file was generated automatically with ../scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  Maple source      : ../maple/lda_c_hl.mpl
  Type of functional: work_lda
*/

static void
func0(const XC(func_type) *p, XC(lda_work_t) *r)
{
  double t1, t2, t3, t4, t5, t6, t7, t9;
  double t13, t14, t16, t18, t26, t28, t29, t46;
  double t48, t49, t50, t51;

  lda_c_hl_params *params;

  assert(p->params != NULL);
  params = (lda_c_hl_params * )(p->params);

  t1 = params->c[-1];
  t2 = r->rs * r->rs;
  t3 = t2 * r->rs;
  t4 = params->r[-1];
  t5 = t4 * t4;
  t6 = t5 * t4;
  t7 = 0.1e1 / t6;
  t9 = 0.10e1 + t3 * t7;
  t13 = 0.10e1 + 0.10e1 / r->rs * t4;
  t14 = log(t13);
  t16 = 0.1e1 / t5;
  t18 = 0.1e1 / t4;
  r->zk = -t1 * (t9 * t14 - t2 * t16 + 0.5e0 * r->rs * t18 - 0.33333333333333333333e0);

  if(r->order < 1) return;

  t26 = 0.1e1 / t2;
  t28 = 0.1e1 / t13;
  t29 = t4 * t28;
  r->dedrs = -t1 * (0.3e1 * t2 * t7 * t14 - 0.10e1 * t9 * t26 * t29 - 0.2e1 * r->rs * t16 + 0.5e0 * t18);
  r->dedz = 0;

  if(r->order < 2) return;

  t46 = t2 * t2;
  t48 = t9 / t46;
  t49 = t13 * t13;
  t50 = 0.1e1 / t49;
  t51 = t5 * t50;
  r->d2edrs2 = -t1 * (0.6e1 * r->rs * t7 * t14 - 0.60e1 * t16 * t28 + 0.20e1 * t9 / t3 * t29 - 0.100e1 * t48 * t51 - 0.2e1 * t16);
  r->d2edz2 = 0;
  r->d2edrsz = 0;

  if(r->order < 3) return;

  r->d3edrs3 = -t1 * (0.6e1 * t7 * t14 - 0.900e1 * t18 * t50 * t26 - 0.60e1 * t48 * t29 + 0.600e1 * t9 / t46 / r->rs * t51 - 0.2000e1 * t9 / t46 / t2 * t6 / t49 / t13);
  r->d3edz3 = 0;
  r->d3edrs2z = 0;
  r->d3edrsz2 = 0;

  if(r->order < 4) return;


}

static void
func1(const XC(func_type) *p, XC(lda_work_t) *r)
{
  double t1, t2, t3, t4, t5, t6, t7, t9;
  double t10, t13, t14, t16, t18, t22, t23, t24;
  double t26, t27, t29, t30, t31, t32, t33, t34;
  double t36, t39, t40, t42, t44, t49, t54, t56;
  double t57, t64, t69, t70, t78, t80, t82, t84;
  double t90, t94, t95, t96, t97, t98, t99, t104;
  double t113, t114, t115, t116, t122, t124, t126, t128;
  double t137, t142, t150, t171, t173;

  lda_c_hl_params *params;

  assert(p->params != NULL);
  params = (lda_c_hl_params * )(p->params);

  t1 = params->c[-1];
  t2 = r->rs * r->rs;
  t3 = t2 * r->rs;
  t4 = params->r[-1];
  t5 = t4 * t4;
  t6 = t5 * t4;
  t7 = 0.1e1 / t6;
  t9 = 0.10e1 + t3 * t7;
  t10 = 0.1e1 / r->rs;
  t13 = 0.10e1 + 0.10e1 * t10 * t4;
  t14 = log(t13);
  t16 = 0.1e1 / t5;
  t18 = 0.1e1 / t4;
  t22 = t1 * (t9 * t14 - t2 * t16 + 0.5e0 * r->rs * t18 - 0.33333333333333333333e0);
  t23 = 0.10e1 + r->zeta;
  t24 = pow(t23, 0.13333333333333333333e1);
  t26 = 0.10e1 - r->zeta;
  t27 = pow(t26, 0.13333333333333333333e1);
  t29 = 0.19236610509315363199e1 * t24 + 0.19236610509315363199e1 * t27 - 0.38473221018630726398e1;
  t30 = params->c[0];
  t31 = params->r[0];
  t32 = t31 * t31;
  t33 = t32 * t31;
  t34 = 0.1e1 / t33;
  t36 = 0.10e1 + t3 * t34;
  t39 = 0.10e1 + 0.10e1 * t10 * t31;
  t40 = log(t39);
  t42 = 0.1e1 / t32;
  t44 = 0.1e1 / t31;
  t49 = -t30 * (t36 * t40 - t2 * t42 + 0.5e0 * r->rs * t44 - 0.33333333333333333333e0) + t22;
  r->zk = t29 * t49 - t22;

  if(r->order < 1) return;

  t54 = 0.1e1 / t2;
  t56 = 0.1e1 / t13;
  t57 = t4 * t56;
  t64 = t1 * (0.3e1 * t2 * t7 * t14 - 0.10e1 * t9 * t54 * t57 - 0.2e1 * r->rs * t16 + 0.5e0 * t18);
  t69 = 0.1e1 / t39;
  t70 = t31 * t69;
  t78 = -t30 * (0.3e1 * t2 * t34 * t40 - 0.10e1 * t36 * t54 * t70 - 0.2e1 * r->rs * t42 + 0.5e0 * t44) + t64;
  r->dedrs = t29 * t78 - t64;
  t80 = pow(t23, 0.3333333333333333333e0);
  t82 = pow(t26, 0.3333333333333333333e0);
  t84 = 0.25648814012420484265e1 * t80 - 0.25648814012420484265e1 * t82;
  r->dedz = t84 * t49;

  if(r->order < 2) return;

  t90 = 0.1e1 / t3;
  t94 = t2 * t2;
  t95 = 0.1e1 / t94;
  t96 = t9 * t95;
  t97 = t13 * t13;
  t98 = 0.1e1 / t97;
  t99 = t5 * t98;
  t104 = t1 * (0.6e1 * r->rs * t7 * t14 - 0.60e1 * t16 * t56 + 0.20e1 * t9 * t90 * t57 - 0.100e1 * t96 * t99 - 0.2e1 * t16);
  t113 = t36 * t95;
  t114 = t39 * t39;
  t115 = 0.1e1 / t114;
  t116 = t32 * t115;
  t122 = -t30 * (0.6e1 * r->rs * t34 * t40 - 0.60e1 * t42 * t69 + 0.20e1 * t36 * t90 * t70 - 0.100e1 * t113 * t116 - 0.2e1 * t42) + t104;
  r->d2edrs2 = t29 * t122 - t104;
  t124 = pow(t23, -0.6666666666666666667e0);
  t126 = pow(t26, -0.6666666666666666667e0);
  t128 = 0.85496046708068280875e0 * t124 + 0.85496046708068280875e0 * t126;
  r->d2edz2 = t128 * t49;
  r->d2edrsz = t84 * t78;

  if(r->order < 3) return;

  t137 = 0.1e1 / t94 / r->rs;
  t142 = 0.1e1 / t94 / t2;
  t150 = t1 * (0.6e1 * t7 * t14 - 0.900e1 * t18 * t98 * t54 - 0.60e1 * t96 * t57 + 0.600e1 * t9 * t137 * t99 - 0.2000e1 * t9 * t142 * t6 / t97 / t13);
  r->d3edrs3 = -t150 + t29 * (-t30 * (0.6e1 * t34 * t40 - 0.900e1 * t44 * t115 * t54 - 0.60e1 * t113 * t70 + 0.600e1 * t36 * t137 * t116 - 0.2000e1 * t36 * t142 * t33 / t114 / t39) + t150);
  t171 = pow(t23, -0.16666666666666666667e1);
  t173 = pow(t26, -0.16666666666666666667e1);
  r->d3edz3 = (-0.56997364472045520586e0 * t171 + 0.56997364472045520586e0 * t173) * t49;
  r->d3edrs2z = t84 * t122;
  r->d3edrsz2 = t128 * t78;

  if(r->order < 4) return;


}

void 
XC(lda_c_hl_func)(const XC(func_type) *p, XC(lda_work_t) *r)
{
  if(p->nspin == XC_UNPOLARIZED)
    func0(p, r);
  else
    func1(p, r);
}

#define maple2c_order 3
#define maple2c_func  XC(lda_c_hl_func)
