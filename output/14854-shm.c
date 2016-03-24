/Users/wpf/Desktop/log/test/linux-2.6.9/ipc/shm.c
static inline unsigned long copy_shmid_from_user(struct shm_setbuf *out, void __user *buf, int version)
{
copy_from_user(&tbuf, buf, sizeof(tbuf)))
copy_from_user(&tbuf_old, buf, sizeof(tbuf_old)))
}
