/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/video/fbmem.c
int
{
copy_from_user(&cursor_user, sprite, sizeof(struct fb_cursor_user)))
copy_from_user(red, cursor_user.image.cmap.red, len))
copy_from_user(green, cursor_user.image.cmap.green, len))
copy_from_user(blue, cursor_user.image.cmap.blue, len))
copy_from_user(transp,
copy_from_user(data, cursor_user.image.data, size) ||
copy_from_user(mask, cursor_user.mask, size))
}
static int 
{
copy_from_user(&var, argp, sizeof(var)))
copy_from_user(&cmap, argp, sizeof(cmap)))
copy_from_user(&cmap, argp, sizeof(cmap)))
copy_from_user(&var, argp, sizeof(var)))
copy_from_user(&con2fb, argp, sizeof(con2fb)))
copy_from_user(&con2fb, argp, sizeof(con2fb)))
}
