/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/mtd/mtdchar.c
static int mtd_ioctl(struct inode *inode, struct file *file,
{
copy_from_user(&ur, argp, sizeof(struct region_info_user)))
copy_from_user(&erase->addr, argp,
copy_from_user(&buf, argp, sizeof(struct mtd_oob_buf)))
copy_from_user(databuf, buf.ptr, buf.length)) {
copy_from_user(&buf, argp, sizeof(struct mtd_oob_buf)))
copy_from_user(&info, argp, sizeof(info)))
copy_from_user(&info, argp, sizeof(info)))
copy_from_user(&mtd->oobinfo, argp, sizeof(struct nand_oobinfo)))
copy_from_user(&offs, argp, sizeof(loff_t)))
copy_from_user(&offs, argp, sizeof(loff_t)))
} /* memory_ioctl */
