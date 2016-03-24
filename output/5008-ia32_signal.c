/Users/wpf/Desktop/log/test/linux-2.6.9/arch/x86_64/ia32/ia32_signal.c
int ia32_copy_siginfo_from_user(siginfo_t *to, siginfo_t32 __user *from)
{
get_user(to->si_signo, &from->si_signo);
get_user(to->si_errno, &from->si_errno);
get_user(to->si_code, &from->si_code);
get_user(to->si_pid, &from->si_pid);
get_user(to->si_uid, &from->si_uid);
get_user(ptr32, &from->si_ptr);
}
asmlinkage long
{
get_user(ptr, &uss_ptr->ss_sp) ||
get_user(uss.ss_flags, &uss_ptr->ss_flags) ||
get_user(uss.ss_size, &uss_ptr->ss_size))
}
asmlinkage long sys32_sigreturn(struct pt_regs *regs)
{
get_user(set.sig[0], &frame->sc.oldmask)
copy_from_user((((char *) &set.sig) + 4), &frame->extramask,
}	
