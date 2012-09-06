/**
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef __BPLUS_REMOVE_H__
#define __BPLUS_REMOVE_H__

#include "bplus_tree_private.h"

#ifdef __cplusplus
extern "C"
{
#endif // ifdef __cplusplus

void bplus_node_remove_at(BplusTree const* tree, BplusNode* node, size_t const index, size_t const length);

#ifdef __cplusplus
}
#endif // ifdef __cplusplus

#endif // ifndef __BPLUS_REMOVE_H__
