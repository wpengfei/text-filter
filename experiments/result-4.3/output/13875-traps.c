/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/mips/kernel/traps.c
asmlinkage void do_bp(struct pt_regs *regs)
{
get_user(instr[0], (u16 __user *)epc))
get_user(instr[1], (u16 __user *)(epc + 2)))
get_user(opcode, (unsigned int __user *)epc))
}
asmlinkage void do_tr(struct pt_regs *regs)
{
get_user(instr[0], (u16 __user *)(epc + 0)) ||
get_user(instr[1], (u16 __user *)(epc + 2)))
get_user(opcode, (u32 __user *)epc))
}
asmlinkage void do_ri(struct pt_regs *regs)
{
get_user(opcode, epc) >= 0)) {
default:
get_user(mmop[0], epc) < 0))
get_user(mmop[1], epc) < 0))
get_user(opcode, epc) < 0))
}
asmlinkage void do_cpu(struct pt_regs *regs)
{
case 0:
get_user(mmop[0], epc) < 0))
get_user(mmop[1], epc) < 0))
get_user(opcode, epc) < 0))
}
