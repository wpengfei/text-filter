/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/x86/kernel/vm86_32.c
static long do_sys_vm86(struct vm86plus_struct __user *user_vm86, bool plus)
{
get_user_try {
get_user_ex(vm86regs.pt.bx, &user_vm86->regs.ebx);
get_user_ex(vm86regs.pt.cx, &user_vm86->regs.ecx);
get_user_ex(vm86regs.pt.dx, &user_vm86->regs.edx);
get_user_ex(vm86regs.pt.si, &user_vm86->regs.esi);
get_user_ex(vm86regs.pt.di, &user_vm86->regs.edi);
get_user_ex(vm86regs.pt.bp, &user_vm86->regs.ebp);
get_user_ex(vm86regs.pt.ax, &user_vm86->regs.eax);
get_user_ex(vm86regs.pt.ip, &user_vm86->regs.eip);
get_user_ex(seg, &user_vm86->regs.cs);
get_user_ex(vm86regs.pt.flags, &user_vm86->regs.eflags);
get_user_ex(vm86regs.pt.sp, &user_vm86->regs.esp);
get_user_ex(seg, &user_vm86->regs.ss);
get_user_ex(vm86regs.es, &user_vm86->regs.es);
get_user_ex(vm86regs.ds, &user_vm86->regs.ds);
get_user_ex(vm86regs.fs, &user_vm86->regs.fs);
get_user_ex(vm86regs.gs, &user_vm86->regs.gs);
get_user_ex(vm86->flags, &user_vm86->flags);
get_user_ex(vm86->screen_bitmap, &user_vm86->screen_bitmap);
get_user_ex(vm86->cpu_type, &user_vm86->cpu_type);
get_user_catch(err);
copy_from_user(&vm86->int_revectored,
copy_from_user(&vm86->int21_revectored,
copy_from_user(&vm86->vm86plus, &user_vm86->vm86plus,
}
