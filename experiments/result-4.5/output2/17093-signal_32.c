/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/powerpc/kernel/signal_32.c
static long restore_user_regs(struct pt_regs *regs,
{
copy_from_user(&current->thread.vr_state, &sr->mc_vregs,
copy_from_user(current->thread.evr, &sr->mc_vregs,
}
static long restore_tm_user_regs(struct pt_regs *regs,
{
copy_from_user(&current->thread.vr_state, &sr->mc_vregs,
copy_from_user(current->thread.evr, &sr->mc_vregs,
}
static int do_setcontext(struct ucontext __user *ucp, struct pt_regs *regs, int sig)
{
get_user(cmcp, &ucp->uc_regs))
get_user(mcp, &ucp->uc_regs))
}
