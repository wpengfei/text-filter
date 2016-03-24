/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/input/joydev.c

static int joydev_ioctl(struct inode *inode, struct file *file, unsigned int cmd, unsigned long arg)
{
copy_from_user(&joydev->glue.JS_CORR, argp,
copy_from_user(&joydev->glue, argp,
copy_from_user(joydev->corr, argp,
copy_from_user(joydev->abspam, argp, sizeof(__u8) * ABS_MAX))
copy_from_user(joydev->keypam, argp, sizeof(__u16) * (KEY_MAX - BTN_MISC)))
copy_from_user(&joydev->glue, argp,
copy_from_user(joydev->corr, argp,
copy_from_user(joydev->abspam, argp, sizeof(__u8) * ABS_MAX))
copy_from_user(joydev->keypam, argp, sizeof(__u16) * (KEY_MAX - BTN_MISC)))
copy_from_user(joydev->corr, argp,
copy_from_user(joydev->abspam, argp, sizeof(__u8) * ABS_MAX))
copy_from_user(joydev->keypam, argp, sizeof(__u16) * (KEY_MAX - BTN_MISC)))
copy_from_user(joydev->abspam, argp, sizeof(__u8) * ABS_MAX))
copy_from_user(joydev->keypam, argp, sizeof(__u16) * (KEY_MAX - BTN_MISC)))
}
