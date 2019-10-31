#include "gd.h"
#include "gdtest.h"

int main()
{
	gdImagePtr im;
	im = gdImageCreate(64, 64);
	int white;

	gdImageColorAllocate(im, 0, 0, 0);
	white = gdImageColorAllocate(im, 255, 255, 255);
	gdImageDashedLine(im, 0, 0, 64, 64, white);

	if(gdAssertImageEqualsToFile("gd/test.png",im))
	{
		return 1;
	}
	gdImageDestroy(im);
	return 0;
}
