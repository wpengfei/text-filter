/Users/wpf/Desktop/log/test/linux-2.6.9/arch/ppc64/kernel/signal.c
static long restore_sigcontext(struct pt_regs *regs, sigset_t *set, int sig,
{
copy_from_user(regs, &sc->gp_regs,
get_user(gregs[i], &sc->gp_regs[i]);
copy_from_user(&current->thread.fpr, &sc->fp_regs, FP_REGS_SIZE);
get_user(set->sig[0], &sc->oldmask);
get_user(v_regs, &sc->v_regs);
copy_from_user(current->thread.vr, v_regs, 33 * sizeof(vector128));
get_user(current->thread.vrsave, (u32 __user *)&v_regs[33]);
}
int sys_swapcontext(struct ucontext __user *old_ctx,
{
get_user(tmp, (u8 __user *) new_ctx)
get_user(tmp, (u8 __user *) (new_ctx + 1) - 1))
copy_from_user(&set, &new_ctx->uc_sigmask, sizeof(set)))
}
static void setup_rt_frame(int signr, struct k_sigaction *ka, siginfo_t *info,
{
get_user(regs->nip, &funct_desc_ptr->entry);
get_user(regs->gpr[2], &funct_desc_ptr->toc);
get_user(regs->gpr[4], (unsigned long __user *)&frame->pinfo);
get_user(regs->gpr[5], (unsigned long __user *)&frame->puc);
}
