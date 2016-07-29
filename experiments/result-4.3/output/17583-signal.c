/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/score/kernel/signal.c
static int restore_sigcontext(struct pt_regs *regs, struct sigcontext __user *sc)
{
get_user(regs->cp0_epc, &sc->sc_pc);
get_user(regs->cp0_condition, &sc->sc_condition);
get_user(reg, &sc->sc_mdceh);
get_user(reg, &sc->sc_mdcel);
get_user(reg, &sc->sc_psr);
get_user(reg, &sc->sc_ecr);
get_user(reg, &sc->sc_ema);
get_user(reg, &sc->sc_regs[i]);	\
}
