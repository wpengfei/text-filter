/Users/wpf/Desktop/log/test/linux-2.6.9/kernel/compat.c
int get_compat_timespec(struct timespec *ts, const struct compat_timespec __user *cts)
{
get_user(ts->tv_sec, &cts->tv_sec) ||
get_user(ts->tv_nsec, &cts->tv_nsec)) ? -EFAULT : 0;
}
static inline long get_compat_itimerval(struct itimerval *o,
{
get_user(o->it_interval.tv_sec, &i->it_interval.tv_sec) |
get_user(o->it_interval.tv_usec, &i->it_interval.tv_usec) |
get_user(o->it_value.tv_sec, &i->it_value.tv_sec) |
get_user(o->it_value.tv_usec, &i->it_value.tv_usec)));
}
asmlinkage long compat_sys_setrlimit(unsigned int resource,
{
get_user(r.rlim_cur, &rlim->rlim_cur) ||
get_user(r.rlim_max, &rlim->rlim_max))
}
