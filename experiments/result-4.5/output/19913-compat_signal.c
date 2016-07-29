/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/tile/kernel/compat_signal.c
int copy_siginfo_from_user32(siginfo_t *to, struct compat_siginfo __user *from)
{
get_user(to->si_signo, &from->si_signo);
get_user(to->si_errno, &from->si_errno);
get_user(to->si_code, &from->si_code);
get_user(to->si_pid, &from->si_pid);
get_user(to->si_uid, &from->si_uid);
get_user(to->si_int, &from->si_int);
}
