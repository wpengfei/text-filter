/Users/wpf/Desktop/log/test/linux-2.6.9/arch/parisc/kernel/signal.c
asmlinkage int
{
copy_from_user(&newset32, (compat_sigset_t *)unewset, sizeof(newset32)))
copy_from_user(&newset, unewset, sizeof(newset)))
}
static long
{
copy_from_user(regs->gr, sc->sc_gr, sizeof(regs->gr));
copy_from_user(regs->fr, sc->sc_fr, sizeof(regs->fr));
copy_from_user(regs->iaoq, sc->sc_iaoq, sizeof(regs->iaoq));
copy_from_user(regs->iasq, sc->sc_iasq, sizeof(regs->iasq));
get_user(regs->sar, &sc->sc_sar);
}
void
{
copy_from_user(&compat_set, &compat_frame->uc.uc_sigmask, sizeof(compat_set)))
copy_from_user(&set, &frame->uc.uc_sigmask, sizeof(set)))
}
static long
{
copy_from_user(&fdesc, ufdesc, sizeof(fdesc));
copy_from_user(&fdesc, ufdesc, sizeof(fdesc));
}
