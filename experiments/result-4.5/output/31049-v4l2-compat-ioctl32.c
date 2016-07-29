/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/media/v4l2-core/v4l2-compat-ioctl32.c
static int get_v4l2_window32(struct v4l2_window *kp, struct v4l2_window32 __user *up)
{
copy_from_user(&kp->w, &up->w, sizeof(up->w)) ||
get_user(kp->field, &up->field) ||
get_user(kp->chromakey, &up->chromakey) ||
get_user(kp->clipcount, &up->clipcount))
get_user(p, &up->clips))
}
static int get_v4l2_buffer32(struct v4l2_buffer *kp, struct v4l2_buffer32 __user *up)
{
get_user(kp->index, &up->index) ||
get_user(kp->type, &up->type) ||
get_user(kp->flags, &up->flags) ||
get_user(kp->memory, &up->memory))
get_user(kp->bytesused, &up->bytesused) ||
get_user(kp->field, &up->field) ||
get_user(kp->timestamp.tv_sec, &up->timestamp.tv_sec) ||
get_user(kp->timestamp.tv_usec,
get_user(kp->length, &up->length))
get_user(p, &up->m.planes))
case V4L2_MEMORY_MMAP:
get_user(kp->length, &up->length) ||
get_user(kp->m.offset, &up->m.offset))
case V4L2_MEMORY_USERPTR:
get_user(kp->length, &up->length) ||
get_user(tmp, &up->m.userptr))
case V4L2_MEMORY_OVERLAY:
get_user(kp->m.offset, &up->m.offset))
case V4L2_MEMORY_DMABUF:
get_user(kp->m.fd, &up->m.fd))
}
static int get_v4l2_framebuffer32(struct v4l2_framebuffer *kp, struct v4l2_framebuffer32 __user *up)
{
get_user(tmp, &up->base) ||
get_user(kp->capability, &up->capability) ||
get_user(kp->flags, &up->flags) ||
copy_from_user(&kp->fmt, &up->fmt, sizeof(up->fmt)))
}
static int get_v4l2_ext_controls32(struct v4l2_ext_controls *kp, struct v4l2_ext_controls32 __user *up)
{
get_user(kp->which, &up->which) ||
get_user(kp->count, &up->count) ||
get_user(kp->error_idx, &up->error_idx) ||
copy_from_user(kp->reserved, up->reserved,
get_user(p, &up->controls))
get_user(id, &kcontrols->id))
get_user(p, &ucontrols->string))
}
static int put_v4l2_ext_controls32(struct v4l2_ext_controls *kp, struct v4l2_ext_controls32 __user *up)
{
get_user(p, &up->controls))
get_user(id, &kcontrols->id))
}
static int get_v4l2_edid32(struct v4l2_edid *kp, struct v4l2_edid32 __user *up)
{
get_user(kp->pad, &up->pad) ||
get_user(kp->start_block, &up->start_block) ||
get_user(kp->blocks, &up->blocks) ||
get_user(tmp, &up->edid) ||
copy_from_user(kp->reserved, up->reserved, sizeof(kp->reserved)))
}
