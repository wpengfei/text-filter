/Users/wpf/Desktop/log/test/linux-2.6.9/arch/mips/kernel/linux32.c
static inline long
{
get_user(o->tv_sec, &i->tv_sec) |
get_user(o->tv_usec, &i->tv_usec)));
}
static inline long get_ts32(struct timespec *o, struct compat_timeval *i)
{
get_user(o->tv_sec, &i->tv_sec))
get_user(usec, &i->tv_usec))
}
static int
{
get_user (p->mtype, &up->mtype);
copy_from_user (p->mtext, &up->mtext, second);
}
static int
{
get_user(m.msg_perm.uid, &up64->msg_perm.uid);
get_user(m.msg_perm.gid, &up64->msg_perm.gid);
get_user(m.msg_perm.mode, &up64->msg_perm.mode);
get_user(m.msg_qbytes, &up64->msg_qbytes);
get_user(m.msg_perm.uid, &up32->msg_perm.uid);
get_user(m.msg_perm.gid, &up32->msg_perm.gid);
get_user(m.msg_perm.mode, &up32->msg_perm.mode);
get_user(m.msg_qbytes, &up32->msg_qbytes);
}
static int
{
get_user(s.shm_perm.uid, &up64->shm_perm.uid);
get_user(s.shm_perm.gid, &up64->shm_perm.gid);
get_user(s.shm_perm.mode, &up64->shm_perm.mode);
get_user(s.shm_perm.uid, &up32->shm_perm.uid);
get_user(s.shm_perm.gid, &up32->shm_perm.gid);
get_user(s.shm_perm.mode, &up32->shm_perm.mode);
}
asmlinkage long sys32_sysctl(struct sysctl_args32 *args)
{
copy_from_user(&tmp, args, sizeof(tmp)))
get_user(oldlen, (u32 *)A(tmp.oldlenp)) ||
get_user(oldlen, (size_t *)addr) ||
}
asmlinkage int sys32_adjtimex(struct timex32 *utp)
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
asmlinkage long sys32_socketcall(int call, unsigned int *args32)
{
copy_from_user should be SMP safe. */
copy_from_user(a, args32, socketcall_nargs[call]))
}
