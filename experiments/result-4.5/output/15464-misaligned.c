/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/nios2/kernel/misaligned.c
asmlinkage void handle_unaligned_c(struct pt_regs *fp, int cause)
{
case INST_LDHU:
get_user(d0, (u8 *)(addr+0));
get_user(d1, (u8 *)(addr+1));
case INST_LDH:
get_user(d0, (u8 *)(addr+0));
get_user(d1, (u8 *)(addr+1));
case INST_LDW:
get_user(d0, (u8 *)(addr+0));
get_user(d1, (u8 *)(addr+1));
get_user(d2, (u8 *)(addr+2));
get_user(d3, (u8 *)(addr+3));
}
