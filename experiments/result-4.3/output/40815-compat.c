/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/fs/compat.c
static int get_compat_flock(struct flock *kfl, struct compat_flock __user *ufl)
{
get_user(kfl->l_type, &ufl->l_type) ||
get_user(kfl->l_whence, &ufl->l_whence) ||
get_user(kfl->l_start, &ufl->l_start) ||
get_user(kfl->l_len, &ufl->l_len) ||
get_user(kfl->l_pid, &ufl->l_pid))
}
static int get_compat_flock64(struct flock *kfl, struct compat_flock64 __user *ufl)
{
get_user(kfl->l_type, &ufl->l_type) ||
get_user(kfl->l_whence, &ufl->l_whence) ||
get_user(kfl->l_start, &ufl->l_start) ||
get_user(kfl->l_len, &ufl->l_len) ||
get_user(kfl->l_pid, &ufl->l_pid))
}
int compat_get_fd_set(unsigned long nr, compat_ulong_t __user *ufdset,
{
get_user(h, ufdset+1))
get_user(*fdset, ufdset))
}
static long do_compat_pselect(int n, compat_ulong_t __user *inp,
{
copy_from_user(&ts, tsp, sizeof(ts)))
copy_from_user(&ss32, sigmask, sizeof(ss32)))
}
