/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/media/v4l2-core/v4l2-ctrls.c
static int user_to_ptr(struct v4l2_ext_control *c,
{
copy_from_user(ptr.p, c->ptr, c->size) ? -EFAULT : 0;
case V4L2_CTRL_TYPE_STRING:
copy_from_user(ptr.p_char, c->string, size) ? -EFAULT : 0;
}
