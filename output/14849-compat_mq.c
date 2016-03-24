/Users/wpf/Desktop/log/test/linux-2.6.9/ipc/compat_mq.c
static inline int get_compat_mq_attr(struct mq_attr *attr,
{
get_user(attr->mq_flags, &uattr->mq_flags)
get_user(attr->mq_maxmsg, &uattr->mq_maxmsg)
get_user(attr->mq_msgsize, &uattr->mq_msgsize)
get_user(attr->mq_curmsgs, &uattr->mq_curmsgs);
}
static int get_compat_sigevent(struct sigevent *event,
{
get_user(event->sigev_value.sival_int,
get_user(event->sigev_signo, &u_event->sigev_signo)
get_user(event->sigev_notify, &u_event->sigev_notify)
get_user(event->sigev_notify_thread_id,
}
