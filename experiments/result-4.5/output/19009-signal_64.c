/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/sh/kernel/signal_64.c
static inline int
{
get_user (fpvalid, &sc->sc_fpvalid);
copy_from_user(&current->thread.xstate->hardfpu, &sc->sc_fpregs[0],
}
static int
{
get_user(new_sr, &sc->sc_sr);
case it sets regs->sr.fd (i.e. after rest of sr
get_user(*r2_p, &sc->sc_regs[REG_RET]);
}
asmlinkage int sys_sigreturn(unsigned long r2, unsigned long r3,
{
get_user(set.sig[0], &frame->sc.oldmask)
copy_from_user(&set.sig[1], &frame->extramask,
}
