#ifndef CMSSW_MACRO
 #include <ap_int.h>
#else
#include "../include/ap_int.h"
#endif

#include "../interface/spbits.h"
#include "../interface/primitive.h"

void primitive11::mem11(ap_uint<13> r_in,
		ap_uint<1> we,
		ap_uint<bw_addr> addr,
		ap_uint<2> sel,
		const int station,
		const int cscid,
		ap_uint<1> endcap
		)

{
#pragma HLS INTERFACE ap_ctrl_none port=return
#pragma HLS INLINE off
#pragma HLS PIPELINE II=1



	ap_uint<12> temp;


	if(sel==0 && we==1)
		params[addr]=r_in;

		// programmable parameters
		// [0] = ph_init_b
		// [1] = ph_displacement_b
		// [2] = ph_init_a
		// [3] = ph_displacement_a
		// [4] = th_init
		// [5] = th_displacement

	if(sel==1 && we==1)
		th_mem[addr]=r_in;

	if(sel==2 && we==1)
		th_corr_mem[addr]=r_in;



}



