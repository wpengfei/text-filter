/Users/wpf/Desktop/log/test/linux-2.6.9/arch/um/kernel/skas/sys-i386/sigcontext.c
int copy_sc_from_user_skas(int pid, union uml_pt_regs *regs, void *from_ptr)
{
copy_from_user_proc(&sc, from, sizeof(sc));
copy_from_user_proc(fpregs, sc.fpstate, sizeof(fpregs));
}
