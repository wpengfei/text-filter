/Users/wpf/Desktop/log/test/linux-2.6.9/arch/sparc64/kernel/signal32.c
int copy_siginfo_to_kernel32(siginfo_t *to, struct siginfo32 __user *from)
{
copy_from_user(to, from, 3*sizeof(int)) ||
copy_from_user(to->_sifields._pad, from->_sifields._pad,
}
static int restore_fpu_state32(struct pt_regs *regs, __siginfo_fpu_t __user *fpu)
{
get_user(fprs, &fpu->si_fprs);
copy_from_user(fpregs, &fpu->si_float_regs[0], (sizeof(unsigned int) * 32));
copy_from_user(fpregs+16, &fpu->si_float_regs[32], (sizeof(unsigned int) * 32));
get_user(current_thread_info()->xfsr[0], &fpu->si_fsr);
get_user(current_thread_info()->gsr[0], &fpu->si_gsr);
}
void do_new_sigreturn32(struct pt_regs *regs)
{
get_user(pc, &sf->info.si_regs.pc);
get_user(npc, &sf->info.si_regs.npc);
get_user(regs->y, &sf->info.si_regs.y);
get_user(psr, &sf->info.si_regs.psr);
get_user(regs->u_regs[i], &sf->info.si_regs.u_regs[i]);
get_user(i, &sf->v8plus.g_upper[0]);
get_user(((u32 *)regs->u_regs)[2*i], &sf->v8plus.g_upper[i]);
get_user(asi, &sf->v8plus.asi);
get_user(fpu_save, &sf->fpu_save);
get_user(seta[0], &sf->info.si_mask);
copy_from_user(seta+1, &sf->extramask,
}
asmlinkage void do_sigreturn32(struct pt_regs *regs)
{
get_user(pc, &scptr->sigc_pc);
get_user(npc, &scptr->sigc_npc);
get_user(seta[0], &scptr->sigc_mask);
copy_from_user(seta+1, scptr + 1,
get_user(regs->u_regs[UREG_FP], &scptr->sigc_sp);
get_user(regs->u_regs[UREG_I0], &scptr->sigc_o0);
get_user(regs->u_regs[UREG_G1], &scptr->sigc_g1);
get_user(psr, &scptr->sigc_psr);
}
asmlinkage void do_rt_sigreturn32(struct pt_regs *regs)
{
get_user(pc, &sf->regs.pc);
get_user(npc, &sf->regs.npc);
get_user(regs->y, &sf->regs.y);
get_user(psr, &sf->regs.psr);
get_user(regs->u_regs[i], &sf->regs.u_regs[i]);
get_user(i, &sf->v8plus.g_upper[0]);
get_user(((u32 *)regs->u_regs)[2*i], &sf->v8plus.g_upper[i]);
get_user(asi, &sf->v8plus.asi);
get_user(fpu_save, &sf->fpu_save);
copy_from_user(&seta, &sf->mask, sizeof(compat_sigset_t));
get_user(u_ss_sp, &sf->stack.ss_sp);
get_user(st.ss_flags, &sf->stack.ss_flags);
get_user(st.ss_size, &sf->stack.ss_size);
}
asmlinkage int svr4_setcontext(svr4_ucontext_t __user *c, struct pt_regs *regs)
{
get_user(pc, &((*gr)[SVR4_PC]));
get_user(npc, &((*gr)[SVR4_NPC]));
copy_from_user(&setv, &c->sigmask, sizeof(svr4_sigset_t));
get_user(u_ss_sp, &c->stack.sp);
get_user(st.ss_flags, &c->stack.flags);
get_user(st.ss_size, &c->stack.size);
get_user(regs->y, &((*gr)[SVR4_Y]));
get_user(psr, &((*gr)[SVR4_PSR]));
get_user(regs->u_regs[UREG_G1+i], (&(*gr)[SVR4_G1])+i);
get_user(regs->u_regs[UREG_I0+i], (&(*gr)[SVR4_O0])+i);
}
asmlinkage long do_sys32_sigaltstack(u32 ussa, u32 uossa, unsigned long sp)
{
get_user(u_ss_sp, &((stack_t32 __user *)(long)ussa)->ss_sp) ||
get_user(uss.ss_flags, &((stack_t32 __user *)(long)ussa)->ss_flags) ||
get_user(uss.ss_size, &((stack_t32 __user *)(long)ussa)->ss_size)))
}
