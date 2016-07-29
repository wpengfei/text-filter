/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/kernel/compat.c
static int compat_get_timex(struct timex *txc, struct compat_timex __user *utp)
{
get_user(txc->modes, &utp->modes) ||
get_user(txc->offset, &utp->offset) ||
get_user(txc->freq, &utp->freq) ||
get_user(txc->maxerror, &utp->maxerror) ||
get_user(txc->esterror, &utp->esterror) ||
get_user(txc->status, &utp->status) ||
get_user(txc->constant, &utp->constant) ||
get_user(txc->precision, &utp->precision) ||
get_user(txc->tolerance, &utp->tolerance) ||
get_user(txc->time.tv_sec, &utp->time.tv_sec) ||
get_user(txc->time.tv_usec, &utp->time.tv_usec) ||
get_user(txc->tick, &utp->tick) ||
get_user(txc->ppsfreq, &utp->ppsfreq) ||
get_user(txc->jitter, &utp->jitter) ||
get_user(txc->shift, &utp->shift) ||
get_user(txc->stabil, &utp->stabil) ||
get_user(txc->jitcnt, &utp->jitcnt) ||
get_user(txc->calcnt, &utp->calcnt) ||
get_user(txc->errcnt, &utp->errcnt) ||
get_user(txc->stbcnt, &utp->stbcnt))
}
static int __compat_get_timeval(struct timeval *tv, const struct compat_timeval __user *ctv)
{
get_user(tv->tv_sec, &ctv->tv_sec) ||
get_user(tv->tv_usec, &ctv->tv_usec)) ? -EFAULT : 0;
}
static int __compat_get_timespec(struct timespec *ts, const struct compat_timespec __user *cts)
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
int get_compat_sigevent(struct sigevent *event,
{
get_user(event->sigev_value.sival_int,
get_user(event->sigev_signo, &u_event->sigev_signo) ||
get_user(event->sigev_notify, &u_event->sigev_notify) ||
get_user(event->sigev_notify_thread_id,
}
