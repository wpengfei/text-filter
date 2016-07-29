/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/s390/kernel/compat_signal.c
int copy_siginfo_from_user32(siginfo_t *to, compat_siginfo_t __user *from)
{
get_user(to->si_signo, &from->si_signo);
get_user(to->si_errno, &from->si_errno);
get_user(to->si_code, &from->si_code);
copy_from_user(&to->_sifields._pad, &from->_sifields._pad, SI_PAD_SIZE);
case __SI_MESGQ >> 16:
get_user(to->si_int, &from->si_int);
case __SI_KILL >> 16:
get_user(to->si_pid, &from->si_pid);
get_user(to->si_uid, &from->si_uid);
case __SI_CHLD >> 16:
get_user(to->si_pid, &from->si_pid);
get_user(to->si_uid, &from->si_uid);
get_user(to->si_utime, &from->si_utime);
get_user(to->si_stime, &from->si_stime);
get_user(to->si_status, &from->si_status);
case __SI_FAULT >> 16:
get_user(tmp, &from->si_addr);
case __SI_POLL >> 16:
get_user(to->si_band, &from->si_band);
get_user(to->si_fd, &from->si_fd);
case __SI_TIMER >> 16:
get_user(to->si_tid, &from->si_tid);
get_user(to->si_overrun, &from->si_overrun);
get_user(to->si_int, &from->si_int);
}
static int restore_sigregs_ext32(struct pt_regs *regs,
{
copy_from_user(&gprs_high, &sregs_ext->gprs_high,
copy_from_user(vxrs, &sregs_ext->vxrs_low,
copy_from_user(current->thread.fpu.vxrs + __NUM_VXRS_LOW,
}
