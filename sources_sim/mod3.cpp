#include <ap_int.h>
#include "spbits.h"
#include <iostream>
#include "best_track.h"
using namespace std;
ap_uint<4> best_track::mod3 (ap_uint<4> input)
{
#pragma HLS PIPELINE II=1
#pragma HLS INTERFACE ap_ctrl_none port=return
#pragma HLS INLINE

	//if(a>3)
	ap_uint<1> a,b,c,d;
	a=input[3];
	b=input[2];
	c=input[1];
	d=input[0];

ap_uint<1> one,zero,two;

zero= (~a & ~b & ~c & ~d) | (~a & ~b & c & d) | (~a & b & c & ~d) | (a & ~b & ~c & d) | (a & b & ~c & ~d) | (a & b & c & d);
one= (~a & ~b & ~c & d) | (~a & b & ~c & ~d) | (~a & b & c & d) | (a & ~b & c & ~d) | (a & b & ~c & d);
two= (~a & ~b & c & ~d) | (~a & b & ~c & d) | (a & ~b & ~c & ~d) | (a & ~b & c & d) | (a & b & c & ~d);


return (ap_uint<2>(0),two,one);

}





