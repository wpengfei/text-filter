/Users/wpf/Desktop/log/test/linux-2.6.9/arch/ia64/ia32/sys_ia32.c
static void
{
copy_from_user(&ptp->f8, reg, sizeof(*reg));
copy_from_user(&ptp->f9, reg, sizeof(*reg));
copy_from_user(&ptp->f10, reg, sizeof(*reg));
copy_from_user(&ptp->f11, reg, sizeof(*reg));
copy_from_user(&swp->f12 + (regno - 4), reg, sizeof(*reg));
}
static int
{
get_user(num32, (unsigned int __user *)&save->cwd);
get_user(fsrlo, (unsigned int __user *)&save->swd);
get_user(fsrhi, (unsigned int __user *)&save->twd);
get_user(num32, (unsigned int __user *)&save->fip);
get_user(num32, (unsigned int __user *)&save->foo);
}
static int
{
get_user(num32, (unsigned int __user *)&save->cwd);
get_user(fsrlo, (unsigned int __user *)&save->swd);
get_user(fsrhi, (unsigned int __user *)&save->twd);
get_user(num32, (unsigned int __user *)&save->fip);
get_user(num32, (unsigned int __user *)&save->foo);
get_user(mxcsr, (unsigned int __user *)&save->mxcsr);
copy_from_user(num128, &save->xmm_space[0] + 4*i, sizeof(struct _xmmreg_ia32));
}
asmlinkage long
{
copy_from_user(&a32, args, sizeof(a32)))
get_user(oldlen, (int __user *) compat_ptr(a32.oldlenp)))
}
asmlinkage long
{
get_user(event64.events, &event->events);
get_user(data_halfword, &event->data[0]);
get_user(data_halfword, &event->data[1]);
}
asmlinkage long
{
get_user(se.sigev_value.sival_int,	&se32->sigev_value.sival_int) ||
get_user(se.sigev_signo, &se32->sigev_signo) ||
get_user(se.sigev_notify, &se32->sigev_notify) ||
copy_from_user(&se._sigev_un._pad, &se32->_sigev_un._pad,
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
