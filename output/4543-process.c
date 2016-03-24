/Users/wpf/Desktop/log/test/linux-2.6.9/arch/sparc64/kernel/process.c
static unsigned long clone_stackframe(unsigned long csp, unsigned long psp)
{
get_user(fp, &(((struct reg_window __user *)psp)->ins[6]));
get_user(fp, &(((struct reg_window32 __user *)psp)->ins[6]));
}
