/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/xen/gntdev.c
static long gntdev_ioctl_map_grant_ref(struct gntdev_priv *priv,
{
copy_from_user(&op, u, sizeof(op)) != 0)
copy_from_user(map->grants, &u->refs,
}
