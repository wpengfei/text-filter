/Users/wpf/Desktop/log/test/linux-2.6.9/sound/oss/mpu401.c
static int mpu401_ioctl(int dev, unsigned cmd, void __user *arg)
{
get_user(val, (int __user *)arg))
copy_from_user(&rec, arg, sizeof(rec)))
}
static int mpu_timer_ioctl(int dev, unsigned int command, void __user *arg)
{
get_user(parm, p))
get_user(val, p))
get_user(val, p))
get_user(val, p))
get_user(metronome_mode, p))
}
