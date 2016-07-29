/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/block/nvme-scsi.c
static int nvme_trans_copy_from_user(struct sg_io_hdr *hdr, void *to,
{
copy_from_user(&sgl, hdr->dxferp +
copy_from_user(index, sgl.iov_base, xfer_len))
copy_from_user(to, hdr->dxferp, n))
}
