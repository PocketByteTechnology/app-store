#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#define DB_URL "https://raw.githubusercontent.com/PocketByteTechnology/apps/main/"
#define APPS_URL DB_URL"apps/"
#define CATALOG_JSON_URL DB_URL"catalog.json"

typedef struct {
    char *buf;
    int size;
} download_ctx_t;

void wifi_init(void);
void wifi_https_get_request(download_ctx_t *ctx, const char *url);

#ifdef __cplusplus
}
#endif
