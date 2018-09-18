
#pragma once

#include <memory>

namespace crea { namespace schema {
   struct abstract_schema;
} }

namespace crea { namespace protocol {
   struct custom_json_operation;
} }

namespace crea { namespace chain {

class custom_operation_interpreter
{
   public:
      virtual void apply( const protocol::custom_json_operation& op ) = 0;
      virtual void apply( const protocol::custom_binary_operation & op ) = 0;
      virtual std::shared_ptr< crea::schema::abstract_schema > get_operation_schema() = 0;
};

} } // crea::chain