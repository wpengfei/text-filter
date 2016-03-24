/Users/wpf/Desktop/log/test/linux-2.6.9/arch/x86_64/ia32/sys_ia32.c
asmlinkage long
{
get_user(handler, &act->sa_handler) ||
get_user(new_ka.sa.sa_flags, &act->sa_flags) ||
get_user(restorer, &act->sa_restorer)||
copy_from_user(&set32, &act->sa_mask, sizeof(compat_sigset_t)))
}
asmlinkage long
{
get_user(handler, &act->sa_handler) ||
get_user(new_ka.sa.sa_flags, &act->sa_flags) ||
get_user(restorer, &act->sa_restorer) ||
get_user(mask, &act->sa_mask))
}
static inline long
{
get_user(o->tv_sec, &i->tv_sec);
get_user(o->tv_usec, &i->tv_usec);
}
asmlinkage long
{
copy_from_user(&a32, args32, sizeof (a32)))
get_user(oldlen, (int __user *)compat_ptr(a32.oldlenp)))
}
asmlinkage long
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
asmlinkage long sys32_io_submit(aio_context_t ctx_id, int nr,
{
get_user(p32, iocbpp + i))) {
copy_from_user(&tmp, user_iocb, sizeof(tmp)))) {
}
