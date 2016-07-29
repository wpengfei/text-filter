/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/ipc/compat.c
static inline int __get_compat_ipc64_perm(struct ipc64_perm *p64,
{
get_user(p64->uid, &up64->uid);
get_user(p64->gid, &up64->gid);
get_user(p64->mode, &up64->mode);
}
static inline int __get_compat_ipc_perm(struct ipc64_perm *p,
{
get_user(p->uid, &up->uid);
get_user(p->gid, &up->gid);
get_user(p->mode, &up->mode);
}
