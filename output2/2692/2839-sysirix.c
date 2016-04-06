/Users/wpf/Documents/workspace/text-filter/test/linux-2.6.9/arch/mips/kernel/sysirix.c
asmlinkage int irix_mmap64(struct pt_regs *regs)
{
get_user(off1, &sp[1]);
get_user(off2, &sp[2]);
get_user(fd, &sp[1]);
get_user(off1, &sp[2]);
}
