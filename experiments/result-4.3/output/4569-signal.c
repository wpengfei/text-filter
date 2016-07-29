/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/arc/kernel/signal.c
static int restore_usr_regs(struct pt_regs *regs, struct rt_sigframe __user *sf)
{
copy_from_user(&set, &sf->uc.uc_sigmask, sizeof(set));
copy_from_user(&uregs.scratch,
}
