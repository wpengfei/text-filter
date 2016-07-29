/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/vhost/vhost.c
static long vhost_set_memory(struct vhost_dev *d, struct vhost_memory __user *m)
{
copy_from_user(&mem, m, size))
copy_from_user(newmem->regions, m->regions,
}
int vhost_get_vq_desc(struct vhost_virtqueue *vq,
{
get_user(avail_idx, &vq->avail->idx))) {
get_user(ring_head,
copy_from_user(&desc, vq->desc + i, sizeof desc);
}
static bool vhost_notify(struct vhost_dev *dev, struct vhost_virtqueue *vq)
{
get_user(flags, &vq->avail->flags)) {
get_user(event, vhost_used_event(vq))) {
}
