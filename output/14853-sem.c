/Users/wpf/Desktop/log/test/linux-2.6.9/ipc/sem.c
static inline unsigned long copy_semid_from_user(struct sem_setbuf *out, void __user *buf, int version)
{
copy_from_user(&tbuf, buf, sizeof(tbuf)))
copy_from_user(&tbuf_old, buf, sizeof(tbuf_old)))
}
asmlinkage long sys_semtimedop(int semid, struct sembuf __user *tsops,
{
copy_from_user (sops, tsops, nsops * sizeof(*tsops))) {
copy_from_user(&_timeout, timeout, sizeof(*timeout))) {
}
