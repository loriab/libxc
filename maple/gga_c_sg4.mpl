(* type: work_gga_c *)

params_a_beta  := 0:
params_a_alpha := 0.8:
$include "gga_c_zpbeint.mpl"

(* parameters for beta of SG4, b0 = 3 mu^MGE2/pi^2, mu^MGE2 = 0.26 *)
sg4_b0    := 3*0.262/Pi^2:
sg4_sigma := 0.07:

(* we redefine beta here *)
mbeta := (rs, t) -> sg4_b0 + sg4_sigma*t*(1 - exp(-rs^2)):