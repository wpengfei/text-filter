/Users/wpf/Desktop/log/test/linux-2.6.9/net/socket.c
asmlinkage long sys_sendmsg(int fd, struct msghdr __user *msg, unsigned flags)
{
copy_from_user(&msg_sys, msg, sizeof(struct msghdr)))
copy_from_user(ctl_buf, (void __user *) msg_sys.msg_control, ctl_len))
}
asmlinkage long sys_socketcall(int call, unsigned long __user *args)
{
copy_from_user should be SMP safe. */
copy_from_user(a, args, nargs[call]))
}
