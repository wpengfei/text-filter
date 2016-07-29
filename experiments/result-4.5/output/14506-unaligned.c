/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/mips/kernel/unaligned.c
static void emulate_load_store_insn(struct pt_regs *regs,
{
get_user(insn.word, pc);
case msa_ld_op:
copy_from_user_inatomic(fpr, addr,
}
static void emulate_load_store_microMIPS(struct pt_regs *regs,
{
get_user(halfword, pc16);
get_user(halfword, pc16);
get_user(halfword, pc16))
get_user(halfword, pc16))
}
static void emulate_load_store_MIPS16e(struct pt_regs *regs, void __user * addr)
{
get_user(mips16inst.full, pc16);
get_user(mips16inst.full, pc16);
get_user(mips16inst.full, pc16))
}
