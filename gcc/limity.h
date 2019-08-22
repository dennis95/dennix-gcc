/* This administrivia gets added to the end of limits.h
   if the system has its own version of limits.h.  */

#else /* not _GCC_LIMITS_H_ */

#ifdef _GCC_NEXT_LIMITS_H
/* Only include the system <limits.h> if it exists. This is needed for
   backwards compatibility.
   TODO: Remove this when it is no longer needed. */
#if __has_include_next(<limits.h>)
#include_next <limits.h>		/* recurse down to the real one */
#endif
#endif

#endif /* not _GCC_LIMITS_H_ */
