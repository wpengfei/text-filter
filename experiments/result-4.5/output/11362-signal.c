/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/hexagon/kernel/signal.c
static int restore_sigcontext(struct pt_regs *regs,
{
copy_from_user(&regs->r00, &sc->sc_regs.r0,
get_user(regs->sa0, &sc->sc_regs.sa0);
get_user(regs->lc0, &sc->sc_regs.lc0);
get_user(regs->sa1, &sc->sc_regs.sa1);
get_user(regs->lc1, &sc->sc_regs.lc1);
get_user(regs->m0, &sc->sc_regs.m0);
get_user(regs->m1, &sc->sc_regs.m1);
get_user(regs->usr, &sc->sc_regs.usr);
get_user(regs->preds, &sc->sc_regs.p3_0);
get_user(regs->gp, &sc->sc_regs.gp);
get_user(regs->ugp, &sc->sc_regs.ugp);
get_user(regs->cs0, &sc->sc_regs.cs0);
get_user(regs->cs1, &sc->sc_regs.cs1);
get_user(tmp, &sc->sc_regs.pc); pt_set_elr(regs, tmp);
}
