/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/mmc/card/block.c
static struct mmc_blk_ioc_data *mmc_blk_ioctl_copy_from_user(
{
copy_from_user(&idata->ic, user, sizeof(idata->ic))) {
copy_from_user(idata->buf, (void __user *)(unsigned long)
}
static int mmc_blk_ioctl_multi_cmd(struct block_device *bdev,
{
copy_from_user(&num_of_cmds, &user->num_of_cmds,
copy_from_user(&cmds[i]);
}
