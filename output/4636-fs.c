/Users/wpf/Desktop/log/test/linux-2.6.9/arch/sparc64/solaris/fs.c
asmlinkage int solaris_fcntl(unsigned fd, unsigned cmd, u32 arg)
{
get_user (f.l_type, &p->l_type) ||
get_user (f.l_whence, &p->l_whence) ||
get_user (f.l_start, &p->l_start) ||
get_user (f.l_len, &p->l_len) ||
get_user (f.l_pid, &p->l_sysid))
get_user(length, &((struct sol_flock __user *)A(arg))->l_start))
}
