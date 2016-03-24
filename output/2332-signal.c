/Users/wpf/Desktop/log/test/linux-2.6.9/arch/m68k/kernel/signal.c
asmlinkage int
{
get_user(new_ka.sa.sa_handler, &act->sa_handler) ||
get_user(new_ka.sa.sa_restorer, &act->sa_restorer))
get_user(new_ka.sa.sa_flags, &act->sa_flags);
get_user(mask, &act->sa_mask);
}
static inline int rt_restore_fpu_state(struct ucontext *uc)
{
copy_from_user(current->thread.fpcntl,
copy_from_user(current->thread.fp,
get_user(*(long *)fpstate, (long *)&uc->uc_fpstate))
copy_from_user(&fpregs, &uc->uc_mcontext.fpregs,
copy_from_user(fpstate + 4, (long *)&uc->uc_fpstate + 1,
}
static inline int
{
get_user(temp, &uc->uc_mcontext.version);
get_user(regs->d0, &gregs[0]);
get_user(regs->d1, &gregs[1]);
get_user(regs->d2, &gregs[2]);
get_user(regs->d3, &gregs[3]);
get_user(regs->d4, &gregs[4]);
get_user(regs->d5, &gregs[5]);
get_user(sw->d6, &gregs[6]);
get_user(sw->d7, &gregs[7]);
get_user(regs->a0, &gregs[8]);
get_user(regs->a1, &gregs[9]);
get_user(regs->a2, &gregs[10]);
get_user(sw->a3, &gregs[11]);
get_user(sw->a4, &gregs[12]);
get_user(sw->a5, &gregs[13]);
get_user(sw->a6, &gregs[14]);
get_user(usp, &gregs[15]);
get_user(regs->pc, &gregs[16]);
get_user(temp, &gregs[17]);
get_user(temp, &uc->uc_formatvec);
}
asmlinkage int do_sigreturn(unsigned long __unused)
{
get_user(set.sig[0], &frame->sc.sc_mask) ||
copy_from_user(&set.sig[1], &frame->extramask,
}
