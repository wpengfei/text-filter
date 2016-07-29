/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/mn10300/kernel/signal.c
static int restore_sigcontext(struct pt_regs *regs,
{
get_user(tmpflags, &sc->epsw);
get_user(buf, &sc->fpucontext);
get_user(*_d0, &sc->d0);
}
asmlinkage long sys_sigreturn(void)
{
get_user(set.sig[0], &frame->sc.oldmask))
copy_from_user(&set.sig[1], &frame->extramask,
}
