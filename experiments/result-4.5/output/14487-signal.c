/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/mips/kernel/signal.c
static int copy_fp_from_sigcontext(void __user *sc)
{
get_user(fpr_val, &fpregs[i]);
get_user(current->thread.fpu.fcr31, csr);
}
static int restore_msa_extcontext(void __user *buf, unsigned int size)
{
get_user(csr, &msa->csr);
get_user(val, &msa->wr[i]);
}
static int restore_extcontext(void __user *buf)
{
get_user(ext.magic, (unsigned int *)buf);
get_user(ext.size, (unsigned int *)(buf
}
int protected_restore_fp_context(void __user *sc)
{
get_user(used, used_math);
get_user(tmp, &fpregs[0]) |
get_user(tmp, &fpregs[31]) |
get_user(tmp, csr);
}
int restore_sigcontext(struct pt_regs *regs, struct sigcontext __user *sc)
{
get_user(regs->cp0_epc, &sc->sc_pc);
get_user(regs->acx, &sc->sc_acx);
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
