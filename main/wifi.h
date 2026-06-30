#pragma once

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    char *buf;
    int size;
} download_ctx_t;

void wifi_init(void);
void wifi_https_get_request(download_ctx_t *ctx, const char *url);

#ifdef __cplusplus
}
#endif
