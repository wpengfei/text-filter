/Users/wpf/Desktop/log/test/linux-2.6.9/ipc/compat_mq.c

static int get_compat_sigevent(struct sigevent *event,
{
get_user(event->sigev_value.sival_int,
get_user(event->sigev_notify_thread_id,
}
