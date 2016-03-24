/Users/wpf/Desktop/log/test/linux-2.6.9/arch/sparc64/kernel/sys_sparc32.c
static long get_tv32(struct timeval *o, struct compat_timeval __user *i)
{
get_user(o->tv_sec, &i->tv_sec) |
get_user(o->tv_usec, &i->tv_usec)));
}
static int do_sys32_semctl(int first, int second, int third,
{
get_user(pad, uptr))
get_user (s.sem_perm.uid, &usp->sem_perm.uid);
get_user (s.sem_perm.gid, &usp->sem_perm.gid);
get_user (s.sem_perm.mode, &usp->sem_perm.mode);
get_user (s.sem_perm.uid, &usp->sem_perm.uid);
get_user (s.sem_perm.gid, &usp->sem_perm.gid);
get_user (s.sem_perm.mode, &usp->sem_perm.mode);
}
static int do_sys32_msgsnd(int first, int second, int third,
{
get_user (p->mtype, &up->mtype) ||
copy_from_user (p->mtext, &up->mtext, second))
}
static int do_sys32_msgctl(int first, int second, void __user *uptr)
{
get_user (m.msg_perm.uid,
get_user (m.msg_perm.gid,
get_user (m.msg_perm.mode,
get_user (m.msg_qbytes,
get_user(m.msg_perm.uid,
get_user(m.msg_perm.gid,
get_user(m.msg_perm.mode,
get_user(m.msg_qbytes,
}
static int do_sys32_shmctl(int first, int second, void __user *uptr)
{
get_user(s.shm_perm.uid,
get_user(s.shm_perm.gid,
get_user(s.shm_perm.mode,
get_user(s.shm_perm.uid,
get_user(s.shm_perm.gid,
get_user(s.shm_perm.mode,
}
asmlinkage long compat_sys_sigaction(int sig, struct old_sigaction32 __user *act,
{
get_user(u_handler, &act->sa_handler);
get_user(u_restorer, &act->sa_restorer);
get_user(new_ka.sa.sa_flags, &act->sa_flags);
get_user(mask, &act->sa_mask);
}
asmlinkage long compat_sys_rt_sigaction(int sig,
{
get_user(u_handler, &act->sa_handler);
copy_from_user(&set32, &act->sa_mask, sizeof(compat_sigset_t));
get_user(new_ka.sa.sa_flags, &act->sa_flags);
get_user(u_restorer, &act->sa_restorer);
}
static inline long get_ts32(struct timespec *o, struct compat_timeval __user *i)
{
get_user(o->tv_sec, &i->tv_sec))
get_user(usec, &i->tv_usec))
}
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
asmlinkage long sys32_sysctl(struct __sysctl_args32 __user *args)
{
copy_from_user(&tmp, args, sizeof(tmp)))
get_user(oldlen, (u32 __user *)(unsigned long)tmp.oldlenp) ||
get_user(oldlen, (size_t __user *)addr) ||
}
