/Users/wpf/Desktop/log/test/linux-2.6.9/arch/sparc64/kernel/sys_sunos32.c
asmlinkage int sunos_select(int width, u32 inp, u32 outp, u32 exp, u32 tvp_x)
{
get_user(sec, &tvp->tv_sec);
get_user(usec, &tvp->tv_usec);
}
static int sunos_nfs_mount(char *dir_name, int linux_flags, void __user *data)
{
copy_from_user(&sunos_mount, data, sizeof(sunos_mount)))
copy_from_user(&linux_nfs_mount.addr, sunos_mount.addr,
copy_from_user(&linux_nfs_mount.root, sunos_mount.fh,
}
static inline int sunos_msqid_get(struct msqid_ds32 __user *user,
{
get_user(kern->msg_perm.key, &user->msg_perm.key)		||
get_user(kern->msg_perm.uid, &user->msg_perm.uid)		||
get_user(kern->msg_perm.gid, &user->msg_perm.gid)		||
get_user(kern->msg_perm.cuid, &user->msg_perm.cuid)	||
get_user(kern->msg_perm.cgid, &user->msg_perm.cgid)	||
get_user(kern->msg_stime, &user->msg_stime)		||
get_user(kern->msg_rtime, &user->msg_rtime)		||
get_user(kern->msg_ctime, &user->msg_ctime)		||
get_user(kern->msg_ctime, &user->msg_cbytes)		||
get_user(kern->msg_ctime, &user->msg_qnum)		||
get_user(kern->msg_ctime, &user->msg_qbytes)		||
get_user(kern->msg_ctime, &user->msg_lspid)		||
get_user(kern->msg_ctime, &user->msg_lrpid))
}
static inline int sunos_msgbuf_get(struct msgbuf32 __user *user, struct msgbuf *kern, int len)
{
get_user(kern->mtype, &user->mtype)	||
copy_from_user(kern->mtext, &user->mtext, len))
}
static inline int sunos_shmid_get(struct shmid_ds32 __user *user,
{
get_user(kern->shm_perm.key, &user->shm_perm.key)		||
get_user(kern->shm_perm.uid, &user->shm_perm.uid)		||
get_user(kern->shm_perm.gid, &user->shm_perm.gid)		||
get_user(kern->shm_perm.cuid, &user->shm_perm.cuid)	||
get_user(kern->shm_perm.cgid, &user->shm_perm.cgid)	||
get_user(kern->shm_segsz, &user->shm_segsz)		||
get_user(kern->shm_atime, &user->shm_atime)		||
get_user(kern->shm_dtime, &user->shm_dtime)		||
get_user(kern->shm_ctime, &user->shm_ctime)		||
get_user(kern->shm_cpid, &user->shm_cpid)			||
get_user(kern->shm_lpid, &user->shm_lpid)			||
get_user(kern->shm_nattch, &user->shm_nattch))
}
asmlinkage int sunos_sigaction (int sig,
{
get_user(u_handler, &act->sa_handler) ||
get_user(new_ka.sa.sa_flags, &act->sa_flags))
get_user(mask, &act->sa_mask);
}
