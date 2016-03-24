/Users/wpf/Desktop/log/test/linux-2.6.9/arch/mips/kernel/signal32.c
static inline int get_sigset(sigset_t *kbuf, const compat_sigset_t *ubuf)
{
get_user (sig[3], &ubuf->sig[3]);
get_user (sig[2], &ubuf->sig[2]);
get_user (sig[1], &ubuf->sig[1]);
get_user (sig[0], &ubuf->sig[0]);
}
asmlinkage int sys32_sigaction(int sig, const struct sigaction32 *act,
{
get_user((u32)(u64)new_ka.sa.sa_handler,
get_user(new_ka.sa.sa_flags, &act->sa_flags);
get_user(mask, &act->sa_mask.sig[0]);
}
asmlinkage int sys32_sigaltstack(nabi_no_regargs struct pt_regs regs)
{
get_user(sp, &uss->ss_sp);
get_user(kss.ss_size, &uss->ss_size);
get_user(kss.ss_flags, &uss->ss_flags);
}
static asmlinkage int restore_sigcontext32(struct pt_regs *regs,
{
get_user(regs->cp0_epc, &sc->sc_pc);
get_user(regs->hi, &sc->sc_mdhi);
get_user(regs->lo, &sc->sc_mdlo);
get_user(regs->regs[i], &sc->sc_regs[i]);		\
} while(0)
asmlinkage void sys32_rt_sigreturn(nabi_no_regargs struct pt_regs regs)
{
copy_from_user(&set, &frame->rs_uc.uc_sigmask, sizeof(set)))
get_user(sp, &frame->rs_uc.uc_stack.ss_sp))
get_user(st.ss_size, &frame->rs_uc.uc_stack.ss_size))
get_user(st.ss_flags, &frame->rs_uc.uc_stack.ss_flags))
}
asmlinkage int sys32_rt_sigaction(int sig, const struct sigaction32 *act,
{
get_user((u32)(u64)new_sa.sa.sa_handler,
get_user(new_sa.sa.sa_flags, &act->sa_flags);
}
asmlinkage int sys32_rt_sigtimedwait(compat_sigset_t *uthese,
{
copy_from_user (&these32, uthese, sizeof(compat_old_sigset_t)))
get_user (ts.tv_sec, &uts->tv_sec) ||
get_user (ts.tv_nsec, &uts->tv_nsec))
}
asmlinkage int sys32_rt_sigqueueinfo(int pid, int sig, siginfo_t32 *uinfo)
{
copy_from_user (&info, uinfo, 3*sizeof(int)) ||
copy_from_user (info._sifields._pad, uinfo->_sifields._pad, SI_PAD_SIZE))
}
