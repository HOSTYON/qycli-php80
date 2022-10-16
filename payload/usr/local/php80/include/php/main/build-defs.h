/*
   +----------------------------------------------------------------------+
   | Copyright (c) The PHP Group                                          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Stig Sæther Bakken <ssb@php.net>                             |
   +----------------------------------------------------------------------+
*/

#define CONFIGURE_COMMAND " './configure'  '--prefix=/usr/local/php80' '--with-config-file-path=/etc/php80' '--with-config-file-scan-dir=/etc/php80/php.d' '--with-libdir=lib64' '--enable-fpm' '--disable-cgi' '--disable-phpdbg' '--enable-sockets' '--without-sqlite3' '--without-pdo-sqlite' '--with-mysqli' '--with-curl' '--enable-exif' '--enable-mbstring' '--with-openssl' '--with-zip' '--enable-bcmath' '--with-jpeg' '--with-webp' '--enable-intl' '--with-sodium' '--with-zlib' '--enable-soap' '--enable-gd=shared' '--with-imagick=shared' '--enable-redis=shared'"
#define PHP_ODBC_CFLAGS	""
#define PHP_ODBC_LFLAGS		""
#define PHP_ODBC_LIBS		""
#define PHP_ODBC_TYPE		""
#define PHP_OCI8_DIR			""
#define PHP_OCI8_ORACLE_VERSION		""
#define PHP_PROG_SENDMAIL	"/usr/sbin/sendmail"
#define PEAR_INSTALLDIR         ""
#define PHP_INCLUDE_PATH	".:"
#define PHP_EXTENSION_DIR       "/usr/local/php80/lib/php/extensions/no-debug-non-zts-20200930"
#define PHP_PREFIX              "/usr/local/php80"
#define PHP_BINDIR              "/usr/local/php80/bin"
#define PHP_SBINDIR             "/usr/local/php80/sbin"
#define PHP_MANDIR              "/usr/local/php80/php/man"
#define PHP_LIBDIR              "/usr/local/php80/lib/php"
#define PHP_DATADIR             "/usr/local/php80/share/php"
#define PHP_SYSCONFDIR          "/usr/local/php80/etc"
#define PHP_LOCALSTATEDIR       "/usr/local/php80/var"
#define PHP_CONFIG_FILE_PATH    "/etc/php80"
#define PHP_CONFIG_FILE_SCAN_DIR    "/etc/php80/php.d"
#define PHP_SHLIB_SUFFIX        "so"
#define PHP_SHLIB_EXT_PREFIX    ""
