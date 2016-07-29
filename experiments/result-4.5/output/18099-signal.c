/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/s390/kernel/signal.c
static int restore_sigregs_ext(struct pt_regs *regs,
{
copy_from_user(vxrs, &sregs_ext->vxrs_low,
copy_from_user(current->thread.fpu.vxrs + __NUM_VXRS_LOW,
}
