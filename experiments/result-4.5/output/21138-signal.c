/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/x86/kernel/signal.c
int restore_sigcontext(struct pt_regs *regs, struct sigcontext __user *sc)
{
get_user_try {
get_user_ex(tmpflags, &sc->flags);
get_user_ex(buf_val, &sc->fpstate);
get_user_catch(err);
}
asmlinkage unsigned long sys_sigreturn(void)
{
get_user(set.sig[0], &frame->sc.oldmask) || (_NSIG_WORDS > 1
copy_from_user(&set.sig[1], &frame->extramask,
}
