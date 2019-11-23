#include "gd.h"
#include <stdio.h>
#include <stdlib.h>
#ifndef _WIN32
# include <unistd.h>
#endif
#include "gdtest.h"

int main()
{
	gdImagePtr im;
	FILE *fp1, fp2;

	im = gdImageCreateTrueColor(20, 20);
	if (!im) {
		return 0;
	}

	fp1 = gdTestTempFp();
	fp2 = gdTestTempFp();
	gdImageWebp(im, fp1);
	gdImageWebpEx(im, fp2);
	
	fclose(fp1);
	fclose(fp2);
	
	gdImageDestroy(im);
	return 0;
}
