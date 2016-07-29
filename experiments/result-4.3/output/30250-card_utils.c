/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/misc/genwqe/card_utils.c
int genwqe_alloc_sync_sgl(struct genwqe_dev *cd, struct genwqe_sgl *sgl,
{
copy_from_user(sgl->fpage + sgl->fpage_offs,
copy_from_user(sgl->lpage, user_addr + user_size -
}
int genwqe_user_vmap(struct genwqe_dev *cd, struct dma_mapping *m, void *uaddr,
{
get_user_pages_fast(data & PAGE_MASK, /* page aligned addr */
get_user_pages can be killed by signals. */
}
