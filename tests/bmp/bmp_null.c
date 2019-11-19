#include "gd.h"
#include "gdtest.h"

int main()
{	
	gdImagePtr im, imc;
	FILE *inFile;
	inFile = gdTestFileOpen2("bmp", "bug00450.bmp");
	
	im = gdImageCreateFromBmp(NULL);
	imc = gdImageCreateFromBmp(inFile);
	if (im != NULL) {
		gdImageDestroy(im);
		return 1;
	}
	gdImageBmp(im, NULL, 0); /* noop safely */
	
	gdImageDestroy(imc);
	return 0;
}
