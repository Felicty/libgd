#include "gd.h"

int main()
{
	gdImagePtr im;
	double m[6];
	float angle = 180.0;
	
	im = gdImageCreateFromBmp(NULL);
	if (im != NULL) {
		gdImageDestroy(im);
		return 1;
	}
	gdAffineShearHorizontal(m, angle);
	gdImageBmp(im, NULL, 0); /* noop safely */
	return 0;
}
