/Users/wpf/Desktop/log/test/linux-2.6.9/arch/h8300/kernel/signal.c
asmlinkage int 
{
get_user(new_ka.sa.sa_handler, &act->sa_handler) ||
get_user(new_ka.sa.sa_restorer, &act->sa_restorer))
get_user(new_ka.sa.sa_flags, &act->sa_flags);
get_user(mask, &act->sa_mask);
}
static inline int
{
get_user(temp, &uc->uc_mcontext.version);
get_user(regs->er0, &gregs[0]);
get_user(regs->er1, &gregs[1]);
get_user(regs->er2, &gregs[2]);
get_user(regs->er3, &gregs[3]);
get_user(regs->er4, &gregs[4]);
get_user(regs->er5, &gregs[5]);
get_user(regs->er6, &gregs[6]);
get_user(usp, &gregs[7]);
get_user(regs->pc, &gregs[8]);
get_user(temp, &gregs[9]);
}
asmlinkage int do_sigreturn(unsigned long __unused,...)
{
get_user(set.sig[0], &frame->sc.sc_mask) ||
copy_from_user(&set.sig[1], &frame->extramask,
}
