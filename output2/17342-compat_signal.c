/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/s390/kernel/compat_signal.c
int copy_siginfo_from_user32(siginfo_t *to, compat_siginfo_t __user *from)
{
get_user(to->si_int, &from->si_int);
get_user(to->si_pid, &from->si_pid);
get_user(to->si_uid, &from->si_uid);
get_user(to->si_pid, &from->si_pid);
get_user(to->si_uid, &from->si_uid);
get_user(to->si_int, &from->si_int);
}
