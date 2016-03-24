/Users/wpf/Desktop/log/test/linux-2.6.9/arch/s390/kernel/compat_signal.c
int copy_siginfo_from_user32(siginfo_t *to, siginfo_t32 __user *from)
{
get_user(to->si_signo, &from->si_signo);
get_user(to->si_errno, &from->si_errno);
get_user(to->si_code, &from->si_code);
copy_from_user(&to->_sifields._pad, &from->_sifields._pad, SI_PAD_SIZE);
get_user(to->si_int, &from->si_int);
get_user(to->si_pid, &from->si_pid);
get_user(to->si_uid, &from->si_uid);
get_user(to->si_pid, &from->si_pid);
get_user(to->si_uid, &from->si_uid);
get_user(to->si_utime, &from->si_utime);
get_user(to->si_stime, &from->si_stime);
get_user(to->si_status, &from->si_status);
get_user(tmp, &from->si_addr);
get_user(to->si_band, &from->si_band);
get_user(to->si_fd, &from->si_fd);
}
asmlinkage long
{
get_user(sa_handler, &act->sa_handler) ||
get_user(sa_restorer, &act->sa_restorer))
get_user(new_ka.sa.sa_flags, &act->sa_flags);
get_user(mask, &act->sa_mask);
}
asmlinkage long
{
get_user(sa_handler, &act->sa_handler);
copy_from_user(&set32, &act->sa_mask,
get_user(new_ka.sa.sa_flags, &act->sa_flags);
}
asmlinkage long
{
get_user(ss_sp, &uss->ss_sp);
get_user(kss.ss_size, &uss->ss_size);
get_user(kss.ss_flags, &uss->ss_flags);
}
static int restore_sigregs32(struct pt_regs *regs,_sigregs32 __user *sregs)
{
copy_from_user(&regs32, &sregs->regs, sizeof(regs32));
copy_from_user(&current->thread.fp_regs, &sregs->fpregs,
}
asmlinkage long sys32_rt_sigreturn(struct pt_regs *regs)
{
copy_from_user(&set, &frame->uc.uc_sigmask, sizeof(set)))
get_user(ss_sp, &frame->uc.uc_stack.ss_sp);
get_user(st.ss_size, &frame->uc.uc_stack.ss_size);
get_user(st.ss_flags, &frame->uc.uc_stack.ss_flags);
}	
