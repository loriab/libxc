/* 
  This file was generated automatically with ../scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  Maple source      : ../maple/gga_c_scan_e0.mpl
  Type of functional: work_gga_c
*/

void XC(gga_c_scan_e0_func)
  (const XC(func_type) *p, XC(gga_work_c_t) *r)
{
  double t2, t3, t6, t8, t10, t13, t14, t16;
  double t17, t18, t19, t20, t22, t23, t25, t26;
  double t28, t33, t36, t37, t41, t46, t49, t50;
  double t53, t54, t55, t57, t58, t60, t62, t63;
  double t64, t66, t68, t69, t70, t71, t72, t75;
  double t76, t77, t78, t79, t80, t81, t82, t83;
  double t86, t87, t88, t91, t92, t95, t96, t97;
  double t98, t99, t101, t103, t105, t106, t107, t109;
  double t111, t112, t113, t117, t118, t119, t123, t124;
  double t125, t129, t130, t131, t134, t135, t137, t139;
  double t141, t142, t143, t146, t147, t148, t149, t152;
  double t153, t154, t155, t156, t158, t159, t160, t161;
  double t162, t165, t166, t167, t170, t171, t174, t175;
  double t178, t179, t180, t183, t184, t186, t187, t189;
  double t191, t192, t193, t194, t196, t197, t198, t200;
  double t202, t205, t206, t209, t210, t213, t214, t215;
  double t218, t219, t220, t223, t224, t230, t235, t236;
  double t242, t244, t245, t246, t249, t251, t253, t255;
  double t258, t259, t260, t261, t262, t263, t266, t271;
  double t272, t273, t279, t283, t284, t285, t286, t287;
  double t293, t294, t295, t296, t301, t302, t305, t306;
  double t307, t308, t309, t310, t313, t314, t315, t317;
  double t319, t321, t323, t325, t327, t329, t330, t331;
  double t332, t335, t339, t345, t346, t347, t350, t356;
  double t357, t358, t359, t360, t361, t362, t363, t364;
  double t365, t368, t369, t372, t373, t374, t377, t378;
  double t382, t383, t386, t387, t391, t394, t399, t404;
  double t407, t409, t410, t414, t415, t417, t419, t421;
  double t424, t431, t439, t449, t494, t497, t498, t504;
  double t514, t515, t527, t529, t530, t535, t538, t539;
  double t541, t543, t545, t548, t550, t556, t558, t560;
  double t563, t567, t587, t621, t656, t658, t660, t662;
  double t670, t672, t678, t681, t684, t688, t691, t693;
  double t694, t698, t700, t702, t704, t708, t710, t713;
  double t716, t719, t725, t731, t739, t740, t742, t745;
  double t749, t751, t753, t756, t758, t765, t770, t773;
  double t797, t807, t836, t838, t839, t856, t866, t871;
  double t875, t882, t883, t896, t899, t947, t979, t981;
  double t982, t984, t985, t994, t1006;


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
  t54 = t26 * t53;
  t55 = t25 * t41;
  t57 = 0.19751673498613801407e-1 * t55 * t50;
  t58 = pow(t19, 0.66666666666666666667e0);
  t60 = pow(t22, 0.66666666666666666667e0);
  t62 = 0.50000000000000000000e0 * t58 + 0.50000000000000000000e0 * t60;
  t63 = t62 * t62;
  t64 = t63 * t62;
  t66 = 0.10e1 + 0.1e0 * r->rs;
  t68 = 0.10e1 + 0.1778e0 * r->rs;
  t69 = 0.1e1 / t68;
  t70 = t66 * t69;
  t71 = -t16 + t54 + t57;
  t72 = 0.1e1 / t64;
  t75 = exp(-0.32163968442914821122e2 * t71 * t72);
  t76 = t75 - 0.10e1;
  t77 = 0.1e1 / t76;
  t78 = t70 * t77;
  t79 = r->xt * r->xt;
  t80 = 0.1e1 / t63;
  t81 = t79 * t80;
  t82 = 0.1e1 / r->rs;
  t83 = t81 * t82;
  t86 = 0.10e1 + 0.33799371893234043875e0 * t78 * t83;
  t87 = pow(t86, -0.25000000000000000000e0);
  t88 = 0.10e1 - t87;
  t91 = 0.10e1 + 0.10000000000000000000e1 * t88 * t76;
  t92 = log(t91);
  r->f = -t16 + t54 + t57 + 0.31090690869654895034e-1 * t64 * t92;

  if(r->order < 1) return;

  t95 = 0.132881651800e-1 * t14;
  t96 = t10 * t10;
  t97 = 0.1e1 / t96;
  t98 = t2 * t97;
  t99 = 0.1e1 / t3;
  t101 = pow(r->rs, 0.5e0);
  t103 = pow(r->rs, 0.10e1);
  t105 = 0.23615562999000000000e0 * t99 + 0.223081990640e0 + 0.1527983542200e0 * t101 + 0.6130339863200e-1 * t103;
  t106 = 0.1e1 / t13;
  t107 = t105 * t106;
  t109 = 0.62181400e-1 * t98 * t107;
  t111 = t33 * t33;
  t112 = 0.1e1 / t111;
  t113 = t28 * t112;
  t117 = 0.21948324211500000000e0 * t99 + 0.1926908313900e0 + 0.15698627151000e0 * t101 + 0.38873945838000e-1 * t103;
  t118 = 0.1e1 / t36;
  t119 = t117 * t118;
  t123 = t46 * t46;
  t124 = 0.1e1 / t123;
  t125 = t41 * t124;
  t129 = 0.17489762330000000000e0 * t99 + 0.122365854780e0 + 0.4459458778200e-1 * t101 + 0.3355156839600e-1 * t103;
  t130 = 0.1e1 / t49;
  t131 = t129 * t130;
  t134 = -0.638851703600e-2 * t37 + 0.310907000e-1 * t113 * t119 + t95 - t109 - 0.21973736767207854065e-2 * t50 + 0.19751673498613801407e-1 * t125 * t131;
  t135 = t26 * t134;
  t137 = 0.21973736767207854065e-2 * t25 * t50;
  t139 = t124 * t129 * t130;
  t141 = 0.19751673498613801407e-1 * t55 * t139;
  t142 = pow(t86, -0.12500000000000000000e1);
  t143 = t69 * t77;
  t146 = t68 * t68;
  t147 = 0.1e1 / t146;
  t148 = t66 * t147;
  t149 = t148 * t77;
  t152 = t76 * t76;
  t153 = 0.1e1 / t152;
  t154 = t153 * t79;
  t155 = t70 * t154;
  t156 = t63 * t63;
  t158 = 0.1e1 / t156 / t62;
  t159 = t158 * t82;
  t160 = -t95 + t109 + t135 + t137 - t141;
  t161 = t160 * t75;
  t162 = t159 * t161;
  t165 = r->rs * r->rs;
  t166 = 0.1e1 / t165;
  t167 = t81 * t166;
  t170 = 0.33799371893234043875e-1 * t143 * t83 - 0.60095283226170130010e-1 * t149 * t83 + 0.10871219309643219598e2 * t155 * t162 - 0.33799371893234043875e0 * t78 * t167;
  t171 = t142 * t170;
  t174 = t88 * t160;
  t175 = t72 * t75;
  t178 = 0.25000000000000000000e0 * t171 * t76 - 0.32163968442914821122e2 * t174 * t175;
  t179 = t64 * t178;
  t180 = 0.1e1 / t91;
  r->dfdrs = -t95 + t109 + t135 + t137 - t141 + 0.31090690869654895034e-1 * t179 * t180;
  t183 = t17 * r->zeta;
  t184 = t183 * t25;
  t186 = 0.4e1 * t184 * t53;
  t187 = pow(t19, 0.3333333333333333333e0);
  t189 = pow(t22, 0.3333333333333333333e0);
  t191 = 0.25648814012420484265e1 * t187 - 0.25648814012420484265e1 * t189;
  t192 = t18 * t191;
  t193 = t192 * t53;
  t194 = t191 * t41;
  t196 = 0.19751673498613801407e-1 * t194 * t50;
  t197 = t63 * t92;
  t198 = pow(t19, -0.33333333333333333333e0);
  t200 = pow(t22, -0.33333333333333333333e0);
  t202 = 0.33333333333333333334e0 * t198 - 0.33333333333333333334e0 * t200;
  t205 = t80 * t82;
  t206 = t186 + t193 + t196;
  t209 = 0.1e1 / t156;
  t210 = t71 * t209;
  t213 = -0.32163968442914821122e2 * t206 * t72 + 0.96491905328744463366e2 * t210 * t202;
  t214 = t213 * t75;
  t215 = t205 * t214;
  t218 = t79 * t72;
  t219 = t82 * t202;
  t220 = t218 * t219;
  t223 = -0.33799371893234043875e0 * t155 * t215 - 0.67598743786468087750e0 * t78 * t220;
  t224 = t142 * t223;
  t230 = 0.25000000000000000000e0 * t224 * t76 + 0.10000000000000000000e1 * t88 * t213 * t75;
  r->dfdz = t186 + t193 + t196 + 0.93272072608964685102e-1 * t197 * t202 + 0.31090690869654895034e-1 * t64 * t230 * t180;
  t235 = t62 * t142 * t66;
  t236 = t69 * r->xt;
  r->dfdxt = 0.52542291156052098581e-2 * t235 * t236 * t82 * t180;
  r->dfdxs[0] = 0;
  r->dfdxs[1] = 0;

  if(r->order < 2) return;

  t242 = 0.2657633036000e-1 * t97 * t105 * t106;
  t244 = 0.1e1 / t96 / t10;
  t245 = t2 * t244;
  t246 = t105 * t105;
  t249 = 0.124362800e0 * t245 * t246 * t106;
  t251 = 0.1e1 / t3 / r->rs;
  t253 = pow(r->rs, -0.5e0);
  t255 = -0.11807781499500000000e0 * t251 + 0.7639917711000e-1 * t253 + 0.61303398632000e-1;
  t258 = 0.62181400e-1 * t98 * t255 * t106;
  t259 = t96 * t96;
  t260 = 0.1e1 / t259;
  t261 = t2 * t260;
  t262 = t13 * t13;
  t263 = 0.1e1 / t262;
  t266 = 0.621814000e-1 * t261 * t246 * t263;
  t271 = 0.1e1 / t111 / t33;
  t272 = t28 * t271;
  t273 = t117 * t117;
  t279 = -0.10974162105750000000e0 * t251 + 0.78493135755000e-1 * t253 + 0.388739458380000e-1;
  t283 = t111 * t111;
  t284 = 0.1e1 / t283;
  t285 = t28 * t284;
  t286 = t36 * t36;
  t287 = 0.1e1 / t286;
  t293 = 0.1e1 / t123 / t46;
  t294 = t41 * t293;
  t295 = t129 * t129;
  t296 = t295 * t130;
  t301 = -0.87448811650000000000e-1 * t251 + 0.22297293891000e-1 * t253 + 0.33551568396000e-1;
  t302 = t301 * t130;
  t305 = t123 * t123;
  t306 = 0.1e1 / t305;
  t307 = t41 * t306;
  t308 = t49 * t49;
  t309 = 0.1e1 / t308;
  t310 = t295 * t309;
  t313 = 0.12777034072000e-1 * t112 * t117 * t118 - 0.621814000e-1 * t272 * t273 * t118 + 0.310907000e-1 * t113 * t279 * t118 + 0.3109070000e-1 * t285 * t273 * t287 - t242 + t249 - t258 - t266 + 0.43947473534415708130e-2 * t139 - 0.39503346997227602814e-1 * t294 * t296 + 0.19751673498613801407e-1 * t125 * t302 + 0.19751673498613801407e-1 * t307 * t310;
  t314 = t26 * t313;
  t315 = t25 * t124;
  t317 = 0.43947473534415708130e-2 * t315 * t131;
  t319 = t293 * t295 * t130;
  t321 = 0.39503346997227602814e-1 * t55 * t319;
  t323 = t124 * t301 * t130;
  t325 = 0.19751673498613801407e-1 * t55 * t323;
  t327 = t306 * t295 * t309;
  t329 = 0.19751673498613801407e-1 * t55 * t327;
  t330 = pow(t86, -0.22500000000000000000e1);
  t331 = t170 * t170;
  t332 = t330 * t331;
  t335 = t147 * t77;
  t339 = t69 * t153 * t79;
  t345 = 0.1e1 / t146 / t68;
  t346 = t66 * t345;
  t347 = t346 * t77;
  t350 = t148 * t154;
  t356 = 0.1e1 / t152 / t76;
  t357 = t356 * t79;
  t358 = t70 * t357;
  t359 = t156 * t156;
  t360 = 0.1e1 / t359;
  t361 = t360 * t82;
  t362 = t160 * t160;
  t363 = t75 * t75;
  t364 = t362 * t363;
  t365 = t361 * t364;
  t368 = t158 * t166;
  t369 = t368 * t161;
  t372 = t242 - t249 + t258 + t266 + t314 - t317 + t321 - t325 - t329;
  t373 = t372 * t75;
  t374 = t159 * t373;
  t377 = t362 * t75;
  t378 = t361 * t377;
  t382 = 0.1e1 / t165 / r->rs;
  t383 = t81 * t382;
  t386 = -0.12019056645234026002e-1 * t335 * t83 + 0.21742438619286439196e1 * t339 * t162 - 0.67598743786468087750e-1 * t143 * t167 + 0.21369882715226098232e-1 * t347 * t83 - 0.38658055865091288891e1 * t350 * t162 + 0.12019056645234026002e0 * t149 * t167 + 0.69932310962274152495e3 * t358 * t365 - 0.21742438619286439196e2 * t155 * t369 + 0.10871219309643219598e2 * t155 * t374 - 0.34966155481137076248e3 * t155 * t378 + 0.67598743786468087750e0 * t78 * t383;
  t387 = t142 * t386;
  t391 = t160 * t72 * t75;
  t394 = t88 * t372;
  t399 = 0.1e1 / t156 / t63;
  t404 = t64 * (-0.31250000000000000000e0 * t332 * t76 + 0.25000000000000000000e0 * t387 * t76 - 0.16081984221457410561e2 * t171 * t391 - 0.32163968442914821122e2 * t394 * t175 + 0.10345208659968204628e4 * t88 * t362 * t399 * t75);
  t407 = t178 * t178;
  t409 = t91 * t91;
  t410 = 0.1e1 / t409;
  r->d2fdrs2 = t242 - t249 + t258 + t266 + t314 - t317 + t321 - t325 - t329 + 0.31090690869654895034e-1 * t404 * t180 - 0.31090690869654895034e-1 * t64 * t407 * t410;
  t414 = 0.4e1 * t184 * t134;
  t415 = t192 * t134;
  t417 = 0.21973736767207854065e-2 * t191 * t50;
  t419 = 0.19751673498613801407e-1 * t194 * t139;
  t421 = t180 * t202;
  t424 = t330 * t170;
  t431 = t72 * t82;
  t439 = t160 * t363;
  t449 = t414 + t415 + t417 - t419;
  r->d2fdrsz = t414 + t415 + t417 - t419 + 0.93272072608964685102e-1 * t63 * t178 * t421 + 0.31090690869654895034e-1 * t64 * (-0.31250000000000000000e0 * t424 * t76 * t223 + 0.25000000000000000000e0 * t142 * (-0.33799371893234043875e-1 * t339 * t215 - 0.67598743786468087750e-1 * t143 * t79 * t431 * t202 + 0.60095283226170130010e-1 * t350 * t215 + 0.12019056645234026002e0 * t149 * t220 - 0.21742438619286439196e2 * t358 * t159 * t439 * t213 - 0.54356096548216097990e2 * t155 * t399 * t82 * t161 * t202 + 0.10871219309643219598e2 * t155 * t159 * t449 * t75 + 0.10871219309643219598e2 * t155 * t159 * t160 * t213 * t75 + 0.33799371893234043875e0 * t155 * t80 * t166 * t214 + 0.67598743786468087750e0 * t78 * t218 * t166 * t202) * t76 + 0.25000000000000000000e0 * t171 * t214 - 0.80409921107287052805e1 * t224 * t391 - 0.32163968442914821122e2 * t88 * t449 * t175 + 0.96491905328744463366e2 * t174 * t209 * t75 * t202 - 0.32163968442914821122e2 * t174 * t72 * t213 * t75) * t180 - 0.31090690869654895034e-1 * t179 * t410 * t230;
  t494 = t236 * t205;
  t497 = r->xt * t80;
  t498 = t497 * t82;
  t504 = t70 * t153 * r->xt;
  t514 = t142 * t66;
  t515 = t514 * t143;
  t527 = t410 * t142;
  t529 = r->xt * t82;
  t530 = t70 * t529;
  r->d2fdrsxt = 0.31090690869654895034e-1 * t64 * (-0.21124607433271277422e0 * t424 * t66 * t494 + 0.25000000000000000000e0 * t142 * (0.67598743786468087750e-1 * t143 * t498 - 0.12019056645234026002e0 * t149 * t498 + 0.21742438619286439196e2 * t504 * t162 - 0.67598743786468087750e0 * t78 * t497 * t166) * t76 - 0.54356096548216097993e1 * t515 * r->xt * t158 * t82 * t160 * t75) * t180 - 0.52542291156052098581e-2 * t62 * t178 * t527 * t530;
  r->d2fdrsxs[0] = 0;
  r->d2fdrsxs[1] = 0;
  t535 = 0.12e2 * t17 * t25 * t53;
  t538 = 0.8e1 * t183 * t191 * t53;
  t539 = pow(t19, -0.6666666666666666667e0);
  t541 = pow(t22, -0.6666666666666666667e0);
  t543 = 0.85496046708068280875e0 * t539 + 0.85496046708068280875e0 * t541;
  t545 = t18 * t543 * t53;
  t548 = 0.19751673498613801407e-1 * t543 * t41 * t50;
  t550 = t202 * t202;
  t556 = pow(t19, -0.13333333333333333333e1);
  t558 = pow(t22, -0.13333333333333333333e1);
  t560 = -0.11111111111111111111e0 * t556 - 0.11111111111111111111e0 * t558;
  t563 = t223 * t223;
  t567 = t213 * t213;
  t587 = -0.32163968442914821122e2 * (t535 + t538 + t545 + t548) * t72 + 0.19298381065748892673e3 * t206 * t209 * t202 - 0.38596762131497785346e3 * t71 * t158 * t550 + 0.96491905328744463366e2 * t210 * t560;
  t621 = t230 * t230;
  r->d2fdz2 = t535 + t538 + t545 + t548 + 0.18654414521792937020e0 * t62 * t92 * t550 + 0.18654414521792937020e0 * t63 * t230 * t421 + 0.93272072608964685102e-1 * t197 * t560 + 0.31090690869654895034e-1 * t64 * (-0.31250000000000000000e0 * t330 * t563 * t76 + 0.25000000000000000000e0 * t142 * (0.67598743786468087750e0 * t358 * t205 * t567 * t363 + 0.13519748757293617550e1 * t155 * t431 * t214 * t202 - 0.33799371893234043875e0 * t155 * t205 * t587 * t75 - 0.33799371893234043875e0 * t155 * t205 * t567 * t75 + 0.20279623135940426325e1 * t78 * t79 * t209 * t82 * t550 - 0.67598743786468087750e0 * t78 * t218 * t82 * t560) * t76 + 0.50000000000000000000e0 * t224 * t214 + 0.10000000000000000000e1 * t88 * t587 * t75 + 0.10000000000000000000e1 * t88 * t567 * t75) * t180 - 0.31090690869654895034e-1 * t64 * t621 * t410;
  r->d2fdzxt = 0.15762687346815629574e-1 * t514 * t69 * t529 * t421 + 0.31090690869654895034e-1 * t64 * (-0.21124607433271277422e0 * t330 * t223 * t66 * t494 + 0.25000000000000000000e0 * t142 * (-0.67598743786468087750e0 * t504 * t215 - 0.13519748757293617550e1 * t78 * r->xt * t72 * t219) * t76 + 0.16899685946617021938e0 * t515 * t497 * t82 * t213 * t75) * t180 - 0.52542291156052098581e-2 * t62 * t230 * t527 * t530;
  r->d2fdzxs[0] = 0;
  r->d2fdzxs[1] = 0;
  t656 = 0.1e1 / t62;
  t658 = t66 * t66;
  t660 = t656 * t330 * t658 * t147;
  t662 = t180 * t77;
  t670 = pow(t86, -0.25000000000000000000e1);
  t672 = t656 * t670 * t658;
  r->d2fdxt2 = -0.44397410972649674476e-2 * t660 * t79 * t166 * t662 + 0.52542291156052098581e-2 * t235 * t69 * t82 * t180 - 0.88794821945299348955e-3 * t672 * t147 * t79 * t166 * t410;
  r->d2fdxtxs[0] = 0;
  r->d2fdxtxs[1] = 0;
  r->d2fdxs2[0] = 0;
  r->d2fdxs2[1] = 0;
  r->d2fdxs2[2] = 0;

  if(r->order < 3) return;

  t678 = t246 * t105;
  t681 = 0.373088400e0 * t261 * t678 * t106;
  t684 = 0.373088400e0 * t245 * t107 * t255;
  t688 = 0.1865442000e0 * t261 * t255 * t263 * t105;
  t691 = 0.13184242060324712439e-1 * t25 * t293 * t296;
  t693 = 0.1e1 / t305 / t46;
  t694 = t295 * t129;
  t698 = 0.11851004099168280844e0 * t55 * t693 * t694 * t309;
  t700 = 0.1e1 / t3 / t165;
  t702 = pow(r->rs, -0.15e1);
  t704 = 0.13117321747500000000e0 * t700 - 0.111486469455000e-1 * t702;
  t708 = 0.19751673498613801407e-1 * t55 * t124 * t704 * t130;
  t710 = 0.1e1 / t305 / t123;
  t713 = 0.1e1 / t308 / t49;
  t716 = 0.39503346997227602814e-1 * t55 * t710 * t694 * t713;
  t719 = 0.7972899108000e-1 * t244 * t246 * t106;
  t725 = 0.3730884000e0 * t2 / t259 / t10 * t678 * t263;
  t731 = 0.62181400e-1 * t98 * (0.17711672249250000000e0 * t700 - 0.38199588555000e-1 * t702) * t106;
  t739 = 0.12436280000e0 * t2 / t259 / t96 * t678 / t262 / t13;
  t740 = t681 - t684 + t688 + t691 + t698 - t708 - t716 - t719 - t725 + t731 + t739;
  t742 = 0.65921210301623562195e-2 * t315 * t302;
  t745 = 0.65921210301623562195e-2 * t25 * t306 * t310;
  t749 = 0.11851004099168280844e0 * t55 * t306 * t694 * t130;
  t751 = t131 * t301;
  t753 = 0.11851004099168280844e0 * t55 * t293 * t751;
  t756 = t301 * t309 * t129;
  t758 = 0.59255020495841404221e-1 * t55 * t306 * t756;
  t765 = 0.1e1 / t409 / t91;
  t770 = 0.3986449554000e-1 * t97 * t255 * t106;
  t773 = 0.39864495540000e-1 * t260 * t246 * t263;
  t797 = t273 * t117;
  t807 = 0.9327210000e-1 * t285 * t279 * t287 * t117 - 0.11851004099168280844e0 * t294 * t751 + 0.59255020495841404221e-1 * t307 * t756 - t770 - t773 - 0.38331102216000e-1 * t271 * t273 * t118 - 0.13184242060324712439e-1 * t319 + 0.19165551108000e-1 * t112 * t279 * t118 + 0.191655511080000e-1 * t284 * t273 * t287 + 0.65921210301623562195e-2 * t323 + 0.65921210301623562195e-2 * t327 - 0.18654420000e0 * t28 / t283 / t33 * t797 * t287 + 0.310907000e-1 * t113 * (0.16461243158625000000e0 * t700 - 0.392465678775000e-1 * t702) * t118;
  t836 = 0.62181400000e-1 * t28 / t283 / t111 * t797 / t286 / t36 - 0.11851004099168280844e0 * t41 * t693 * t694 * t309 + 0.19751673498613801407e-1 * t125 * t704 * t130 + 0.39503346997227602814e-1 * t41 * t710 * t694 * t713 + 0.1865442000e0 * t285 * t797 * t118 + 0.11851004099168280844e0 * t307 * t694 * t130 - t681 + t725 - t731 - t739 + t719 - 0.1865442000e0 * t272 * t119 * t279 + t684 - t688;
  t838 = t26 * (t807 + t836);
  t839 = pow(t86, -0.32500000000000000000e1);
  t856 = t146 * t146;
  t866 = t165 * t165;
  t871 = t360 * t166;
  t875 = t681 - t684 + t688 + t691 + t698 - t708 - t716 - t719 - t725 + t731 + t739 - t742 - t745 - t749 + t753 - t758 + t770 + t773 + t838;
  t882 = 0.1e1 / t359 / t64 * t82;
  t883 = t362 * t160;
  t896 = 0.64109648145678294695e-2 * t345 * t77 * t83 + 0.36057169935702078006e-1 * t335 * t167 + 0.20279623135940426325e0 * t143 * t383 - 0.11398695440301600797e-1 * t66 / t856 * t77 * t83 - 0.64109648145678294695e-1 * t347 * t167 - 0.36057169935702078006e0 * t149 * t383 - 0.20279623135940426325e1 * t78 * t81 / t866 + 0.10489846644341122874e4 * t155 * t871 * t377 + 0.10871219309643219598e2 * t155 * t159 * t875 * t75 + 0.11246503214653460243e5 * t155 * t882 * t883 * t75 + 0.20620206998439693495e1 * t346 * t154 * t162 - 0.57987083797636933336e1 * t350 * t374 - 0.37301894667277032942e3 * t148 * t357 * t365;
  t899 = t152 * t152;
  t947 = 0.18650947333638516471e3 * t350 * t378 + 0.67479019287920761457e5 * t70 / t899 * t79 * t882 * t883 * t363 * t75 - 0.67479019287920761458e5 * t358 * t882 * t883 * t363 - 0.32613657928929658794e2 * t155 * t368 * t373 + 0.11597416759527386667e2 * t350 * t369 - 0.20979693288682245748e4 * t358 * t871 * t364 + 0.65227315857859317589e2 * t155 * t158 * t382 * t161 - 0.65227315857859317589e1 * t339 * t369 - 0.11597416759527386667e1 * t147 * t153 * t79 * t162 + 0.32613657928929658794e1 * t339 * t374 + 0.20979693288682245748e3 * t69 * t356 * t79 * t365 - 0.10489846644341122874e3 * t339 * t378 + 0.20979693288682245748e4 * t358 * t361 * t439 * t372 - 0.10489846644341122874e4 * t155 * t361 * t372 * t160 * t75;
  t979 = -t742 - t745 - t749 + t753 - t758 - 0.93272072608964685102e-1 * t404 * t410 * t178 + 0.62181381739309790068e-1 * t64 * t407 * t178 * t765 + t770 + t773 + t838 + 0.31090690869654895034e-1 * t64 * (0.70312500000000000000e0 * t839 * t331 * t170 * t76 - 0.93750000000000000000e0 * t424 * t76 * t386 + 0.30153720415232644802e2 * t332 * t391 + 0.25000000000000000000e0 * t142 * (t896 + t947) * t76 - 0.24122976332186115842e2 * t387 * t391 - 0.24122976332186115842e2 * t171 * t372 * t72 * t75 + 0.77589064949761534708e3 * t171 * t362 * t399 * t75 - 0.32163968442914821122e2 * t88 * t875 * t175 + 0.31035625979904613884e4 * t394 * t399 * t160 * t75 - 0.33274296487458645777e5 * t88 * t883 / t359 / t62 * t75) * t180;
  r->d3fdrs3 = t740 + t979;
  r->d3fdz3 = 0;
  t981 = t658 * t66;
  t982 = t981 * t345;
  t984 = t79 * r->xt;
  t985 = t984 * t382;
  t994 = pow(t86, -0.35000000000000000000e1);
  t1006 = pow(t86, -0.37500000000000000000e1);
  r->d3fdxt3 = 0.67527207205260126361e-2 * t72 * t839 * t982 * t985 * t180 * t153 - 0.13319223291794902343e-1 * t660 * r->xt * t166 * t662 + 0.22509069068420042121e-2 * t72 * t994 * t982 * t985 * t410 * t77 - 0.26638446583589804686e-2 * t672 * t147 * t166 * t410 * r->xt + 0.30012092091226722828e-3 * t72 * t1006 * t981 * t345 * t984 * t382 * t765;
  r->d3fdxs3[0] = 0;
  r->d3fdxs3[1] = 0;
  r->d3fdxs3[2] = 0;
  r->d3fdxs3[3] = 0;
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
#define maple2c_func  XC(gga_c_scan_e0_func)
