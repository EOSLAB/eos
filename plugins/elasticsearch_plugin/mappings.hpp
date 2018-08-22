#include <string>

namespace eosio {

const static std::string elastic_mappings = R"(
{
    "mappings": {
        "blocks": {
            "properties": {
                "createAt": {
                    "type": "date"
                },
                "block": {
                    "enabled": false
                }
            }
        },
        "block_states": {
            "properties": {
                "block_header_state": {
                    "properties": {
                        "producer_to_last_produced": {
                            "enabled": false
                        },
                        "producer_to_last_implied_irb": {
                            "enabled": false
                        },
                        "block": {
                            "properties": {
                                "transactions": {
                                    "enabled": false
                                }
                            }
                        }
                    }
                },
                "createAt": {
                    "type": "date"
                }
            }
        },
        "accounts": {
            "properties": {
                "createAt": {
                    "type": "date"
                },
                "abi": {
                    "enabled": false
                }
            }
        },
        "transactions": {
            "properties": {
                "actions": {
                    "enabled": false
                }
            }
        },
        "transaction_traces": {
            "properties": {
                "createAt": {
                    "type": "date"
                },
                "action_traces": {
                    "enabled": false
                }
            }
        },
        "action_traces": {
            "properties": {
                "createAt": {
                    "type": "date"
                },
                "receipt": {
                    "enabled": false
                },
                "act": {
                    "enabled": false
                }
            }
        }
    }
}
)";

}
