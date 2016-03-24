/Users/wpf/Desktop/log/test/linux-2.6.9/arch/um/kernel/tt/sys-i386/sigcontext.c
int copy_sc_from_user_tt(void *to_ptr, void *from_ptr, void *data)
{
copy_from_user_proc(to, from, sizeof(*to));
copy_from_user_proc(&to->fpstate, &to_fp,
copy_from_user_proc(to_fp, from_fp, arch->fpstate_size);
}
