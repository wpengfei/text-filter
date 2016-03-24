/Users/wpf/Desktop/log/test/linux-2.6.9/arch/mips/kernel/irixsig.c
asmlinkage void
{
get_user(regs->cp0_epc, &context->pc);
get_user(regs->regs[i], &context->regs[i]);
get_user(regs->hi, &context->hi);
get_user(regs->lo, &context->lo);
get_user(current->thread.fpu.hard.fcr31, &context->fpcsr);
copy_from_user(&blocked, &context->sigset, sizeof(blocked)))
}
asmlinkage int
{
get_user(new_ka.sa.sa_handler, &act->sa_handler) ||
get_user(new_ka.sa.sa_flags, &act->sa_flags))
copy_from_user(&mask, &act->sa_mask, sizeof(sigset_t));
}
