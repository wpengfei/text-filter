/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/ipc/compat_mq.c
static inline int get_compat_mq_attr(struct mq_attr *attr,
{
get_user(attr->mq_flags, &uattr->mq_flags)
get_user(attr->mq_maxmsg, &uattr->mq_maxmsg)
get_user(attr->mq_msgsize, &uattr->mq_msgsize)
get_user(attr->mq_curmsgs, &uattr->mq_curmsgs);
}
