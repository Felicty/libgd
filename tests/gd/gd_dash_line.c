#include "gd.h"
int main()
{
	gdImagePtr im;

	im = gdImageCreate(64,64);
	int white;
	int black;
	black = gdImageColorAllocate(im, 0, 0, 0);
	white = gdImageColorAllocate(im, 255, 255, 255);

	gdImageDashedLine(im, 0, 0, 63, 63, white);
	return gdNumFailures();
}