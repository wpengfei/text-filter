/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/media/v4l2-core/v4l2-compat-ioctl32.c
static int get_v4l2_buffer32(struct v4l2_buffer *kp, struct v4l2_buffer32 __user *up)
{
get_user(kp->length, &up->length))
get_user(kp->length, &up->length) ||
get_user(kp->m.offset, &up->m.offset))
get_user(kp->length, &up->length) ||
get_user(kp->m.offset, &up->m.offset))
}
