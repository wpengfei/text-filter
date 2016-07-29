/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/powerpc/kernel/signal_64.c
static long restore_sigcontext(struct pt_regs *regs, sigset_t *set, int sig,
{
copy_from_user(regs->gpr, sc->gp_regs, sizeof(regs->gpr));
get_user(regs->nip, &sc->gp_regs[PT_NIP]);
get_user(msr, &sc->gp_regs[PT_MSR]);
get_user(regs->orig_gpr3, &sc->gp_regs[PT_ORIG_R3]);
get_user(regs->ctr, &sc->gp_regs[PT_CTR]);
get_user(regs->link, &sc->gp_regs[PT_LNK]);
get_user(regs->xer, &sc->gp_regs[PT_XER]);
get_user(regs->ccr, &sc->gp_regs[PT_CCR]);
get_user(regs->dar, &sc->gp_regs[PT_DAR]);
get_user(regs->dsisr, &sc->gp_regs[PT_DSISR]);
get_user(regs->result, &sc->gp_regs[PT_RESULT]);
get_user(set->sig[0], &sc->oldmask);
get_user(v_regs, &sc->v_regs);
copy_from_user(&current->thread.vr_state, v_regs,
get_user(current->thread.vrsave, (u32 __user *)&v_regs[33]);
}
static long restore_tm_sigcontexts(struct pt_regs *regs,
{
copy_from_user(regs->gpr, tm_sc->gp_regs, sizeof(regs->gpr));
copy_from_user(&current->thread.ckpt_regs, sc->gp_regs,
case of getting a signal and simply returning from it,
get_user(regs->nip, &tm_sc->gp_regs[PT_NIP]);
get_user(current->thread.tm_tfhar, &sc->gp_regs[PT_NIP]);
get_user(msr, &sc->gp_regs[PT_MSR]);
get_user(regs->ctr, &tm_sc->gp_regs[PT_CTR]);
get_user(regs->link, &tm_sc->gp_regs[PT_LNK]);
get_user(regs->xer, &tm_sc->gp_regs[PT_XER]);
get_user(regs->ccr, &tm_sc->gp_regs[PT_CCR]);
get_user(current->thread.ckpt_regs.ctr,
get_user(current->thread.ckpt_regs.link,
get_user(current->thread.ckpt_regs.xer,
get_user(current->thread.ckpt_regs.ccr,
get_user(regs->trap, &sc->gp_regs[PT_TRAP]);
get_user(regs->dar, &sc->gp_regs[PT_DAR]);
get_user(regs->dsisr, &sc->gp_regs[PT_DSISR]);
get_user(regs->result, &sc->gp_regs[PT_RESULT]);
get_user(v_regs, &sc->v_regs);
get_user(tm_v_regs, &tm_sc->v_regs);
copy_from_user(&current->thread.vr_state, v_regs,
copy_from_user(&current->thread.transact_vr, tm_v_regs,
get_user(current->thread.vrsave,
get_user(current->thread.transact_vrsave,
}
int sys_swapcontext(struct ucontext __user *old_ctx,
{
get_user(new_msr, &new_ctx->uc_mcontext.gp_regs[PT_MSR]))
get_user(tmp, (u8 __user *) new_ctx)
get_user(tmp, (u8 __user *) new_ctx + ctx_size - 1))
copy_from_user(&set, &new_ctx->uc_sigmask, sizeof(set)))
}
int sys_rt_sigreturn(unsigned long r3, unsigned long r4, unsigned long r5,
{
copy_from_user(&set, &uc->uc_sigmask, sizeof(set)))
get_user(msr, &uc->uc_mcontext.gp_regs[PT_MSR]))
get_user(uc_transact, &uc->uc_link))
}
int handle_rt_signal64(struct ksignal *ksig, sigset_t *set, struct pt_regs *regs)
{
get_user(regs->nip, &funct_desc_ptr->entry);
get_user(regs->gpr[2], &funct_desc_ptr->toc);
get_user(regs->gpr[4], (unsigned long __user *)&frame->pinfo);
get_user(regs->gpr[5], (unsigned long __user *)&frame->puc);
}
