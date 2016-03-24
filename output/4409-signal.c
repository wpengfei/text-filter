/Users/wpf/Desktop/log/test/linux-2.6.9/arch/sparc/kernel/signal.c
static inline int
{
copy_from_user(&current->thread.float_regs[0], &fpu->si_float_regs[0],
get_user(current->thread.fsr, &fpu->si_fsr);
get_user(current->thread.fpqdepth, &fpu->si_fpqdepth);
copy_from_user(&current->thread.fpqueue[0],
}
static inline void do_new_sigreturn (struct pt_regs *regs)
{
get_user(pc,  &sf->info.si_regs.pc);
get_user(npc, &sf->info.si_regs.npc);
copy_from_user(regs, &sf->info.si_regs, sizeof(struct pt_regs));
get_user(fpu_save, &sf->fpu_save);
get_user(set.sig[0], &sf->info.si_mask);
copy_from_user(&set.sig[1], &sf->extramask,
}
asmlinkage void do_sigreturn(struct pt_regs *regs)
{
get_user(pc, &scptr->sigc_pc);
get_user(npc, &scptr->sigc_npc);
get_user(set.sig[0], &scptr->sigc_mask);
copy_from_user(&set.sig[1], scptr + 1,
get_user(regs->u_regs[UREG_FP], &scptr->sigc_sp);
get_user(regs->u_regs[UREG_I0], &scptr->sigc_o0);
get_user(regs->u_regs[UREG_G1], &scptr->sigc_g1);
get_user(psr, &scptr->sigc_psr);
}
asmlinkage void do_rt_sigreturn(struct pt_regs *regs)
{
get_user(pc, &sf->regs.pc);
get_user(npc, &sf->regs.npc);
get_user(regs->y, &sf->regs.y);
get_user(psr, &sf->regs.psr);
copy_from_user(&regs->u_regs[UREG_G1],
get_user(fpu_save, &sf->fpu_save);
copy_from_user(&set, &sf->mask, sizeof(sigset_t));
copy_from_user(&st, &sf->stack, sizeof(stack_t));
}
asmlinkage int svr4_setcontext(svr4_ucontext_t __user *c, struct pt_regs *regs)
{
get_user(pc, &((*gr)[SVR4_PC]));
get_user(npc, &((*gr)[SVR4_NPC]));
copy_from_user(&setv, &c->sigmask, sizeof(svr4_sigset_t));
get_user(st.ss_sp, &c->stack.sp);
get_user(st.ss_flags, &c->stack.flags);
get_user(st.ss_size, &c->stack.size);
get_user(regs->y, &((*gr)[SVR4_Y]));
get_user(psr, &((*gr)[SVR4_PSR]));
copy_from_user(&regs->u_regs[UREG_G1], &(*gr)[SVR4_G1],
copy_from_user(&regs->u_regs[UREG_I0], &(*gr)[SVR4_O0],
}
