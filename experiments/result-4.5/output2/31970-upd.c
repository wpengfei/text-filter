/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/mtd/ubi/upd.c
int ubi_more_update_data(struct ubi_device *ubi, struct ubi_volume *vol,
{
copy_from_user(vol->upd_buf + offs, buf, len);
copy_from_user(vol->upd_buf, buf, len);
}
