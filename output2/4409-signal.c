/Users/wpf/Desktop/log/test/linux-2.6.9/arch/sparc/kernel/signal.c

asmlinkage int svr4_setcontext(svr4_ucontext_t __user *c, struct pt_regs *regs)
{
get_user(npc, &((*gr)[SVR4_NPC]));
get_user(psr, &((*gr)[SVR4_PSR]));
}
