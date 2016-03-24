/Users/wpf/Desktop/log/test/linux-2.6.9/arch/ia64/ia32/ia32_signal.c
int
{
get_user(to->si_signo, &from->si_signo);
get_user(to->si_errno, &from->si_errno);
get_user(to->si_code, &from->si_code);
copy_from_user(&to->_sifields._pad, &from->_sifields._pad, SI_PAD_SIZE);
get_user(to->si_utime, &from->si_utime);
get_user(to->si_stime, &from->si_stime);
get_user(to->si_status, &from->si_status);
get_user(to->si_pid, &from->si_pid);
get_user(to->si_uid, &from->si_uid);
get_user(tmp, &from->si_addr);
get_user(to->si_band, &from->si_band);
get_user(to->si_fd, &from->si_fd);
get_user(to->si_pid, &from->si_pid);
get_user(to->si_uid, &from->si_uid);
get_user(to->si_int, &from->si_int);
}
static int
{
get_user(mxcsr, (unsigned int __user *)&save->mxcsr);
get_user(lo, (unsigned int __user *)&save->cw);
get_user(lo, (unsigned int __user *)&save->sw);
get_user(hi, (unsigned int __user *)&save->tag);
get_user(lo, (unsigned int __user *)&save->ipoff);
get_user(hi, (unsigned int __user *)&save->cssel);
get_user(lo, (unsigned int __user *)&save->dataoff);
get_user(hi, (unsigned int __user *)&save->datasel);
copy_from_user(fpregp, &save->_st[(0+fr8_st_map)&0x7], sizeof(struct _fpreg_ia32));
copy_from_user(fpregp, &save->_st[(1+fr8_st_map)&0x7], sizeof(struct _fpreg_ia32));
copy_from_user(fpregp, &save->_st[(2+fr8_st_map)&0x7], sizeof(struct _fpreg_ia32));
copy_from_user(fpregp, &save->_st[(3+fr8_st_map)&0x7], sizeof(struct _fpreg_ia32));
copy_from_user(fpregp, &save->_st[(4+fr8_st_map)&0x7], sizeof(struct _fpreg_ia32));
copy_from_user(fpregp, &save->_st[(5+fr8_st_map)&0x7], sizeof(struct _fpreg_ia32));
copy_from_user(fpregp, &save->_st[(6+fr8_st_map)&0x7], sizeof(struct _fpreg_ia32));
copy_from_user(fpregp, &save->_st[(7+fr8_st_map)&0x7], sizeof(struct _fpreg_ia32));
copy_from_user(num128, &save->_xmm[0], sizeof(struct _xmmreg_ia32));
copy_from_user(num128, &save->_xmm[1], sizeof(struct _xmmreg_ia32));
copy_from_user(num128, &save->_xmm[2], sizeof(struct _xmmreg_ia32));
copy_from_user(num128, &save->_xmm[3], sizeof(struct _xmmreg_ia32));
copy_from_user(num128, &save->_xmm[4], sizeof(struct _xmmreg_ia32));
copy_from_user(num128, &save->_xmm[5], sizeof(struct _xmmreg_ia32));
copy_from_user(num128, &save->_xmm[6], sizeof(struct _xmmreg_ia32));
copy_from_user(num128, &save->_xmm[7], sizeof(struct _xmmreg_ia32));
}
asmlinkage long
{
get_user(handler, &act->sa_handler);
get_user(new_ka.sa.sa_flags, &act->sa_flags);
get_user(restorer, &act->sa_restorer);
copy_from_user(&new_ka.sa.sa_mask, &act->sa_mask, sizeof(compat_sigset_t));
}
asmlinkage long
{
get_user(handler, &act->sa_handler);
get_user(new_ka.sa.sa_flags, &act->sa_flags);
get_user(restorer, &act->sa_restorer);
get_user(mask, &act->sa_mask);
}
static int
{
get_user(tmp, &sc->seg);	\
get_user(tmp, &sc->seg);	\
get_user(tmpflags, &sc->eflags);
get_user(fpstate_ptr, &(sc->fpstate));
get_user(buf, &sc->fpstate);
get_user(*peax, &sc->eax);
}
asmlinkage long
{
get_user(set.sig[0], &frame->sc.oldmask)
copy_from_user((char *) &set.sig + 4, &frame->extramask,
}
