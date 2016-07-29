/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/x86/um/signal.c
static int convert_fxsr_from_user(struct user_fxsr_struct *fxsave,
{
copy_from_user( env, buf, 7 * sizeof(long)))
get_user(*t, f) ||
get_user(*(t + 1), f + 1) ||
get_user(to->exponent, &from->exponent))
}
static int copy_sc_from_user(struct pt_regs *regs,
{
copy_from_user(&sc, from, sizeof(sc));
copy_from_user(&fpx,
copy_from_user(&fp, sc.fpstate,
}
