/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/media/platform/omap3isp/ispccdc.c
static int ccdc_lsc_config(struct isp_ccdc_device *ccdc,
{
copy_from_user(&req->config, config->lsc_cfg,
copy_from_user(req->table.addr, config->lsc,
}
static int ccdc_config(struct isp_ccdc_device *ccdc,
{
copy_from_user(&ccdc->clamp, ccdc_struct->bclamp,
copy_from_user(&ccdc->blcomp, ccdc_struct->blcomp,
copy_from_user(&fpc, ccdc_struct->fpc, sizeof(fpc)))
copy_from_user(fpc_new.addr,
}
