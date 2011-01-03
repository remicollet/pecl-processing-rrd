/*
  +----------------------------------------------------------------------+
  | PHP Version 5                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2011 The PHP Group                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt.                                 |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author: Miroslav Kubelik <koubel@php.net>                           |
  +----------------------------------------------------------------------+
*/

#ifndef RRD_UPDATE_H
#define RRD_UPDATE_H

void rrd_update_minit(TSRMLS_DC);
PHP_FUNCTION(rrd_update);

ZEND_BEGIN_ARG_INFO(arginfo_rrd_update, 0)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

#endif  /* RRD_UPDATE_H */
