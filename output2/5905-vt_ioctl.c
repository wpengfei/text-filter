/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/char/vt_ioctl.c

int vt_ioctl(struct tty_struct *tty, struct file * file,
{
copy_from_user(&kbrep, up, sizeof(struct kbd_repeat)))
copy_from_user(&tmp, up, sizeof(struct vt_mode)))
copy_from_user(&op, up, sizeof(op)))
copy_from_user(&ui, up, sizeof(struct unimapinit));
copy_from_user(&tmp, up, sizeof(struct vt_mode)))
copy_from_user(&op, up, sizeof(op)))
copy_from_user(&ui, up, sizeof(struct unimapinit));
copy_from_user(&op, up, sizeof(op)))
copy_from_user(&ui, up, sizeof(struct unimapinit));
}
