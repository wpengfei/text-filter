/Users/wpf/Desktop/log/test/linux-2.6.9/arch/um/kernel/signal_kern.c
int sys_sigaction(int sig, const struct old_sigaction __user *act,
{
get_user(new_ka.sa.sa_handler, &act->sa_handler) ||
get_user(new_ka.sa.sa_restorer, &act->sa_restorer))
get_user(new_ka.sa.sa_flags, &act->sa_flags);
get_user(mask, &act->sa_mask);
}
int sys_sigreturn(struct pt_regs regs)
{
copy_from_user(&current->blocked.sig[0], sc_sigmask(sc), 
copy_from_user(&current->blocked.sig[1], mask, sig_size);
}
