/Users/wpf/Desktop/log/test/linux-2.6.9/arch/sparc64/kernel/signal32.c

asmlinkage int svr4_setcontext(svr4_ucontext_t __user *c, struct pt_regs *regs)
{
get_user(npc, &((*gr)[SVR4_NPC]));
get_user(psr, &((*gr)[SVR4_PSR]));
get_user(regs->u_regs[UREG_G1+i], (&(*gr)[SVR4_G1])+i);
get_user(regs->u_regs[UREG_I0+i], (&(*gr)[SVR4_O0])+i);
}
