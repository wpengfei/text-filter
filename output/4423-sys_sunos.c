/Users/wpf/Desktop/log/test/linux-2.6.9/arch/sparc/kernel/sys_sunos.c
asmlinkage int sunos_select(int width, fd_set __user *inp, fd_set __user *outp,
{
get_user(sec, &tvp->tv_sec);
get_user(usec, &tvp->tv_usec);
}
static int sunos_nfs_mount(char *dir_name, int linux_flags, void __user *data)
{
copy_from_user(&sunos_mount, data, sizeof(sunos_mount)))
copy_from_user(&linux_nfs_mount.addr,sunos_mount.addr,
copy_from_user(&linux_nfs_mount.root,sunos_mount.fh,
}
asmlinkage int
{
get_user(new_ka.sa.sa_handler, &act->sa_handler) ||
get_user(new_ka.sa.sa_flags, &act->sa_flags))
get_user(mask, &act->sa_mask);
}
