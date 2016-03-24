/Users/wpf/Desktop/log/test/linux-2.6.9/arch/parisc/kernel/sys_parisc32.c
asmlinkage long sys32_sysctl(struct __sysctl_args32 *args)
{
copy_from_user(&tmp, args, sizeof(tmp)))
get_user(oldlen32, (u32 *)(u64)tmp.oldlenp))
get_user(oldlen, (size_t *)addr)) {
}
static inline long get_ts32(struct timespec *o, struct compat_timeval *i)
{
get_user(o->tv_sec, &i->tv_sec))
get_user(usec, &i->tv_usec))
}
static inline int
{
get_user(l, ufdset);
get_user(h, ufdset+1);
get_user(*fdset, ufdset);
}
asmlinkage long sys32_msgsnd(int msqid,
{
get_user(mb32.mtype, &umsgp32->mtype);
copy_from_user(mb->mtext, &umsgp32->mtext, msgsz);
}
