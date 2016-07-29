/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/sparc/kernel/signal_64.c
asmlinkage void sparc64_set_context(struct pt_regs *regs)
{
get_user(pc, &((*grp)[MC_PC]));
get_user(npc, &((*grp)[MC_NPC]));
get_user(set.sig[0], &ucp->uc_sigmask.sig[0]))
copy_from_user(&set, &ucp->uc_sigmask, sizeof(sigset_t)))
get_user(regs->y, &((*grp)[MC_Y]));
get_user(tstate, &((*grp)[MC_TSTATE]));
get_user(regs->u_regs[UREG_G1], (&(*grp)[MC_G1]));
get_user(regs->u_regs[UREG_G2], (&(*grp)[MC_G2]));
get_user(regs->u_regs[UREG_G3], (&(*grp)[MC_G3]));
get_user(regs->u_regs[UREG_G4], (&(*grp)[MC_G4]));
get_user(regs->u_regs[UREG_G5], (&(*grp)[MC_G5]));
get_user(regs->u_regs[UREG_G6], (&(*grp)[MC_G6]));
get_user(regs->u_regs[UREG_I0], (&(*grp)[MC_O0]));
get_user(regs->u_regs[UREG_I1], (&(*grp)[MC_O1]));
get_user(regs->u_regs[UREG_I2], (&(*grp)[MC_O2]));
get_user(regs->u_regs[UREG_I3], (&(*grp)[MC_O3]));
get_user(regs->u_regs[UREG_I4], (&(*grp)[MC_O4]));
get_user(regs->u_regs[UREG_I5], (&(*grp)[MC_O5]));
get_user(regs->u_regs[UREG_I6], (&(*grp)[MC_O6]));
get_user(regs->u_regs[UREG_I7], (&(*grp)[MC_O7]));
get_user(fp, &(ucp->uc_mcontext.mc_fp));
get_user(i7, &(ucp->uc_mcontext.mc_i7));
get_user(fenab, &(ucp->uc_mcontext.mc_fpregs.mcfpu_enab));
get_user(fprs, &(ucp->uc_mcontext.mc_fpregs.mcfpu_fprs));
copy_from_user(fpregs,
copy_from_user(fpregs+16,
get_user(current_thread_info()->xfsr[0],
get_user(current_thread_info()->gsr[0],
}
asmlinkage void sparc64_get_context(struct pt_regs *regs)
{
get_user(fp,
get_user(i7,
}
void do_rt_sigreturn(struct pt_regs *regs)
{
get_user(tpc, &sf->regs.tpc);
get_user(tnpc, &sf->regs.tnpc);
get_user(regs->y, &sf->regs.y);
get_user(tstate, &sf->regs.tstate);
copy_from_user(regs->u_regs, sf->regs.u_regs, sizeof(regs->u_regs));
get_user(fpu_save, &sf->fpu_save);
copy_from_user(&set, &sf->mask, sizeof(sigset_t));
get_user(rwin_save, &sf->rwin_save);
}
