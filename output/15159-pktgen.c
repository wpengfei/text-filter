/Users/wpf/Desktop/log/test/linux-2.6.9/net/core/pktgen.c
static int proc_write(struct file *file, const char __user *user_buffer,
{
copy_from_user(name, &user_buffer[i], len))
copy_from_user(info->outdev, &user_buffer[i], len))
copy_from_user(f, &user_buffer[i], len))
copy_from_user(info->dst_min, &user_buffer[i], len))
copy_from_user(info->dst_max, &user_buffer[i], len))
copy_from_user(info->src_min, &user_buffer[i], len))
copy_from_user(info->src_max, &user_buffer[i], len))
copy_from_user(valstr, &user_buffer[i], len))
copy_from_user(valstr, &user_buffer[i], len))
}
