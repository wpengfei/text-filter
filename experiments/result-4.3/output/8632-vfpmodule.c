/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/arm/vfp/vfpmodule.c
int vfp_restore_user_hwstate(struct user_vfp __user *ufp,
{
copy_from_user(&hwstate->fpregs, &ufp->fpregs,
get_user_error(hwstate->fpscr, &ufp->fpscr, err);
get_user_error(fpexc, &ufp_exc->fpexc, err);
get_user_error(hwstate->fpinst, &ufp_exc->fpinst, err);
get_user_error(hwstate->fpinst2, &ufp_exc->fpinst2, err);
}
