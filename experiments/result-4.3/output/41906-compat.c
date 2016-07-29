/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/fs/quota/compat.c
asmlinkage long sys32_quotactl(unsigned int cmd, const char __user *special,
{
case Q_XGETQSTAT:
get_user(data, &fsqstat->qs_uquota.qfs_nextents) ||
get_user(data, &fsqstat->qs_gquota.qfs_nextents) ||
get_user(xdata, &fsqstat->qs_iwarnlimit) ||
}
