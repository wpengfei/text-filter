/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/openrisc/kernel/signal.c
static int restore_sigcontext(struct pt_regs *regs,
{
copy_from_user(regs, sc->regs.gpr, 32 * sizeof(unsigned long));
copy_from_user(&regs->pc, &sc->regs.pc, sizeof(unsigned long));
copy_from_user(&regs->sr, &sc->regs.sr, sizeof(unsigned long));
}
