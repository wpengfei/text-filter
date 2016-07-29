/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/arm/nwfpe/fpa11_cpdt.c
static inline void loadDouble(const unsigned int Fn, const unsigned int __user *pMem)
{
get_user(p[0], &pMem[0]);	/* sign & exponent */
get_user(p[1], &pMem[1]);
get_user(p[0], &pMem[1]);
get_user(p[1], &pMem[0]);	/* sign & exponent */
}
static inline void loadExtended(const unsigned int Fn, const unsigned int __user *pMem)
{
get_user(p[0], &pMem[0]);	/* sign & exponent */
get_user(p[1], &pMem[1]);	/* ms bits */
get_user(p[2], &pMem[2]);	/* ls bits */
get_user(p[1], &pMem[2]);	/* ls bits */
get_user(p[2], &pMem[1]);	/* ms bits */
}
static inline void loadMultiple(const unsigned int Fn, const unsigned int __user *pMem)
{
get_user(x, &pMem[0]);
case typeDouble:
get_user(p[0], &pMem[2]);	/* Single */
get_user(p[1], &pMem[1]);	/* double msw */
case typeExtended:
get_user(p[1], &pMem[2]);
get_user(p[2], &pMem[1]);	/* msw */
}
