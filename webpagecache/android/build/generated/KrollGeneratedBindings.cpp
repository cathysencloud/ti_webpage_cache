/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /private/var/folders/9g/7qwqm2sd3wz6nyspbb39rmq00000gn/T/chenminglei/webpagecache-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/9g/7qwqm2sd3wz6nyspbb39rmq00000gn/T/chenminglei/webpagecache-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "com.sencloud.webpagecache.WebpagecacheModule.h"
#include "com.sencloud.webpagecache.ExampleProxy.h"


#line 14 "/private/var/folders/9g/7qwqm2sd3wz6nyspbb39rmq00000gn/T/chenminglei/webpagecache-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 7, duplicates = 0 */

class WebpagecacheBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
WebpagecacheBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
WebpagecacheBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 38,
      MAX_WORD_LENGTH = 44,
      MIN_HASH_VALUE = 38,
      MAX_HASH_VALUE = 44
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 17 "/private/var/folders/9g/7qwqm2sd3wz6nyspbb39rmq00000gn/T/chenminglei/webpagecache-generated/KrollGeneratedBindings.gperf"
      {"com.sencloud.webpagecache.ExampleProxy", ::com::sencloud::webpagecache::webpagecache::ExampleProxy::bindProxy, ::com::sencloud::webpagecache::webpagecache::ExampleProxy::dispose},
      {""}, {""}, {""}, {""}, {""},
#line 16 "/private/var/folders/9g/7qwqm2sd3wz6nyspbb39rmq00000gn/T/chenminglei/webpagecache-generated/KrollGeneratedBindings.gperf"
      {"com.sencloud.webpagecache.WebpagecacheModule", ::com::sencloud::webpagecache::WebpagecacheModule::bindProxy, ::com::sencloud::webpagecache::WebpagecacheModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 18 "/private/var/folders/9g/7qwqm2sd3wz6nyspbb39rmq00000gn/T/chenminglei/webpagecache-generated/KrollGeneratedBindings.gperf"

