/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/media/media-device.c
static long media_device_enum_links32(struct media_device *mdev,
{
get_user(links.entity, &ulinks->entity)
get_user(pads_ptr, &ulinks->pads)
get_user(links_ptr, &ulinks->links))
}
