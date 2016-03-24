/Users/wpf/Desktop/log/test/linux-2.6.9/arch/mips/kernel/signal.c
asmlinkage int sys_sigaction(int sig, const struct sigaction *act,
{
get_user(new_ka.sa.sa_handler, &act->sa_handler);
get_user(new_ka.sa.sa_flags, &act->sa_flags);
get_user(mask, &act->sa_mask.sig[0]);
}
asmlinkage int restore_sigcontext(struct pt_regs *regs, struct sigcontext *sc)
{
get_user(regs->cp0_epc, &sc->sc_pc);
get_user(regs->hi, &sc->sc_mdhi);
get_user(regs->lo, &sc->sc_mdlo);
get_user(regs->regs[i], &sc->sc_regs[i]);		\
} while(0)
asmlinkage void sys_rt_sigreturn(nabi_no_regargs struct pt_regs regs)
{
copy_from_user(&set, &frame->rs_uc.uc_sigmask, sizeof(set)))
copy_from_user(&st, &frame->rs_uc.uc_stack, sizeof(st)))
}
