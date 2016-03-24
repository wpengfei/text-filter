/Users/wpf/Desktop/log/test/linux-2.6.9/arch/mips/kernel/signal_n32.c
asmlinkage void sysn32_rt_sigreturn(nabi_no_regargs struct pt_regs regs)
{
copy_from_user(&set, &frame->rs_uc.uc_sigmask, sizeof(set)))
get_user(sp, &frame->rs_uc.uc_stack.ss_sp))
get_user(st.ss_size, &frame->rs_uc.uc_stack.ss_size))
get_user(st.ss_flags, &frame->rs_uc.uc_stack.ss_flags))
}
