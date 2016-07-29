/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/staging/rdma/hfi1/user_sdma.c
int hfi1_user_sdma_process_request(struct file *fp, struct iovec *iovec,
{
copy_from_user(&info, iovec[idx].iov_base, sizeof(info));
copy_from_user(&req->hdr, iovec[idx].iov_base + sizeof(info),
case is that the
copy_from_user(req->tids, iovec[idx].iov_base,
}
