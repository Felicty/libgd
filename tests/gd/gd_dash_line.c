#include "gd.h"
#include "gdtest.h"

int main()
{
	gdImagePtr im;
	im = gdImageCreate(64,64);
	int white;
	FILE *pngout;

	gdImageColorAllocate(im, 0, 0, 0);
	white = gdImageColorAllocate(im, 255, 255, 255);
	gdImageDashedLine(im, 0, 64, 64, 0, white);
	pngout = fopen("gd/test.png", "wb");

	gdImagePng(im, pngout);
	fclose(pngout);
	gdImageDestroy(im);
	return 0;
}
