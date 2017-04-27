/* No floating-point inline functions in rtld and for the conform tests.  */
#define IS_IN(lib) (IN_MODULE == MODULE_##lib)

#ifdef _ISOMAC
# include <stdlib/bits/stdlib-float.h>
#else
#if !IS_IN (rtld)
#  include <stdlib/bits/stdlib-float.h>
#endif
#endif
