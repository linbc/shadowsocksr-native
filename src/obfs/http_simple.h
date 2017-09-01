/*
 * http_simple.h - Define shadowsocksR server's buffers and callbacks
 *
 * Copyright (C) 2015 - 2016, Break Wa11 <mmgac001@gmail.com>
 */

#ifndef _OBFS_HTTP_SIMPLE_H
#define _OBFS_HTTP_SIMPLE_H

#include "obfs.h"

struct obfs_t * http_simple_new_obfs();
void http_simple_dispose(struct obfs_t *self);

int http_simple_client_encode(struct obfs_t *self, char **pencryptdata, int datalength, size_t* capacity);
int http_simple_client_decode(struct obfs_t *self, char **pencryptdata, int datalength, size_t* capacity, int *needsendback);

int http_post_client_encode(struct obfs_t *self, char **pencryptdata, int datalength, size_t* capacity);

#endif // _OBFS_HTTP_SIMPLE_H
