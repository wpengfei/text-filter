/Users/wpf/Desktop/log/test/linux-2.6.9/arch/i386/kernel/vm86.c
asmlinkage int sys_vm86old(struct pt_regs regs)
{
copy_from_user(&info, v86, VM86_REGS_SIZE1);
copy_from_user(&info.regs.VM86_REGS_PART2, &v86->regs.VM86_REGS_PART2,
}
asmlinkage int sys_vm86(struct pt_regs regs)
{
copy_from_user(&info, v86, VM86_REGS_SIZE1);
copy_from_user(&info.regs.VM86_REGS_PART2, &v86->regs.VM86_REGS_PART2,
}
