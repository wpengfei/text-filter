/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/sh/kernel/signal_32.c
static int
{
get_user (owned_fp, &sc->sc_ownedfp);
get_user(*r0_p, &sc->sc_regs[0]);
}
asmlinkage int sys_sigreturn(void)
{
get_user(set.sig[0], &frame->sc.oldmask)
copy_from_user(&set.sig[1], &frame->extramask,
}
static int setup_frame(struct ksignal *ksig, sigset_t *set,
{
get_user(regs->pc, &funcptr->text);
get_user(regs->regs[12], &funcptr->GOT);
}
static int setup_rt_frame(struct ksignal *ksig, sigset_t *set,
{
get_user(regs->pc, &funcptr->text);
get_user(regs->regs[12], &funcptr->GOT);
}
