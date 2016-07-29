/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/block/compat_ioctl.c
static int compat_cdrom_generic_command(struct block_device *bdev, fmode_t mode,
{
get_user(data, &cgc32->buffer) ||
get_user(data, &cgc32->sense) ||
get_user(dir, &cgc32->data_direction) ||
get_user(itmp, &cgc32->quiet) ||
get_user(itmp, &cgc32->timeout) ||
get_user(data, &cgc32->reserved[0]) ||
}
static int compat_blkpg_ioctl(struct block_device *bdev, fmode_t mode,
{
get_user(n, &ua32->op);
get_user(n, &ua32->flags);
get_user(n, &ua32->datalen);
get_user(udata, &ua32->data);
}
static int compat_fd_ioctl(struct block_device *bdev, fmode_t mode,
{
case FDGETPRM32:
get_user(f->size, &uf->size);
get_user(f->sect, &uf->sect);
get_user(f->head, &uf->head);
get_user(f->track, &uf->track);
get_user(f->stretch, &uf->stretch);
get_user(f->gap, &uf->gap);
get_user(f->rate, &uf->rate);
get_user(f->spec1, &uf->spec1);
get_user(f->fmt_gap, &uf->fmt_gap);
get_user(name, &uf->name);
case FDGETDRVPRM32:
get_user(f->cmos, &uf->cmos);
get_user(f->max_dtr, &uf->max_dtr);
get_user(f->hlt, &uf->hlt);
get_user(f->hut, &uf->hut);
get_user(f->srt, &uf->srt);
get_user(f->spinup, &uf->spinup);
get_user(f->spindown, &uf->spindown);
get_user(f->spindown_offset, &uf->spindown_offset);
get_user(f->select_delay, &uf->select_delay);
get_user(f->rps, &uf->rps);
get_user(f->tracks, &uf->tracks);
get_user(f->timeout, &uf->timeout);
get_user(f->interleave_sect, &uf->interleave_sect);
copy_from_user(&f->max_errors, &uf->max_errors, sizeof(f->max_errors));
get_user(f->flags, &uf->flags);
get_user(f->read_track, &uf->read_track);
copy_from_user(f->autodetect, uf->autodetect, sizeof(f->autodetect));
get_user(f->checkfreq, &uf->checkfreq);
get_user(f->native_format, &uf->native_format);
}
