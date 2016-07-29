/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/char/agp/frontend.c
static int agpioc_reserve_wrap(struct agp_file_private *priv, void __user *arg)
{
copy_from_user(&reserve, arg, sizeof(struct agp_region)))
copy_from_user(segment, (void __user *) reserve.seg_list,
}
