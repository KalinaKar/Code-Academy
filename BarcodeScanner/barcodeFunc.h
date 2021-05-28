#ifndef BARCODEFUNC_H_
#define BARCODEFUNC_H_

#include "tryFunc.h"

/* checks if code is reversed and if yes, reverses it into correct order,
    returns Barcode_too_short error, if it less than 5 symbols, 
    otherwise returns success */
int reverseCheck(t_barcode *barcode);

/* cuts the start/stop sequences from both sides,
    returns Barcode_no_edge_sequence, if not scanned correctly,
    otherwise returns success */
int cutEdges(t_barcode *barcode);

/* validates the C constant by formula,
    returns true if it matches or false if not */
int checkC(t_barcode *barcode);

/* validates the K constant by formula,
    returns true if it matches or false if not */
int checkK(t_barcode *barcode);


#endif /* BARCODEFUNC_H_ */