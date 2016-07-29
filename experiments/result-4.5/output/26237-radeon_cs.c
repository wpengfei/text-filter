/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/gpu/drm/radeon/radeon_cs.c
int radeon_cs_parser_init(struct radeon_cs_parser *p, void *data)
{
copy_from_user(p->chunks_array, chunk_array_ptr,
copy_from_user(&user_chunk, chunk_ptr,
copy_from_user(p->chunks[i].kdata, cdata, size)) {
}
static int radeon_cs_ib_fill(struct radeon_device *rdev, struct radeon_cs_parser *parser)
{
copy_from_user(parser->const_ib.ptr,
copy_from_user(parser->ib.ptr, ib_chunk->user_ptr, ib_chunk->length_dw * 4))
}
