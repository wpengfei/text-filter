/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/parisc/kernel/signal32.c
int
{
get_user(to->si_signo, &from->si_signo);
get_user(to->si_errno, &from->si_errno);
get_user(to->si_code, &from->si_code);
copy_from_user(&to->_sifields._pad, &from->_sifields._pad, SI_PAD_SIZE);
case __SI_CHLD >> 16:
get_user(to->si_utime, &from->si_utime);
get_user(to->si_stime, &from->si_stime);
get_user(to->si_status, &from->si_status);
default:
get_user(to->si_pid, &from->si_pid);
get_user(to->si_uid, &from->si_uid);
case __SI_FAULT >> 16:
get_user(addr, &from->si_addr);
case __SI_POLL >> 16:
get_user(to->si_band, &from->si_band);
get_user(to->si_fd, &from->si_fd);
case __SI_MESGQ >> 16:
get_user(to->si_pid, &from->si_pid);
get_user(to->si_uid, &from->si_uid);
get_user(to->si_int, &from->si_int);
}
