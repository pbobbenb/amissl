/*
 * $Id: string_headers.h,v 1.7 2006-01-08 12:04:26 obarthel Exp $
 *
 * :ts=4
 *
 * Portable ISO 'C' (1994) runtime library for the Amiga computer
 * Copyright (c) 2002-2015 by Olaf Barthel <obarthel (at) gmx.net>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *   - Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *
 *   - Neither the name of Olaf Barthel nor the names of contributors
 *     may be used to endorse or promote products derived from this
 *     software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _STRING_HEADERS_H
#define _STRING_HEADERS_H

/****************************************************************************/

#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <locale.h>
#include <errno.h>
#include <ctype.h>
#include <dos.h>

/****************************************************************************/

#include "libcmt.h"

/****************************************************************************/

/* Address is neither aligned to a word or long word boundary. */
#define IS_UNALIGNED(a) ((((unsigned long)(a)) & 1) != 0)

/* Address is aligned to a word boundary, but not to a long
   word boundary. */
#define IS_SHORT_ALIGNED(a) ((((unsigned long)(a)) & 3) == 2)

/* Address is aligned to a long word boundary. For an 68030 and beyond the
   alignment does not matter. */
#if defined(M68020)
#define IS_LONG_ALIGNED(a) (1)
#else
#define IS_LONG_ALIGNED(a) ((((unsigned long)(a)) & 3) == 0)
#endif /* M68020 */

/****************************************************************************/

#endif /* _STRING_HEADERS_H */
