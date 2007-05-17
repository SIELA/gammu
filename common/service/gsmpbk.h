/* (c) 2001-2005 by Marcin Wiacek and Michal Cihar */

#ifndef __gsm_pbk_h
#define __gsm_pbk_h

#include <stdlib.h>

#include "../gsmcomon.h"
#include "gsmmisc.h"
#include "../misc/coding/coding.h"


typedef enum {
	Nokia_VCard10 = 1,
	Nokia_VCard21,
	SonyEricsson_VCard10,
	SonyEricsson_VCard21
} GSM_VCardVersion;

void GSM_TweakInternationalNumber(unsigned char *Number, const GSM_NumberType numType);

void GSM_PhonebookFindDefaultNameNumberGroup(GSM_MemoryEntry *entry, int *Name, int *Number, int *Group);

void      GSM_EncodeVCARD(char *Buffer, int *Length, GSM_MemoryEntry *pbk, bool header, GSM_VCardVersion Version);
GSM_Error GSM_DecodeVCARD(unsigned char *Buffer, int *Pos, GSM_MemoryEntry *Pbk, GSM_VCardVersion Version);


#endif

/* How should editor hadle tabs in this file? Add editor commands here.
 * vim: noexpandtab sw=8 ts=8 sts=8:
 */
