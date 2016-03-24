/Users/wpf/Desktop/log/test/linux-2.6.9/arch/arm/nwfpe/fpa11_cpdt.c

static inline void loadDouble(const unsigned int Fn, const unsigned int __user *pMem)
{
get_user(p[0], &pMem[0]);	/* sign & exponent */
get_user(p[1], &pMem[0]);	/* sign & exponent */
get_user(p[1], &pMem[1]);
get_user(p[0], &pMem[1]);
}
static inline void loadMultiple(const unsigned int Fn, const unsigned int __user *pMem)
{
get_user(p[0], &pMem[2]);	/* Single */
get_user(p[1], &pMem[2]);
get_user(p[1], &pMem[1]);	/* double msw */
get_user(p[2], &pMem[1]);	/* msw */
}
