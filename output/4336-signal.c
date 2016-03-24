/Users/wpf/Desktop/log/test/linux-2.6.9/arch/sh64/kernel/signal.c
asmlinkage int
{
get_user(new_ka.sa.sa_handler, &act->sa_handler) ||
get_user(new_ka.sa.sa_restorer, &act->sa_restorer))
get_user(new_ka.sa.sa_flags, &act->sa_flags);
get_user(mask, &act->sa_mask);
}
static inline int
{
get_user (fpvalid, &sc->sc_fpvalid);
copy_from_user(&current->thread.fpu.hard, &sc->sc_fpregs[0],
}
static inline int
{
get_user(new_sr, &sc->sc_sr);
get_user(*r2_p, &sc->sc_regs[REG_RET]);
}
asmlinkage int sys_sigreturn(unsigned long r2, unsigned long r3,
{
get_user(set.sig[0], &frame->sc.oldmask)
copy_from_user(&set.sig[1], &frame->extramask,
}
asmlinkage int sys_rt_sigreturn(unsigned long r2, unsigned long r3,
{
copy_from_user(&set, &frame->uc.uc_sigmask, sizeof(set)))
copy_from_user(&st, &frame->uc.uc_stack, sizeof(st)))
}
