// $Id: dwt.h,v 1.1 2001/02/13 01:06:24 giles Exp $
//
// $Log: dwt.h,v $
// Revision 1.1  2001/02/13 01:06:24  giles
// Initial revision
//

// Coefficients for Daubechies 4 element DWT
#define C0  0.4829629131445341
#define C1  0.8365163037378079
#define C2  0.2241438680420134
#define C3 -0.1294095225512604

#include <stdint.h>

// Function declarations
void zdaub4(float a[], uint32_t n, int isign);
void dwt(float a[], uint32_t dim[], int ndim, int isign);


