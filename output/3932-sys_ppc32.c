/Users/wpf/Desktop/log/test/linux-2.6.9/arch/ppc64/kernel/sys_ppc32.c
asmlinkage long sys32_adjtimex(struct timex32 __user *utp)
{
get_user(txc.modes, &utp->modes) ||
get_user(txc.offset, &utp->offset) ||
get_user(txc.freq, &utp->freq) ||
get_user(txc.maxerror, &utp->maxerror) ||
get_user(txc.esterror, &utp->esterror) ||
get_user(txc.status, &utp->status) ||
get_user(txc.constant, &utp->constant) ||
get_user(txc.precision, &utp->precision) ||
get_user(txc.tolerance, &utp->tolerance) ||
get_user(txc.time.tv_sec, &utp->time.tv_sec) ||
get_user(txc.time.tv_usec, &utp->time.tv_usec) ||
get_user(txc.tick, &utp->tick) ||
get_user(txc.ppsfreq, &utp->ppsfreq) ||
get_user(txc.jitter, &utp->jitter) ||
get_user(txc.shift, &utp->shift) ||
get_user(txc.stabil, &utp->stabil) ||
get_user(txc.jitcnt, &utp->jitcnt) ||
get_user(txc.calcnt, &utp->calcnt) ||
get_user(txc.errcnt, &utp->errcnt) ||
get_user(txc.stbcnt, &utp->stbcnt))
}
static inline long get_ts32(struct timespec *o, struct compat_timeval __user *i)
{
get_user(o->tv_sec, &i->tv_sec))
get_user(usec, &i->tv_usec))
}
asmlinkage long sys32_sysctl(struct __sysctl_args32 __user *args)
{
copy_from_user(&tmp, args, sizeof(tmp)))
get_user(oldlen, (compat_size_t __user *)compat_ptr(tmp.oldlenp)) ||
get_user(oldlen, oldlenp) ||
}
int get_compat_timeval(struct timeval *tv, struct compat_timeval __user *ctv)
{
get_user(tv->tv_sec, &ctv->tv_sec) ||
get_user(tv->tv_usec, &ctv->tv_usec)) ? -EFAULT : 0;
}
