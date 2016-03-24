/Users/wpf/Desktop/log/test/linux-2.6.9/fs/quota.c

static int do_quotactl(struct super_block *sb, int type, int cmd, qid_t id, void __user *addr)
{
copy_from_user(&info, addr, sizeof(info)))
copy_from_user(&idq, addr, sizeof(idq)))
copy_from_user(&flags, addr, sizeof(flags)))
copy_from_user(&fdq, addr, sizeof(fdq)))
copy_from_user(&idq, addr, sizeof(idq)))
copy_from_user(&flags, addr, sizeof(flags)))
copy_from_user(&fdq, addr, sizeof(fdq)))
copy_from_user(&flags, addr, sizeof(flags)))
copy_from_user(&fdq, addr, sizeof(fdq)))
}
