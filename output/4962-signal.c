/Users/wpf/Desktop/log/test/linux-2.6.9/arch/v850/kernel/signal.c
asmlinkage int 
{
get_user(new_ka.sa.sa_handler, &act->sa_handler) ||
get_user(new_ka.sa.sa_restorer, &act->sa_restorer))
get_user(new_ka.sa.sa_flags, &act->sa_flags);
get_user(mask, &act->sa_mask);
}
asmlinkage int sys_sigreturn(struct pt_regs *regs)
{
get_user(set.sig[0], &frame->sc.oldmask)
copy_from_user(&set.sig[1], &frame->extramask,
}
asmlinkage int sys_rt_sigreturn(struct pt_regs *regs)
{
copy_from_user(&set, &frame->uc.uc_sigmask, sizeof(set)))
copy_from_user(&st, &frame->uc.uc_stack, sizeof(st)))
}	
