/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/sparc/kernel/process_64.c
static unsigned long clone_stackframe(unsigned long csp, unsigned long psp)
{
get_user(fp, &(((struct reg_window __user *)psp)->ins[6]));
get_user(fp, &(((struct reg_window32 __user *)psp)->ins[6]));
}
