#include <ap_int.h>
#include "spbits.h"


class extend {

public:

	 ap_uint<ph_raw_w>	 temp1, temp2;
	void extender(   ap_uint<ph_raw_w> inp,
				  ap_uint<ph_raw_w>	*outp,
				ap_uint<3> drifttime);

};
