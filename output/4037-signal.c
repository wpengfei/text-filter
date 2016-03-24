/Users/wpf/Desktop/log/test/linux-2.6.9/arch/s390/kernel/signal.c
asmlinkage long
{
get_user(new_ka.sa.sa_handler, &act->sa_handler) ||
get_user(new_ka.sa.sa_restorer, &act->sa_restorer))
get_user(new_ka.sa.sa_flags, &act->sa_flags);
get_user(mask, &act->sa_mask);
}
static int restore_sigregs(struct pt_regs *regs, _sigregs __user *sregs)
{
copy_from_user(&regs->psw, &sregs->regs.psw,
copy_from_user(&current->thread.acrs, &sregs->regs.acrs,
copy_from_user(&current->thread.fp_regs, &sregs->fpregs,
}
