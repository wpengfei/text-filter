/Users/wpf/Desktop/log/test/linux-2.6.9/arch/sparc64/kernel/sys_sparc32.c

static int do_sys32_semctl(int first, int second, int third,
{
get_user (s.sem_perm.uid, &usp->sem_perm.uid);
get_user (s.sem_perm.uid, &usp->sem_perm.uid);
get_user (s.sem_perm.gid, &usp->sem_perm.gid);
get_user (s.sem_perm.gid, &usp->sem_perm.gid);
get_user (s.sem_perm.mode, &usp->sem_perm.mode);
get_user (s.sem_perm.mode, &usp->sem_perm.mode);
}
static int do_sys32_msgctl(int first, int second, void __user *uptr)
{
get_user (m.msg_perm.uid,
get_user (m.msg_perm.gid,
get_user (m.msg_perm.mode,
get_user (m.msg_qbytes,
get_user(m.msg_perm.uid,
get_user(m.msg_perm.gid,
get_user(m.msg_perm.mode,
get_user(m.msg_qbytes,
get_user (m.msg_perm.gid,
get_user (m.msg_perm.mode,
get_user (m.msg_qbytes,
get_user(m.msg_perm.uid,
get_user(m.msg_perm.gid,
get_user(m.msg_perm.mode,
get_user(m.msg_qbytes,
get_user (m.msg_perm.mode,
get_user (m.msg_qbytes,
get_user(m.msg_perm.uid,
get_user(m.msg_perm.gid,
get_user(m.msg_perm.mode,
get_user(m.msg_qbytes,
get_user (m.msg_qbytes,
get_user(m.msg_perm.uid,
get_user(m.msg_perm.gid,
get_user(m.msg_perm.mode,
get_user(m.msg_qbytes,
get_user(m.msg_perm.uid,
get_user(m.msg_perm.gid,
get_user(m.msg_perm.mode,
get_user(m.msg_qbytes,
get_user(m.msg_perm.gid,
get_user(m.msg_perm.mode,
get_user(m.msg_qbytes,
get_user(m.msg_perm.mode,
get_user(m.msg_qbytes,
}
static int do_sys32_shmctl(int first, int second, void __user *uptr)
{
get_user(s.shm_perm.uid,
get_user(s.shm_perm.gid,
get_user(s.shm_perm.mode,
get_user(s.shm_perm.uid,
get_user(s.shm_perm.gid,
get_user(s.shm_perm.mode,
get_user(s.shm_perm.gid,
get_user(s.shm_perm.mode,
get_user(s.shm_perm.uid,
get_user(s.shm_perm.gid,
get_user(s.shm_perm.mode,
get_user(s.shm_perm.mode,
get_user(s.shm_perm.uid,
get_user(s.shm_perm.gid,
get_user(s.shm_perm.mode,
get_user(s.shm_perm.uid,
get_user(s.shm_perm.gid,
get_user(s.shm_perm.mode,
get_user(s.shm_perm.gid,
get_user(s.shm_perm.mode,
}
