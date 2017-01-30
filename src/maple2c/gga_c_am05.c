/* 
  This file was generated automatically with ../scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  Maple source      : ../maple/gga_c_am05.mpl
  Type of functional: work_gga_c
*/

void XC(gga_c_am05_func)
  (const XC(func_type) *p, XC(gga_work_c_t) *r)
{
  double t2, t3, t6, t8, t10, t13, t14, t16;
  double t17, t18, t19, t20, t22, t23, t25, t26;
  double t28, t33, t36, t37, t41, t46, t49, t50;
  double t53, t55, t58, t59, t61, t62, t67, t69;
  double t70, t75, t76, t77, t78, t79, t80, t82;
  double t84, t86, t87, t88, t90, t92, t93, t94;
  double t98, t99, t100, t104, t105, t106, t110, t111;
  double t112, t115, t120, t123, t124, t125, t128, t130;
  double t132, t133, t135, t138, t142, t144, t145, t146;
  double t147, t150, t151, t152, t153, t158, t160, t161;
  double t162, t165, t167, t169, t171, t174, t175, t176;
  double t177, t178, t179, t182, t187, t188, t189, t195;
  double t199, t200, t201, t202, t203, t209, t210, t211;
  double t212, t217, t218, t221, t222, t223, t224, t225;
  double t226, t229, t231, t235, t239, t243, t269, t271;
  double t273, t296, t303, t309, t312, t315, t319, t324;
  double t325, t330, t332, t334, t336, t342, t345, t351;
  double t357, t363, t371, t379, t382, t390, t394, t407;
  double t410, t448, t461, t462, t471;


  t2 = 0.10e1 + 0.21370e0 * r->rs;
  t3 = sqrt(r->rs);
  t6 = pow(r->rs, 0.15e1);
  t8 = pow(r->rs, 0.20e1);
  t10 = 0.472311259980e0 * t3 + 0.223081990640e0 * r->rs + 0.101865569480e0 * t6 + 0.306516993160e-1 * t8;
  t13 = 0.10e1 + 0.10e1 / t10;
  t14 = log(t13);
  t16 = 0.6218140e-1 * t2 * t14;
  t17 = r->zeta * r->zeta;
  t18 = t17 * t17;
  t19 = 0.10e1 + r->zeta;
  t20 = pow(t19, 0.13333333333333333333e1);
  t22 = 0.10e1 - r->zeta;
  t23 = pow(t22, 0.13333333333333333333e1);
  t25 = 0.19236610509315363199e1 * t20 + 0.19236610509315363199e1 * t23 - 0.38473221018630726398e1;
  t26 = t18 * t25;
  t28 = 0.10e1 + 0.20548e0 * r->rs;
  t33 = 0.4389664842300e0 * t3 + 0.1926908313900e0 * r->rs + 0.1046575143400e0 * t6 + 0.1943697291900e-1 * t8;
  t36 = 0.10e1 + 0.10e1 / t33;
  t37 = log(t36);
  t41 = 0.10e1 + 0.11125e0 * r->rs;
  t46 = 0.34979524660e0 * t3 + 0.122365854780e0 * r->rs + 0.297297251880e-1 * t6 + 0.167757841980e-1 * t8;
  t49 = 0.10e1 + 0.10e1 / t46;
  t50 = log(t49);
  t53 = -0.31090700e-1 * t28 * t37 + t16 - 0.19751673498613801407e-1 * t41 * t50;
  t55 = t25 * t41;
  t58 = -t16 + t26 * t53 + 0.19751673498613801407e-1 * t55 * t50;
  t59 = r->xs[0] * r->xs[0];
  t61 = 0.10e1 + 0.46140683200241643250e-1 * t59;
  t62 = 0.1e1 / t61;
  t67 = r->xs[1] * r->xs[1];
  t69 = 0.10e1 + 0.46140683200241643250e-1 * t67;
  t70 = 0.1e1 / t69;
  t75 = 0.50000000000000000000e0 * t19 * (0.19020e0 * t62 + 0.80980e0) + 0.50000000000000000000e0 * t22 * (0.19020e0 * t70 + 0.80980e0);
  r->f = t58 * t75;

  if(r->order < 1) return;

  t76 = 0.132881651800e-1 * t14;
  t77 = t10 * t10;
  t78 = 0.1e1 / t77;
  t79 = t2 * t78;
  t80 = 0.1e1 / t3;
  t82 = pow(r->rs, 0.5e0);
  t84 = pow(r->rs, 0.10e1);
  t86 = 0.23615562999000000000e0 * t80 + 0.223081990640e0 + 0.1527983542200e0 * t82 + 0.6130339863200e-1 * t84;
  t87 = 0.1e1 / t13;
  t88 = t86 * t87;
  t90 = 0.62181400e-1 * t79 * t88;
  t92 = t33 * t33;
  t93 = 0.1e1 / t92;
  t94 = t28 * t93;
  t98 = 0.21948324211500000000e0 * t80 + 0.1926908313900e0 + 0.15698627151000e0 * t82 + 0.38873945838000e-1 * t84;
  t99 = 0.1e1 / t36;
  t100 = t98 * t99;
  t104 = t46 * t46;
  t105 = 0.1e1 / t104;
  t106 = t41 * t105;
  t110 = 0.17489762330000000000e0 * t80 + 0.122365854780e0 + 0.4459458778200e-1 * t82 + 0.3355156839600e-1 * t84;
  t111 = 0.1e1 / t49;
  t112 = t110 * t111;
  t115 = -0.638851703600e-2 * t37 + 0.310907000e-1 * t94 * t100 + t76 - t90 - 0.21973736767207854065e-2 * t50 + 0.19751673498613801407e-1 * t106 * t112;
  t120 = t105 * t110 * t111;
  t123 = -t76 + t90 + t26 * t115 + 0.21973736767207854065e-2 * t25 * t50 - 0.19751673498613801407e-1 * t55 * t120;
  r->dfdrs = t123 * t75;
  t124 = t17 * r->zeta;
  t125 = t124 * t25;
  t128 = pow(t19, 0.3333333333333333333e0);
  t130 = pow(t22, 0.3333333333333333333e0);
  t132 = 0.25648814012420484265e1 * t128 - 0.25648814012420484265e1 * t130;
  t133 = t18 * t132;
  t135 = t132 * t41;
  t138 = 0.4e1 * t125 * t53 + t133 * t53 + 0.19751673498613801407e-1 * t135 * t50;
  t142 = 0.95100000000000000000e-1 * t62 - 0.95100000000000000000e-1 * t70;
  r->dfdz = t138 * t75 + t58 * t142;
  r->dfdxt = 0;
  t144 = t58 * t19;
  t145 = t61 * t61;
  t146 = 0.1e1 / t145;
  t147 = t146 * r->xs[0];
  r->dfdxs[0] = -0.87759579446859605460e-2 * t144 * t147;
  t150 = t58 * t22;
  t151 = t69 * t69;
  t152 = 0.1e1 / t151;
  t153 = t152 * r->xs[1];
  r->dfdxs[1] = -0.87759579446859605460e-2 * t150 * t153;

  if(r->order < 2) return;

  t158 = 0.2657633036000e-1 * t78 * t86 * t87;
  t160 = 0.1e1 / t77 / t10;
  t161 = t2 * t160;
  t162 = t86 * t86;
  t165 = 0.124362800e0 * t161 * t162 * t87;
  t167 = 0.1e1 / t3 / r->rs;
  t169 = pow(r->rs, -0.5e0);
  t171 = -0.11807781499500000000e0 * t167 + 0.7639917711000e-1 * t169 + 0.61303398632000e-1;
  t174 = 0.62181400e-1 * t79 * t171 * t87;
  t175 = t77 * t77;
  t176 = 0.1e1 / t175;
  t177 = t2 * t176;
  t178 = t13 * t13;
  t179 = 0.1e1 / t178;
  t182 = 0.621814000e-1 * t177 * t162 * t179;
  t187 = 0.1e1 / t92 / t33;
  t188 = t28 * t187;
  t189 = t98 * t98;
  t195 = -0.10974162105750000000e0 * t167 + 0.78493135755000e-1 * t169 + 0.388739458380000e-1;
  t199 = t92 * t92;
  t200 = 0.1e1 / t199;
  t201 = t28 * t200;
  t202 = t36 * t36;
  t203 = 0.1e1 / t202;
  t209 = 0.1e1 / t104 / t46;
  t210 = t41 * t209;
  t211 = t110 * t110;
  t212 = t211 * t111;
  t217 = -0.87448811650000000000e-1 * t167 + 0.22297293891000e-1 * t169 + 0.33551568396000e-1;
  t218 = t217 * t111;
  t221 = t104 * t104;
  t222 = 0.1e1 / t221;
  t223 = t41 * t222;
  t224 = t49 * t49;
  t225 = 0.1e1 / t224;
  t226 = t211 * t225;
  t229 = 0.12777034072000e-1 * t93 * t98 * t99 - 0.621814000e-1 * t188 * t189 * t99 + 0.310907000e-1 * t94 * t195 * t99 + 0.3109070000e-1 * t201 * t189 * t203 - t158 + t165 - t174 - t182 + 0.43947473534415708130e-2 * t120 - 0.39503346997227602814e-1 * t210 * t212 + 0.19751673498613801407e-1 * t106 * t218 + 0.19751673498613801407e-1 * t223 * t226;
  t231 = t25 * t105;
  t235 = t209 * t211 * t111;
  t239 = t105 * t217 * t111;
  t243 = t222 * t211 * t225;
  r->d2fdrs2 = (t158 - t165 + t174 + t182 + t26 * t229 - 0.43947473534415708130e-2 * t231 * t112 + 0.39503346997227602814e-1 * t55 * t235 - 0.19751673498613801407e-1 * t55 * t239 - 0.19751673498613801407e-1 * t55 * t243) * t75;
  r->d2fdrsz = (0.4e1 * t125 * t115 + t133 * t115 + 0.21973736767207854065e-2 * t132 * t50 - 0.19751673498613801407e-1 * t135 * t120) * t75 + t123 * t142;
  r->d2fdrsxt = 0;
  r->d2fdrsxs[0] = -0.87759579446859605460e-2 * t123 * t19 * t147;
  r->d2fdrsxs[1] = -0.87759579446859605460e-2 * t123 * t22 * t153;
  t269 = pow(t19, -0.6666666666666666667e0);
  t271 = pow(t22, -0.6666666666666666667e0);
  t273 = 0.85496046708068280875e0 * t269 + 0.85496046708068280875e0 * t271;
  r->d2fdz2 = (0.12e2 * t17 * t25 * t53 + 0.8e1 * t124 * t132 * t53 + t18 * t273 * t53 + 0.19751673498613801407e-1 * t273 * t41 * t50) * t75 + 0.2e1 * t138 * t142;
  r->d2fdzxt = 0;
  r->d2fdzxs[0] = -0.87759579446859605460e-2 * t138 * t19 * t147 - 0.87759579446859605462e-2 * t58 * t146 * r->xs[0];
  r->d2fdzxs[1] = -0.87759579446859605460e-2 * t138 * t22 * t153 + 0.87759579446859605462e-2 * t58 * t152 * r->xs[1];
  r->d2fdxt2 = 0;
  r->d2fdxtxs[0] = 0;
  r->d2fdxtxs[1] = 0;
  t296 = 0.1e1 / t145 / t61;
  r->d2fdxs2[0] = 0.16197147812175947202e-2 * t144 * t296 * t59 - 0.87759579446859605460e-2 * t144 * t146;
  r->d2fdxs2[1] = 0;
  t303 = 0.1e1 / t151 / t69;
  r->d2fdxs2[2] = 0.16197147812175947202e-2 * t150 * t303 * t67 - 0.87759579446859605460e-2 * t150 * t152;

  if(r->order < 3) return;

  t309 = t162 * t86;
  t312 = 0.373088400e0 * t177 * t309 * t87;
  t315 = 0.373088400e0 * t161 * t88 * t171;
  t319 = 0.1865442000e0 * t177 * t171 * t179 * t86;
  t324 = 0.1e1 / t221 / t46;
  t325 = t211 * t110;
  t330 = r->rs * r->rs;
  t332 = 0.1e1 / t3 / t330;
  t334 = pow(r->rs, -0.15e1);
  t336 = 0.13117321747500000000e0 * t332 - 0.111486469455000e-1 * t334;
  t342 = 0.1e1 / t221 / t104;
  t345 = 0.1e1 / t224 / t49;
  t351 = 0.7972899108000e-1 * t160 * t162 * t87;
  t357 = 0.3730884000e0 * t2 / t175 / t10 * t309 * t179;
  t363 = 0.62181400e-1 * t79 * (0.17711672249250000000e0 * t332 - 0.38199588555000e-1 * t334) * t87;
  t371 = 0.12436280000e0 * t2 / t175 / t77 * t309 / t178 / t13;
  t379 = 0.3986449554000e-1 * t78 * t171 * t87;
  t382 = 0.39864495540000e-1 * t176 * t162 * t179;
  t390 = t112 * t217;
  t394 = t217 * t225 * t110;
  t407 = t315 - t319 - 0.1865442000e0 * t188 * t100 * t195 + 0.9327210000e-1 * t201 * t195 * t203 * t98 - 0.11851004099168280844e0 * t210 * t390 + 0.59255020495841404221e-1 * t223 * t394 + t351 - t379 - t382 - 0.38331102216000e-1 * t187 * t189 * t99 - 0.13184242060324712439e-1 * t235 + 0.19165551108000e-1 * t93 * t195 * t99 + 0.191655511080000e-1 * t200 * t189 * t203;
  t410 = t189 * t98;
  t448 = 0.65921210301623562195e-2 * t239 + 0.65921210301623562195e-2 * t243 - t312 + t357 - t363 - t371 + 0.1865442000e0 * t201 * t410 * t99 + 0.11851004099168280844e0 * t223 * t325 * t111 - 0.18654420000e0 * t28 / t199 / t33 * t410 * t203 + 0.310907000e-1 * t94 * (0.16461243158625000000e0 * t332 - 0.392465678775000e-1 * t334) * t99 + 0.62181400000e-1 * t28 / t199 / t92 * t410 / t202 / t36 - 0.11851004099168280844e0 * t41 * t324 * t325 * t225 + 0.19751673498613801407e-1 * t106 * t336 * t111 + 0.39503346997227602814e-1 * t41 * t342 * t325 * t345;
  t461 = t312 - t315 + t319 + 0.13184242060324712439e-1 * t25 * t209 * t212 + 0.11851004099168280844e0 * t55 * t324 * t325 * t225 - 0.19751673498613801407e-1 * t55 * t105 * t336 * t111 - 0.39503346997227602814e-1 * t55 * t342 * t325 * t345 - t351 - t357 + t363 + t371 - 0.65921210301623562195e-2 * t231 * t218 - 0.65921210301623562195e-2 * t25 * t222 * t226 + t379 + t382 + t26 * (t407 + t448) - 0.11851004099168280844e0 * t55 * t222 * t325 * t111 + 0.11851004099168280844e0 * t55 * t209 * t390 - 0.59255020495841404221e-1 * t55 * t222 * t394;
  r->d3fdrs3 = t461 * t75;
  r->d3fdz3 = 0;
  r->d3fdxt3 = 0;
  t462 = t145 * t145;
  r->d3fdxs3[0] = -0.44840847956945844837e-3 * t144 / t462 * t59 * r->xs[0] + 0.48591443436527841606e-2 * t144 * t296 * r->xs[0];
  r->d3fdxs3[1] = 0;
  r->d3fdxs3[2] = 0;
  t471 = t151 * t151;
  r->d3fdxs3[3] = -0.44840847956945844837e-3 * t150 / t471 * t67 * r->xs[1] + 0.48591443436527841606e-2 * t150 * t303 * r->xs[1];
  r->d3fdrs2z = 0;
  r->d3fdrs2xt = 0;
  r->d3fdrs2xs[0] = 0;
  r->d3fdrs2xs[1] = 0;
  r->d3fdrsz2 = 0;
  r->d3fdz2xt = 0;
  r->d3fdz2xs[0] = 0;
  r->d3fdz2xs[1] = 0;
  r->d3fdrsxt2 = 0;
  r->d3fdzxt2 = 0;
  r->d3fdxt2xs[0] = 0;
  r->d3fdxt2xs[1] = 0;
  r->d3fdrsxs2[0] = 0;
  r->d3fdrsxs2[1] = 0;
  r->d3fdrsxs2[2] = 0;
  r->d3fdzxs2[0] = 0;
  r->d3fdzxs2[1] = 0;
  r->d3fdzxs2[2] = 0;
  r->d3fdxtxs2[0] = 0;
  r->d3fdxtxs2[1] = 0;
  r->d3fdxtxs2[2] = 0;
  r->d3fdrszxt = 0;
  r->d3fdrszxs[0] = 0;
  r->d3fdrszxs[1] = 0;
  r->d3fdrsxtxs[0] = 0;
  r->d3fdrsxtxs[1] = 0;
  r->d3fdzxtxs[0] = 0;
  r->d3fdzxtxs[1] = 0;

  if(r->order < 4) return;


}

#define maple2c_order 3
#define maple2c_func  XC(gga_c_am05_func)
