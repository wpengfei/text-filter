/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/mips/math-emu/cp1emu.c
int fpu_emulator_cop1Handler(struct pt_regs *xcp, struct mips_fpu_struct *ctx,
{
get_user(instr[0], (u16 __user *)msk_isa16_mode(xcp->cp0_epc))) ||
get_user(instr[1], (u16 __user *)msk_isa16_mode(xcp->cp0_epc + 2))) ||
get_user(instr[2], (u16 __user *)msk_isa16_mode(xcp->cp0_epc + 4))) ||
get_user(instr[3], (u16 __user *)msk_isa16_mode(xcp->cp0_epc + 6)))) {
get_user(dec_insn.insn,
get_user(dec_insn.next_insn,
}
