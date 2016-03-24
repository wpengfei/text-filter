/Users/wpf/Desktop/log/test/linux-2.6.9/arch/cris/arch-v10/kernel/signal.c
int 
{
get_user(new_ka.sa.sa_handler, &act->sa_handler) ||
get_user(new_ka.sa.sa_restorer, &act->sa_restorer))
get_user(new_ka.sa.sa_flags, &act->sa_flags);
get_user(mask, &act->sa_mask);
}
static int
{
copy_from_user(regs, sc, sizeof(struct pt_regs)))
get_user(old_usp, &sc->usp);
}
asmlinkage int sys_sigreturn(long r10, long r11, long r12, long r13, long mof, 
{
get_user(set.sig[0], &frame->sc.oldmask)
copy_from_user(&set.sig[1], frame->extramask,
}	
asmlinkage int sys_rt_sigreturn(long r10, long r11, long r12, long r13, 
{
copy_from_user(&set, &frame->uc.uc_sigmask, sizeof(set)))
copy_from_user(&st, &frame->uc.uc_stack, sizeof(st)))
}	
