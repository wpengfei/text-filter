/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/powerpc/kernel/align.c
static int emulate_multiple(struct pt_regs *regs, unsigned char __user *addr,
{
get_user_inatomic(instr,
get_user_inatomic(REG_BYTE(rptr, i ^ bswiz),
get_user_inatomic(REG_BYTE(rptr,
}
static int emulate_fp_pair(unsigned char __user *addr, unsigned int reg,
{
get_user(ptr0[i^sw], addr + i);
get_user(ptr1[i^sw], addr + i + 8);
}
static int emulate_lq_stq(struct pt_regs *regs, unsigned char __user *addr,
{
get_user(ptr0[i^sw], addr + i);
get_user(ptr1[i^sw], addr + i + 8);
}
static int emulate_spe(struct pt_regs *regs, unsigned int reg,
{
case 8:
get_user_inatomic(temp.v[0], p++);
get_user_inatomic(temp.v[1], p++);
get_user_inatomic(temp.v[2], p++);
get_user_inatomic(temp.v[3], p++);
case 4:
get_user_inatomic(temp.v[4], p++);
get_user_inatomic(temp.v[5], p++);
case 2:
get_user_inatomic(temp.v[6], p++);
get_user_inatomic(temp.v[7], p++);
}
int fix_alignment(struct pt_regs *regs)
{
get_user_inatomic(instr,
case 2:
get_user_inatomic(data.v[start + i],
}
