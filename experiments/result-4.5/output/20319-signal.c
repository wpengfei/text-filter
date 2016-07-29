/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/unicore32/kernel/signal.c
static int restore_sigframe(struct pt_regs *regs, struct sigframe __user *sf)
{
copy_from_user(&set, &sf->uc.uc_sigmask, sizeof(set));
get_user(regs->UCreg_00, &sf->uc.uc_mcontext.regs.UCreg_00);
get_user(regs->UCreg_01, &sf->uc.uc_mcontext.regs.UCreg_01);
get_user(regs->UCreg_02, &sf->uc.uc_mcontext.regs.UCreg_02);
get_user(regs->UCreg_03, &sf->uc.uc_mcontext.regs.UCreg_03);
get_user(regs->UCreg_04, &sf->uc.uc_mcontext.regs.UCreg_04);
get_user(regs->UCreg_05, &sf->uc.uc_mcontext.regs.UCreg_05);
get_user(regs->UCreg_06, &sf->uc.uc_mcontext.regs.UCreg_06);
get_user(regs->UCreg_07, &sf->uc.uc_mcontext.regs.UCreg_07);
get_user(regs->UCreg_08, &sf->uc.uc_mcontext.regs.UCreg_08);
get_user(regs->UCreg_09, &sf->uc.uc_mcontext.regs.UCreg_09);
get_user(regs->UCreg_10, &sf->uc.uc_mcontext.regs.UCreg_10);
get_user(regs->UCreg_11, &sf->uc.uc_mcontext.regs.UCreg_11);
get_user(regs->UCreg_12, &sf->uc.uc_mcontext.regs.UCreg_12);
get_user(regs->UCreg_13, &sf->uc.uc_mcontext.regs.UCreg_13);
get_user(regs->UCreg_14, &sf->uc.uc_mcontext.regs.UCreg_14);
get_user(regs->UCreg_15, &sf->uc.uc_mcontext.regs.UCreg_15);
get_user(regs->UCreg_16, &sf->uc.uc_mcontext.regs.UCreg_16);
get_user(regs->UCreg_17, &sf->uc.uc_mcontext.regs.UCreg_17);
get_user(regs->UCreg_18, &sf->uc.uc_mcontext.regs.UCreg_18);
get_user(regs->UCreg_19, &sf->uc.uc_mcontext.regs.UCreg_19);
get_user(regs->UCreg_20, &sf->uc.uc_mcontext.regs.UCreg_20);
get_user(regs->UCreg_21, &sf->uc.uc_mcontext.regs.UCreg_21);
get_user(regs->UCreg_22, &sf->uc.uc_mcontext.regs.UCreg_22);
get_user(regs->UCreg_23, &sf->uc.uc_mcontext.regs.UCreg_23);
get_user(regs->UCreg_24, &sf->uc.uc_mcontext.regs.UCreg_24);
get_user(regs->UCreg_25, &sf->uc.uc_mcontext.regs.UCreg_25);
get_user(regs->UCreg_26, &sf->uc.uc_mcontext.regs.UCreg_26);
get_user(regs->UCreg_fp, &sf->uc.uc_mcontext.regs.UCreg_fp);
get_user(regs->UCreg_ip, &sf->uc.uc_mcontext.regs.UCreg_ip);
get_user(regs->UCreg_sp, &sf->uc.uc_mcontext.regs.UCreg_sp);
get_user(regs->UCreg_lr, &sf->uc.uc_mcontext.regs.UCreg_lr);
get_user(regs->UCreg_pc, &sf->uc.uc_mcontext.regs.UCreg_pc);
get_user(regs->UCreg_asr, &sf->uc.uc_mcontext.regs.UCreg_asr);
}
