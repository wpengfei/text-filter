/Users/wpf/Desktop/log/test/linux-2.6.9/arch/sparc64/solaris/misc.c

asmlinkage u32 solaris_mmap64(struct pt_regs *regs, u32 len, u32 prot, u32 flags, u32 fd, u32 offhi)
{
get_user (offlo, (u32 __user *)(long)((u32)regs->u_regs[UREG_I6] + 0x5c)))
get_user (offlo, (u32 __user *)(long)((u32)regs->u_regs[UREG_I6] + 0x60)))
}
