/Users/wpf/Desktop/log/test/linux-2.6.9/ipc/mqueue.c
asmlinkage long sys_mq_notify(mqd_t mqdes,
{
copy_from_user(&notification, u_notification,
copy_from_user(nc->data,
}
