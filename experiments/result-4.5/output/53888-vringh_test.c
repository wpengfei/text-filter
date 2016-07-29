/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/tools/virtio/vringh_test.c
static inline int vringh_get_head(struct vringh *vrh, u16 *head)
{
get_user(avail_idx, &vrh->vring.avail->idx);
get_user(*head, &vrh->vring.avail->ring[i]);
}
