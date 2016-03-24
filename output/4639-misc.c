/Users/wpf/Desktop/log/test/linux-2.6.9/arch/sparc64/solaris/misc.c
asmlinkage u32 solaris_mmap64(struct pt_regs *regs, u32 len, u32 prot, u32 flags, u32 fd, u32 offhi)
{
get_user (offlo, (u32 __user *)(long)((u32)regs->u_regs[UREG_I6] + 0x5c)))
get_user (offlo, (u32 __user *)(long)((u32)regs->u_regs[UREG_I6] + 0x60)))
}
asmlinkage int solaris_setrlimit(unsigned int resource, struct rlimit32 __user *rlim)
{
get_user (r.rlim_cur, &rlim->rlim_cur) ||
get_user (r.rlim_max, &rlim->rlim_max))
}
asmlinkage int solaris_setrlimit64(unsigned int resource, struct rlimit __user *rlim)
{
get_user (r.rlim_cur, &rlim->rlim_cur) ||
get_user (r.rlim_max, &rlim->rlim_max))
}
asmlinkage int solaris_ntp_adjtime(struct sol_timex __user *txp)
{
get_user (t.modes, &txp->modes);
get_user (t.offset, &txp->offset);
get_user (t.freq, &txp->freq);
get_user (t.maxerror, &txp->maxerror);
get_user (t.esterror, &txp->esterror);
get_user (t.status, &txp->status);
get_user (t.constant, &txp->constant);
}
