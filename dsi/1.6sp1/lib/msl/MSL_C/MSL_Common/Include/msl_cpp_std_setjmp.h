/* MSL
 * Copyright � 1995-2007 Freescale Corporation.  All rights reserved.
 *
 * $Date: 2007/01/29 18:12:15 $
 * $Revision: 1.5 $
 */

#ifndef _MSL_CPP_STD_SETJMP_H
#define _MSL_CPP_STD_SETJMP_H

#ifdef __cplusplus

namespace std {

	using ::jmp_buf;
	using ::longjmp;

} /* namespace std */

#endif /* __cplusplus */

#endif /* _MSL_CPP_STD_SETJMP_H */

/* Change record:
 * JWW 050128 Put C items into the std namespace
 */