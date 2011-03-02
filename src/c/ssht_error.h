/*! \file ssht_error.h
 *  Error macros used in SSHT package.
 *
 * \author <a href="http://www.jasonmcewen.org">Jason McEwen</a>
 */

#ifndef SSHT_ERROR
#define SSHT_ERROR


#include <stdio.h>


#define SSHT_ERROR_GENERIC(comment) 					\
  printf("ERROR: %s.\n", comment);					\
  printf("ERROR: %s <%s> %s %s %s %d.\n",				\
	 "Occurred in function",					\
	   __PRETTY_FUNCTION__,						\
	   "of file", __FILE__,						\
	   "on line", __LINE__);					\
  exit(1);

#define SSHT_ERROR_MEM_ALLOC_CHECK(pointer)				\
  if(pointer == NULL) {							\
    SSHT_ERROR_GENERIC("Memory allocation failed")			\
  }


#endif
