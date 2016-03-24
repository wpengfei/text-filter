/Users/wpf/Desktop/log/test/linux-2.6.9/fs/compat.c

static int compat_nfs_clnt_trans(struct nfsctl_arg *karg, struct compat_nfsctl_arg __user *arg)
{
copy_from_user(&karg->ca_client.cl_ident[0],
copy_from_user(&karg->ca_client.cl_addrlist[0],
copy_from_user(&karg->ca_client.cl_fhkey[0],
copy_from_user(&karg->ca_client.cl_addrlist[0],
copy_from_user(&karg->ca_client.cl_fhkey[0],
get_user(karg->ca_client.cl_fhkeytype,
get_user(karg->ca_client.cl_fhkeylen,
}
static int compat_nfs_exp_trans(struct nfsctl_arg *karg, struct compat_nfsctl_arg __user *arg)
{
copy_from_user(&karg->ca_export.ex_client[0],
copy_from_user(&karg->ca_export.ex_path[0],
get_user(karg->ca_export.ex_dev,
get_user(karg->ca_export.ex_ino,
get_user(karg->ca_export.ex_flags,
get_user(karg->ca_export.ex_anon_uid,
get_user(karg->ca_export.ex_anon_gid,
get_user(karg->ca_export.ex_ino,
get_user(karg->ca_export.ex_flags,
get_user(karg->ca_export.ex_anon_uid,
get_user(karg->ca_export.ex_anon_gid,
get_user(karg->ca_export.ex_flags,
get_user(karg->ca_export.ex_anon_uid,
get_user(karg->ca_export.ex_anon_gid,
get_user(karg->ca_export.ex_anon_uid,
get_user(karg->ca_export.ex_anon_gid,
}
static int compat_nfs_getfd_trans(struct nfsctl_arg *karg, struct compat_nfsctl_arg __user *arg)
{
copy_from_user(&karg->ca_getfd.gd_addr,
copy_from_user(&karg->ca_getfd.gd_path,
}
static int compat_nfs_getfs_trans(struct nfsctl_arg *karg, struct compat_nfsctl_arg __user *arg)
{
copy_from_user(&karg->ca_getfs.gd_addr,
copy_from_user(&karg->ca_getfs.gd_path,
}
