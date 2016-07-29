/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/arm/kernel/sys_oabi-compat.c
asmlinkage long sys_oabi_semtimedop(int semid,
{
get_user_error(sops[i].sem_num, &tsops->sem_num, err);
get_user_error(sops[i].sem_op,  &tsops->sem_op,  err);
get_user_error(sops[i].sem_flg, &tsops->sem_flg, err);
copy_from_user(&local_timeout, timeout, sizeof(*timeout));
}
asmlinkage long sys_oabi_sendmsg(int fd, struct user_msghdr __user *msg, unsigned flags)
{
get_user(msg_namelen, &msg->msg_namelen) == 0 &&
get_user(addr, &msg->msg_name) == 0 &&
get_user(sa_family, &addr->sa_family) == 0 &&
}
