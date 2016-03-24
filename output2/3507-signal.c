/Users/wpf/Desktop/log/test/linux-2.6.9/arch/ppc/kernel/signal.c

static int
{
get_user(msr, &sr->mc_gregs[PT_MSR]) && (msr & MSR_VEC) != 0) {
get_user(msr, &sr->mc_gregs[PT_MSR]) && (msr & MSR_SPE) != 0) {
copy_from_user(current->thread.vr, &sr->mc_vregs,
copy_from_user(current->thread.evr, &sr->mc_vregs,
}
int sys_swapcontext(struct ucontext __user *old_ctx,
{
get_user(tmp, (u8 __user *) new_ctx)
get_user(tmp, (u8 __user *) (new_ctx + 1) - 1))
}
