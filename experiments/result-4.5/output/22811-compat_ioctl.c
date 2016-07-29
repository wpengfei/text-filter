/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/char/agp/compat_ioctl.c
static int compat_agpioc_reserve_wrap(struct agp_file_private *priv, void __user *arg)
{
copy_from_user(&ureserve, arg, sizeof(ureserve)))
copy_from_user(usegment, (void __user *) ureserve.seg_list,
}
