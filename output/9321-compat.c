/Users/wpf/Desktop/log/test/linux-2.6.9/fs/compat.c
asmlinkage long compat_sys_utime(char __user *filename, struct compat_utimbuf __user *t)
{
get_user(tv[0].tv_sec, &t->actime) ||
get_user(tv[1].tv_sec, &t->modtime))
}
asmlinkage long compat_sys_utimes(char __user *filename, struct compat_timeval __user *t)
{
get_user(tv[0].tv_sec, &t[0].tv_sec) ||
get_user(tv[0].tv_usec, &t[0].tv_usec) ||
get_user(tv[1].tv_sec, &t[1].tv_sec) ||
get_user(tv[1].tv_usec, &t[1].tv_usec))
}
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
static ssize_t compat_do_readv_writev(int type, struct file *file,
{
get_user(len, &uvector->iov_len) ||
get_user(buf, &uvector->iov_base)) {
}
static int compat_copy_strings(int argc, compat_uptr_t __user *argv,
{
get_user(str, argv+argc) ||
copy_from_user(kaddr+offset, compat_ptr(str),
}
int compat_get_fd_set(unsigned long nr, compat_ulong_t __user *ufdset,
{
get_user(l, ufdset);
get_user(h, ufdset+1);
get_user(*fdset, ufdset);
}
asmlinkage long
{
get_user(sec, &tvp->tv_sec))
get_user(usec, &tvp->tv_usec)))
}
static int compat_nfs_svc_trans(struct nfsctl_arg *karg, struct compat_nfsctl_arg __user *arg)
{
get_user(karg->ca_version, &arg->ca32_version);
get_user(karg->ca_svc.svc_port, &arg->ca32_svc.svc32_port);
get_user(karg->ca_svc.svc_nthreads, &arg->ca32_svc.svc32_nthreads);
}
static int compat_nfs_clnt_trans(struct nfsctl_arg *karg, struct compat_nfsctl_arg __user *arg)
{
get_user(karg->ca_version, &arg->ca32_version);
copy_from_user(&karg->ca_client.cl_ident[0],
get_user(karg->ca_client.cl_naddr, &arg->ca32_client.cl32_naddr);
copy_from_user(&karg->ca_client.cl_addrlist[0],
get_user(karg->ca_client.cl_fhkeytype,
get_user(karg->ca_client.cl_fhkeylen,
copy_from_user(&karg->ca_client.cl_fhkey[0],
}
static int compat_nfs_exp_trans(struct nfsctl_arg *karg, struct compat_nfsctl_arg __user *arg)
{
get_user(karg->ca_version, &arg->ca32_version);
copy_from_user(&karg->ca_export.ex_client[0],
copy_from_user(&karg->ca_export.ex_path[0],
get_user(karg->ca_export.ex_dev,
get_user(karg->ca_export.ex_ino,
get_user(karg->ca_export.ex_flags,
get_user(karg->ca_export.ex_anon_uid,
get_user(karg->ca_export.ex_anon_gid,
}
static int compat_nfs_getfd_trans(struct nfsctl_arg *karg, struct compat_nfsctl_arg __user *arg)
{
get_user(karg->ca_version, &arg->ca32_version);
copy_from_user(&karg->ca_getfd.gd_addr,
copy_from_user(&karg->ca_getfd.gd_path,
get_user(karg->ca_getfd.gd_version,
}
static int compat_nfs_getfs_trans(struct nfsctl_arg *karg, struct compat_nfsctl_arg __user *arg)
{
get_user(karg->ca_version, &arg->ca32_version);
copy_from_user(&karg->ca_getfs.gd_addr,
copy_from_user(&karg->ca_getfs.gd_path,
get_user(karg->ca_getfs.gd_maxlen,
}
