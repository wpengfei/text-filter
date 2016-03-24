/Users/wpf/Desktop/log/test/linux-2.6.9/arch/ppc64/kernel/signal.c

int sys_swapcontext(struct ucontext __user *old_ctx,
{
get_user(tmp, (u8 __user *) new_ctx)
get_user(tmp, (u8 __user *) (new_ctx + 1) - 1))
}
static void setup_rt_frame(int signr, struct k_sigaction *ka, siginfo_t *info,
{
get_user(regs->gpr[4], (unsigned long __user *)&frame->pinfo);
get_user(regs->gpr[5], (unsigned long __user *)&frame->puc);
}
