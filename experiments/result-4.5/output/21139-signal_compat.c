/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/x86/kernel/signal_compat.c
int copy_siginfo_from_user32(siginfo_t *to, compat_siginfo_t __user *from)
{
get_user_try {
get_user_ex(to->si_signo, &from->si_signo);
get_user_ex(to->si_errno, &from->si_errno);
get_user_ex(to->si_code, &from->si_code);
get_user_ex(to->si_pid, &from->si_pid);
get_user_ex(to->si_uid, &from->si_uid);
get_user_ex(ptr32, &from->si_ptr);
get_user_catch(err);
}
