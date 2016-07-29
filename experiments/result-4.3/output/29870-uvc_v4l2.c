/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/media/usb/uvc/uvc_v4l2.c
static int uvc_v4l2_get_xu_mapping(struct uvc_xu_control_mapping *kp,
{
copy_from_user(kp, up, offsetof(typeof(*up), menu_info)) ||
get_user(kp->menu_count, &up->menu_count))
get_user(p, &up->menu_info))
}
static int uvc_v4l2_get_xu_query(struct uvc_xu_control_query *kp,
{
copy_from_user(kp, up, offsetof(typeof(*up), data)))
get_user(p, &up->data))
}
