/Users/wpf/Desktop/log/test/linux-2.6.9/arch/i386/math-emu/reg_ld_str.c
void frstor(fpu_addr_modes addr_modes, u_char __user *data_address)
{
copy_from_user(register_base+offset, s, other);
copy_from_user(register_base, s+other, offset);
}
