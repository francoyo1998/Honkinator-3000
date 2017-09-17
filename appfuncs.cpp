#include "config.h"
#include <cstring>
#include <cstdlib>
#ifndef HAVE_UNISTD_H
#include <direct.h>
#define getcwd _getcwd
#else
#include <unistd.h>
#endif
#include <FL/Fl_File_Chooser.H>
static char* cpfw(const char* in)
{
	char* x1 = strdup(in);
	for(size_t idx = 0; idx < strlen(x1); idx++)
	{
		if(x1[idx] == ' ')x1[idx] = 0;
	}
	char* x2 = strdup(x1);
	free(x1);
	return x2;
}
int getfile(Fl_Input* in, char* pat, int type)
{
	char* fname = cpfw(in->label());
	char* fch_pat = (char*)malloc(strlen(fname)+strlen(" Files (*")+strlen(pat)+strlen(")")+3);
	strcpy(fch_pat,fname);
	strcat(fch_pat," Files (*");
	strcat(fch_pat,pat);
	strcat(fch_pat,")");
	free(fname);
	char* checkdr = getcwd(NULL,0);
	in->value(fl_file_chooser(in->label(),fch_pat,checkdr,0));
	in->redraw();
	free(checkdr);
	free(fch_pat);
	return 0;
}
