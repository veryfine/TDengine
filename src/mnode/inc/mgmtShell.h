/*
 * Copyright (c) 2019 TAOS Data, Inc. <jhtao@taosdata.com>
 *
 * This program is free software: you can use, redistribute, and/or modify
 * it under the terms of the GNU Affero General Public License, version 3
 * or later ("AGPL"), as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TDENGINE_MGMT_SHELL_H
#define TDENGINE_MGMT_SHELL_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>
#include "mnode.h"

int  mgmtInitShell();
void mgmtCleanUpShell();
int mgmtRetriveUserAuthInfo(char *user, char *spi, char *encrypt, uint8_t *secret, uint8_t *ckey);

extern int32_t (*mgmtCheckRedirectMsg)(SConnObj *pConn, int32_t msgType);
extern int32_t (*mgmtProcessAlterAcctMsg)(char *pMsg, int32_t msgLen, SConnObj *pConn);
extern int32_t (*mgmtProcessCreateDnodeMsg)(char *pMsg, int32_t msgLen, SConnObj *pConn);
extern int32_t (*mgmtProcessCfgMnodeMsg)(char *pMsg, int32_t msgLen, SConnObj *pConn);
extern int32_t (*mgmtProcessDropMnodeMsg)(char *pMsg, int32_t msgLen, SConnObj *pConn);
extern int32_t (*mgmtProcessDropDnodeMsg)(char *pMsg, int32_t msgLen, SConnObj *pConn);
extern int32_t (*mgmtProcessDropAcctMsg)(char *pMsg, int32_t msgLen, SConnObj *pConn);
extern int32_t (*mgmtProcessCreateAcctMsg)(char *pMsg, int32_t msgLen, SConnObj *pConn);

#ifdef __cplusplus
}
#endif

#endif