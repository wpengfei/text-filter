/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/x86/ia32/ia32_signal.c
static int ia32_restore_sigcontext(struct pt_regs *regs,
{
get_user_try {
case.
get_user_ex(tmpflags, &sc->flags);
get_user_ex(tmp, &sc->fpstate);
get_user_catch(err);
}
asmlinkage long sys32_sigreturn(void)
{
get_user(set.sig[0], &frame->sc.oldmask)
copy_from_user((((char *) &set.sig) + 4),
}
static int ia32_setup_sigcontext(struct sigcontext_32 __user *sc,
{
get_user_seg(gs), (unsigned int __user *)&sc->gs);
get_user_seg(fs), (unsigned int __user *)&sc->fs);
get_user_seg(ds), (unsigned int __user *)&sc->ds);
get_user_seg(es), (unsigned int __user *)&sc->es);
}
