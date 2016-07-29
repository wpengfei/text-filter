/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/mips/kernel/signal32.c
static int restore_sigcontext32(struct pt_regs *regs,
{
get_user(regs->cp0_epc, &sc->sc_pc);
get_user(regs->hi, &sc->sc_mdhi);
get_user(regs->lo, &sc->sc_mdlo);
get_user(treg, &sc->sc_hi1); mthi1(treg);
get_user(treg, &sc->sc_lo1); mtlo1(treg);
get_user(treg, &sc->sc_hi2); mthi2(treg);
get_user(treg, &sc->sc_lo2); mtlo2(treg);
get_user(treg, &sc->sc_hi3); mthi3(treg);
get_user(treg, &sc->sc_lo3); mtlo3(treg);
get_user(treg, &sc->sc_dsp); wrdsp(treg, DSP_MASK);
get_user(regs->regs[i], &sc->sc_regs[i]);
}
int copy_siginfo_from_user32(siginfo_t *to, compat_siginfo_t __user *from)
{
copy_from_user(to, from, 3*sizeof(int)) ||
copy_from_user(to->_sifields._pad,
}
