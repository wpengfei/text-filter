/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/xen/gntdev.c
static long gntdev_ioctl_map_grant_ref(struct gntdev_priv *priv,
{
copy_from_user(&op, u, sizeof(op)) != 0)
copy_from_user(map->grants, &u->refs,
}
static long gntdev_ioctl_grant_copy(struct gntdev_priv *priv, void __user *u)
{
copy_from_user(&copy, u, sizeof(copy)))
copy_from_user(&seg, &copy.segments[i], sizeof(seg))) {
}
