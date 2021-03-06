#include <ap_int.h>
#include "spbits.h"
#include "extender.h"
void extend::extender(   ap_uint<ph_raw_w> inp,
			  ap_uint<ph_raw_w>	*outp,
			  ap_uint<3> drifttime){

#pragma HLS INTERFACE ap_stable port=inp  //This directive optimizes unnecessary registers
#pragma HLS INTERFACE ap_ctrl_none port=return
#pragma HLS INLINE off
#pragma HLS PIPELINE II=1

volatile ap_uint<ph_raw_w> d[2];
 ap_uint<ph_raw_w> temp;

//d[1]=temp2;
temp=inp;
temp= ap_uint<ph_raw_w>(temp) | ap_uint<ph_raw_w>(temp1) | temp2;
//d[0]=temp1;
//d[1]=d[0];
//d[0]=temp1;
temp2=temp1;
temp1=inp;
*outp=temp;


}
