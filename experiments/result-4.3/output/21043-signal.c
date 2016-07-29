/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/xtensa/kernel/signal.c
static int
{
get_user(ps, &sc->sc_ps);
copy_from_user(regs->areg, sc->sc_a, 16 * 4);
case they are still enabled.  We disable them to force a
copy_from_user(&ti->xtregs_cp, &frame->xtregs.cp,
copy_from_user(&ti->xtregs_user, &frame->xtregs.user,
copy_from_user(&regs->xtregs_opt, &frame->xtregs.opt,
}
