/Users/wpf/Desktop/log/test/linux-2.6.9/arch/arm26/nwfpe/fpa11_cpdt.c

void loadMultiple(const unsigned int Fn,const unsigned int *pMem)
{
get_user(p[0], &pMem[2]);  /* Single */
get_user(p[1], &pMem[2]);
get_user(p[1], &pMem[1]);  /* double msw */
get_user(p[2], &pMem[1]);  /* msw */
}
