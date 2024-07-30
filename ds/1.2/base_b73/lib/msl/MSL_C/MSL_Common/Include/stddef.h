/* Metrowerks Standard Library
 * Copyright � 1995-2004 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2004/01/26 22:03:05 $
 * $Revision: 1.20.4.1 $
 */
 
#ifndef _MSL_STDDEF_H
#define _MSL_STDDEF_H

#include <ansi_parms.h>

#if !_MSL_USING_MW_C_HEADERS
	#error You must have the non-MSL C header file access path before the MSL access path
#else

#include <cstddef>

#if defined(__cplusplus) && defined(_MSL_USING_NAMESPACE)
	using std::ptrdiff_t;
	using std::size_t;
#endif

#endif /* _MSL_USING_MW_C_HEADERS */

#endif /* _MSL_STDDEF_H */

/* Change record:
 * hh  971206 Created.
 * hh  990928 fixed "using bug"
 * JWW 001208 Added case for targeting Mach-O
 * JWW 011027 Use _MSL_USING_MW_C_HEADERS as generic header test instead of specific Mach-O test
 */