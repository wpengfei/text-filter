/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/powerpc/kernel/signal_32.c
static inline int restore_general_regs(struct pt_regs *regs,
{
copy_from_user(regs, &sr->mc_gregs,
copy_from_user(&regs->orig_gpr3, &sr->mc_gregs[PT_ORIG_R3],
}
static long restore_user_regs(struct pt_regs *regs,
{
get_user(msr, &sr->mc_gregs[PT_MSR]);
copy_from_user(&current->thread.vr_state, &sr->mc_vregs,
get_user(current->thread.vrsave, (u32 __user *)&sr->mc_vregs[32]))
copy_from_user(current->thread.evr, &sr->mc_vregs,
get_user(current->thread.spefscr, (u32 __user *)&sr->mc_vregs + ELF_NEVRREG))
}
static long restore_tm_user_regs(struct pt_regs *regs,
{
get_user(current->thread.tm_tfhar, &sr->mc_gregs[PT_NIP]);
get_user(msr, &sr->mc_gregs[PT_MSR]);
copy_from_user(&current->thread.vr_state, &sr->mc_vregs,
copy_from_user(&current->thread.transact_vr,
get_user(current->thread.vrsave,
get_user(current->thread.transact_vrsave,
copy_from_user(current->thread.evr, &sr->mc_vregs,
get_user(current->thread.spefscr, (u32 __user *)&sr->mc_vregs
get_user(msr_hi, &tm_sr->mc_gregs[PT_MSR]))
}
int copy_siginfo_from_user32(siginfo_t *to, struct compat_siginfo __user *from)
{
copy_from_user(to, from, 3*sizeof(int)) ||
copy_from_user(to->_sifields._pad,
}
static int do_setcontext(struct ucontext __user *ucp, struct pt_regs *regs, int sig)
{
get_user(cmcp, &ucp->uc_regs))
get_user(mcp, &ucp->uc_regs))
}
static int do_setcontext_tm(struct ucontext __user *ucp,
{
get_user(cmcp, &ucp->uc_regs) ||
get_user(tm_cmcp, &tm_ucp->uc_regs))
}
int sys_debug_setcontext(struct ucontext __user *ctx,
{
copy_from_user(&op, dbg + i, sizeof(op)))
default:
get_user(tmp, (u8 __user *) ctx)
get_user(tmp, (u8 __user *) (ctx + 1) - 1))
}
