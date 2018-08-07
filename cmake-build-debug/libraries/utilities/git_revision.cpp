#include <stdint.h>
#include <creativecoin/utilities/git_revision.hpp>

#define CREA_GIT_REVISION_SHA "90a8b18144a4e8d7ab8803b376de75ec4484fd01"
#define CREA_GIT_REVISION_UNIX_TIMESTAMP 1533630975
#define CREA_GIT_REVISION_DESCRIPTION "v0.19.4rc1-562-g90a8b181"

namespace creativecoin { namespace utilities {

const char* const git_revision_sha = CREA_GIT_REVISION_SHA;
const uint32_t git_revision_unix_timestamp = CREA_GIT_REVISION_UNIX_TIMESTAMP;
const char* const git_revision_description = CREA_GIT_REVISION_DESCRIPTION;

} } // end namespace creativecoin::utilities
