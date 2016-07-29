/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/cris/arch-v10/kernel/signal.c
static int
{
copy_from_user(regs, sc, sizeof(struct pt_regs)))
get_user(old_usp, &sc->usp);
}
asmlinkage int sys_sigreturn(void)
{
get_user(set.sig[0], &frame->sc.oldmask)
copy_from_user(&set.sig[1], frame->extramask,
}
