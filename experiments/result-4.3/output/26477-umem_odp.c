/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/infiniband/core/umem_odp.c
int ib_umem_odp_map_dma_pages(struct ib_umem *umem, u64 user_virt, u64 bcnt,
{
get_user_pages. However, this make the code much more
cases).
get_user_pages(owning_process, owning_mm, user_virt,
}
