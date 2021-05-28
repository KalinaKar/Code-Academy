#ifndef TRYFUNC_H_
#define TRYFUNC_H_

#include "barcodeLib.h"

/* calls the function and prints the exit status in the log file */
void tryFunc(int (*func)(t_barcode *barcode),t_barcode *barcode,char *name);

/* opens log file with date and time stamp */
void initLogFile(void);

/* closes log file with date and time stamp */
void deInitLogFile(void);

#endif /* TRYFUNC_H_ */