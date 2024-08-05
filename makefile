TARGET?=preproc_test

HAVES=STDIO_H STDLIB_H SYS_TYPES_H INTTYPES_H STRINGS_H SYS_TIMES_H PTHREAD_H LIBCURL_H MATH_H PCRE_H

ALL_HAVES=$(addprefix HAVE_,$(HAVES))

CFLAGS += -ggdb -I./include -Isrc/libs/zbxdbcache $(addprefix -D,$(ALL_HAVES))
LDFLAGS +=
LDLIBS += -lm

DEPS="libpcre libcurl"
DEPS_CFLAGS := $(shell pkg-config --cflags $(DEPS))
DEPS_LDFLAGS := $(shell pkg-config --libs $(DEPS))

CFLAGS += $(DEPS_CFLAGS)
LDLIBS += $(DEPS_LDFLAGS)


PREPROC_HEADERS="preproc_manager.h preprocessing.h preproc_worker.h preproc_history.h item_preproc.h"


PREPROC_OBJECTS = preproc_history.o item_preproc.o preproc_manager.o preprocessing.o preproc_worker.o
ZBXEMBED_OBJECTS = httprequest.o zabbix.o global.o embed.o duktape.o
ZBXCOMMON_OBJECTS = misc.o variant.o alias.o file.o str.o comms.o variant_misc.o xml.o zbxgetopt.o setproctitle.o iprange.o
ZBXNIX_OBJECTS = fatal.o
ZBXJSON_OBJECTS = jsonpath.o json.o json_parser.o
ZBXLOG_OBJECTS = log.o
ZBXALGO_OBJECTS = binaryheap.o int128.o hashmap.o hashset.o queue.o evaluate.o algodefs.o linked_list.o vector.o prediction.o
ZBXSYS_OBJECTS = threads.o mutexs.o #symbols.o
ZBXREGEXP_OBJECTS = zbxregexp.o
ZBXCRYPTO_OBJECTS = sha256crypt.o base64.o md5.o #tls.o tls_version.o
ZBXHTTP_OBJECTS = http.o urlencode.o punycode.o
ZBXSYSINFO_OBJECT = sysinfo.o


OBJECTS=
OBJECTS+=src/zabbix_server/server.o
OBJECTS+=src/zabbix_server/events.o src/zabbix_server/postinit.o
OBJECTS+=$(addprefix src/zabbix_server/preprocessor/,$(PREPROC_OBJECTS))
OBJECTS+=$(addprefix src/libs/zbxembed/,$(ZBXEMBED_OBJECTS))
OBJECTS+=$(addprefix src/libs/zbxcommon/,$(ZBXCOMMON_OBJECTS))
OBJECTS+=$(addprefix src/libs/zbxnix/,$(ZBXNIX_OBJECTS))
OBJECTS+=$(addprefix src/libs/zbxjson/,$(ZBXJSON_OBJECTS))
OBJECTS+=$(addprefix src/libs/zbxlog/,$(ZBXLOG_OBJECTS))
OBJECTS+=$(addprefix src/libs/zbxalgo/,$(ZBXALGO_OBJECTS))
OBJECTS+=$(addprefix src/libs/zbxsys/,$(ZBXSYS_OBJECTS))
OBJECTS+=$(addprefix src/libs/zbxregexp/,$(ZBXREGEXP_OBJECTS))
OBJECTS+=$(addprefix src/libs/zbxcrypto/,$(ZBXCRYPTO_OBJECTS))
OBJECTS+=$(addprefix src/libs/zbxhttp/,$(ZBXHTTP_OBJECTS))
OBJECTS+=$(addprefix src/libs/zbxsysinfo/,$(ZBXSYSINFO_OBJECTS))


all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $^ $(LDLIBS)
