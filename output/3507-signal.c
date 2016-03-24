/Users/wpf/Desktop/log/test/linux-2.6.9/arch/ppc/kernel/signal.c
int
{
get_user(new_ka.sa.sa_handler, &act->sa_handler) ||
get_user(new_ka.sa.sa_restorer, &act->sa_restorer))
get_user(new_ka.sa.sa_flags, &act->sa_flags);
get_user(mask, &act->sa_mask);
}
static int
{
copy_from_user(regs, &sr->mc_gregs, PT_MSR * sizeof(elf_greg_t)))
copy_from_user(&regs->orig_gpr3, &sr->mc_gregs[PT_ORIG_R3],
copy_from_user(current->thread.fpr, &sr->mc_fregs,
get_user(msr, &sr->mc_gregs[PT_MSR]) && (msr & MSR_VEC) != 0) {
copy_from_user(current->thread.vr, &sr->mc_vregs,
get_user(current->thread.vrsave, (u32 __user *)&sr->mc_vregs[32]))
get_user(msr, &sr->mc_gregs[PT_MSR]) && (msr & MSR_SPE) != 0) {
copy_from_user(current->thread.evr, &sr->mc_vregs,
get_user(current->thread.spefscr, (u32 *)&sr->mc_vregs + ELF_NEVRREG))
}
static int do_setcontext(struct ucontext __user *ucp, struct pt_regs *regs, int sig)
{
copy_from_user(&set, &ucp->uc_sigmask, sizeof(set))
get_user(mcp, &ucp->uc_regs))
}
int sys_swapcontext(struct ucontext __user *old_ctx,
{
get_user(tmp, (u8 __user *) new_ctx)
get_user(tmp, (u8 __user *) (new_ctx + 1) - 1))
}
