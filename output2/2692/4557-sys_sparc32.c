/Users/wpf/Documents/workspace/text-filter/test/linux-2.6.9/arch/sparc64/kernel/sys_sparc32.c
static int do_sys32_semctl(int first, int second, int third,
{
get_user (s.sem_perm.uid, &usp->sem_perm.uid);
get_user (s.sem_perm.gid, &usp->sem_perm.gid);
get_user (s.sem_perm.mode, &usp->sem_perm.mode);
get_user (s.sem_perm.uid, &usp->sem_perm.uid);
get_user (s.sem_perm.gid, &usp->sem_perm.gid);
get_user (s.sem_perm.mode, &usp->sem_perm.mode);
}
