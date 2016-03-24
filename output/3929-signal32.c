/Users/wpf/Desktop/log/test/linux-2.6.9/arch/ppc64/kernel/signal32.c
static long restore_user_regs(struct pt_regs *regs,
{
get_user(gregs[i], &sr->mc_gregs[i]);
copy_from_user(current->thread.fpr, &sr->mc_fregs,
get_user(msr, &sr->mc_gregs[PT_MSR]) && (msr & MSR_VEC) != 0) {
copy_from_user(current->thread.vr, &sr->mc_vregs,
get_user(current->thread.vrsave, (u32 __user *)&sr->mc_vregs[32]))
}
int sys32_sigaltstack(u32 __new, u32 __old, int r5,
{
get_user(ss_sp, &newstack->ss_sp) ||
get_user(uss.ss_flags, &newstack->ss_flags) ||
get_user(uss.ss_size, &newstack->ss_size))
}
static long do_setcontext32(struct ucontext32 __user *ucp, struct pt_regs *regs, int sig)
{
copy_from_user(&c_set, &ucp->uc_sigmask, sizeof(c_set))
get_user(mcp, &ucp->uc_regs))
}
