#include <creativecoin/protocol/get_config.hpp>
#include <creativecoin/protocol/config.hpp>
#include <creativecoin/protocol/asset.hpp>
#include <creativecoin/protocol/types.hpp>
#include <creativecoin/protocol/version.hpp>

namespace creativecoin { namespace protocol {

fc::variant_object get_config()
{
   fc::mutable_variant_object result;

#ifdef IS_TEST_NET
   result[ "IS_TEST_NET" ] = true;
   result["TESTNET_BLOCK_LIMIT"] = TESTNET_BLOCK_LIMIT;
#else
   result[ "IS_TEST_NET" ] = false;
#endif
#ifdef CREA_ENABLE_SMT
   result[ "CREA_ENABLE_SMT" ] = true;
   result["SMT_VESTING_WITHDRAW_INTERVAL_SECONDS"] = SMT_VESTING_WITHDRAW_INTERVAL_SECONDS;
   result["SMT_UPVOTE_LOCKOUT"] = SMT_UPVOTE_LOCKOUT;
   result["SMT_MAX_VOTABLE_ASSETS"] = SMT_MAX_VOTABLE_ASSETS;
#else
   result[ "CREA_ENABLE_SMT" ] = false;
#endif

   result["SBD_SYMBOL"] = SBD_SYMBOL;
   result["CREA_INITIAL_VOTE_POWER_RATE"] = CREA_INITIAL_VOTE_POWER_RATE;
   result["CREA_REDUCED_VOTE_POWER_RATE"] = CREA_REDUCED_VOTE_POWER_RATE;
   result["CREA_100_PERCENT"] = CREA_100_PERCENT;
   result["CREA_1_PERCENT"] = CREA_1_PERCENT;
   result["CREA_ACCOUNT_RECOVERY_REQUEST_EXPIRATION_PERIOD"] = CREA_ACCOUNT_RECOVERY_REQUEST_EXPIRATION_PERIOD;
   result["CREA_ACTIVE_CHALLENGE_COOLDOWN"] = CREA_ACTIVE_CHALLENGE_COOLDOWN;
   result["CREA_ACTIVE_CHALLENGE_FEE"] = CREA_ACTIVE_CHALLENGE_FEE;
   result["CREA_ADDRESS_PREFIX"] = CREA_ADDRESS_PREFIX;
   result["CREA_APR_PERCENT_MULTIPLY_PER_BLOCK"] = CREA_APR_PERCENT_MULTIPLY_PER_BLOCK;
   result["CREA_APR_PERCENT_MULTIPLY_PER_HOUR"] = CREA_APR_PERCENT_MULTIPLY_PER_HOUR;
   result["CREA_APR_PERCENT_MULTIPLY_PER_ROUND"] = CREA_APR_PERCENT_MULTIPLY_PER_ROUND;
   result["CREA_APR_PERCENT_SHIFT_PER_BLOCK"] = CREA_APR_PERCENT_SHIFT_PER_BLOCK;
   result["CREA_APR_PERCENT_SHIFT_PER_HOUR"] = CREA_APR_PERCENT_SHIFT_PER_HOUR;
   result["CREA_APR_PERCENT_SHIFT_PER_ROUND"] = CREA_APR_PERCENT_SHIFT_PER_ROUND;
   result["CREA_BANDWIDTH_AVERAGE_WINDOW_SECONDS"] = CREA_BANDWIDTH_AVERAGE_WINDOW_SECONDS;
   result["CREA_BANDWIDTH_PRECISION"] = CREA_BANDWIDTH_PRECISION;
   result["CREA_BLOCKCHAIN_PRECISION"] = CREA_BLOCKCHAIN_PRECISION;
   result["CREA_BLOCKCHAIN_PRECISION_DIGITS"] = CREA_BLOCKCHAIN_PRECISION_DIGITS;
   result["CREA_BLOCKCHAIN_HARDFORK_VERSION"] = CREA_BLOCKCHAIN_HARDFORK_VERSION;
   result["CREA_BLOCKCHAIN_VERSION"] = CREA_BLOCKCHAIN_VERSION;
   result["CREA_BLOCK_INTERVAL"] = CREA_BLOCK_INTERVAL;
   result["CREA_BLOCKS_PER_DAY"] = CREA_BLOCKS_PER_DAY;
   result["CREA_BLOCKS_PER_HOUR"] = CREA_BLOCKS_PER_HOUR;
   result["CREA_BLOCKS_PER_YEAR"] = CREA_BLOCKS_PER_YEAR;
   result["CREA_CASHOUT_WINDOW_SECONDS"] = CREA_CASHOUT_WINDOW_SECONDS;
   result["CREA_CASHOUT_WINDOW_SECONDS_PRE_HF12"] = CREA_CASHOUT_WINDOW_SECONDS_PRE_HF12;
   result["CREA_CASHOUT_WINDOW_SECONDS_PRE_HF17"] = CREA_CASHOUT_WINDOW_SECONDS_PRE_HF17;
   result["CREA_CHAIN_ID"] = CREA_CHAIN_ID;
   result["CREA_CHAIN_ID_NAME"] = CREA_CHAIN_ID_NAME;
   result["CREA_COMMENT_REWARD_FUND_NAME"] = CREA_COMMENT_REWARD_FUND_NAME;
   result["CREA_CONTENT_APR_PERCENT"] = CREA_CONTENT_APR_PERCENT;
   result["CREA_CONTENT_CONSTANT_HF0"] = CREA_CONTENT_CONSTANT_HF0;
   result["CREA_CONTENT_REWARD_PERCENT"] = CREA_CONTENT_REWARD_PERCENT;
   result["CREA_CONVERSION_DELAY"] = CREA_CONVERSION_DELAY;
   result["CREA_CONVERSION_DELAY_PRE_HF_16"] = CREA_CONVERSION_DELAY_PRE_HF_16;
   result["CREA_CREATE_ACCOUNT_DELEGATION_RATIO"] = CREA_CREATE_ACCOUNT_DELEGATION_RATIO;
   result["CREA_CREATE_ACCOUNT_DELEGATION_TIME"] = CREA_CREATE_ACCOUNT_DELEGATION_TIME;
   result["CREA_CREATE_ACCOUNT_WITH_CREA_MODIFIER"] = CREA_CREATE_ACCOUNT_WITH_CREA_MODIFIER;
   result["CREA_CURATE_APR_PERCENT"] = CREA_CURATE_APR_PERCENT;
   result["CREA_DEFAULT_SBD_INTEREST_RATE"] = CREA_DEFAULT_SBD_INTEREST_RATE;
   result["CREA_EQUIHASH_K"] = CREA_EQUIHASH_K;
   result["CREA_EQUIHASH_N"] = CREA_EQUIHASH_N;
   result["CREA_FEED_HISTORY_WINDOW"] = CREA_FEED_HISTORY_WINDOW;
   result["CREA_FEED_HISTORY_WINDOW_PRE_HF_16"] = CREA_FEED_HISTORY_WINDOW_PRE_HF_16;
   result["CREA_FEED_INTERVAL_BLOCKS"] = CREA_FEED_INTERVAL_BLOCKS;
   result["CREA_GENESIS_TIME"] = CREA_GENESIS_TIME;
   result["CREA_HARDFORK_REQUIRED_WITNESSES"] = CREA_HARDFORK_REQUIRED_WITNESSES;
   result["CREA_INFLATION_NARROWING_PERIOD"] = CREA_INFLATION_NARROWING_PERIOD;
   result["CREA_INFLATION_RATE_START_PERCENT"] = CREA_INFLATION_RATE_START_PERCENT;
   result["CREA_INFLATION_RATE_STOP_PERCENT"] = CREA_INFLATION_RATE_STOP_PERCENT;
   result["CREA_INIT_MINER_NAME"] = CREA_INIT_MINER_NAME;
   result["CREA_INIT_PUBLIC_KEY_STR"] = CREA_INIT_PUBLIC_KEY_STR;
#if 0
   // do not expose private key, period.
   // we need this line present but inactivated so CI check for all constants in config.hpp doesn't complain.
   result["CREA_INIT_PRIVATE_KEY"] = CREA_INIT_PRIVATE_KEY;
#endif
   result["CREA_INIT_SUPPLY"] = CREA_INIT_SUPPLY;
   result["CREA_INIT_TIME"] = CREA_INIT_TIME;
   result["CREA_IRREVERSIBLE_THRESHOLD"] = CREA_IRREVERSIBLE_THRESHOLD;
   result["CREA_LIQUIDITY_APR_PERCENT"] = CREA_LIQUIDITY_APR_PERCENT;
   result["CREA_LIQUIDITY_REWARD_BLOCKS"] = CREA_LIQUIDITY_REWARD_BLOCKS;
   result["CREA_LIQUIDITY_REWARD_PERIOD_SEC"] = CREA_LIQUIDITY_REWARD_PERIOD_SEC;
   result["CREA_LIQUIDITY_TIMEOUT_SEC"] = CREA_LIQUIDITY_TIMEOUT_SEC;
   result["CREA_MAX_ACCOUNT_NAME_LENGTH"] = CREA_MAX_ACCOUNT_NAME_LENGTH;
   result["CREA_MAX_ACCOUNT_WITNESS_VOTES"] = CREA_MAX_ACCOUNT_WITNESS_VOTES;
   result["CREA_MAX_ASSET_WHITELIST_AUTHORITIES"] = CREA_MAX_ASSET_WHITELIST_AUTHORITIES;
   result["CREA_MAX_AUTHORITY_MEMBERSHIP"] = CREA_MAX_AUTHORITY_MEMBERSHIP;
   result["CREA_MAX_BLOCK_SIZE"] = CREA_MAX_BLOCK_SIZE;
   result["CREA_SOFT_MAX_BLOCK_SIZE"] = CREA_SOFT_MAX_BLOCK_SIZE;
   result["CREA_MAX_CASHOUT_WINDOW_SECONDS"] = CREA_MAX_CASHOUT_WINDOW_SECONDS;
   result["CREA_MAX_COMMENT_DEPTH"] = CREA_MAX_COMMENT_DEPTH;
   result["CREA_MAX_COMMENT_DEPTH_PRE_HF17"] = CREA_MAX_COMMENT_DEPTH_PRE_HF17;
   result["CREA_MAX_FEED_AGE_SECONDS"] = CREA_MAX_FEED_AGE_SECONDS;
   result["CREA_MAX_INSTANCE_ID"] = CREA_MAX_INSTANCE_ID;
   result["CREA_MAX_MEMO_SIZE"] = CREA_MAX_MEMO_SIZE;
   result["CREA_MAX_WITNESSES"] = CREA_MAX_WITNESSES;
   result["CREA_MAX_MINER_WITNESSES_HF0"] = CREA_MAX_MINER_WITNESSES_HF0;
   result["CREA_MAX_MINER_WITNESSES_HF17"] = CREA_MAX_MINER_WITNESSES_HF17;
   result["CREA_MAX_PERMLINK_LENGTH"] = CREA_MAX_PERMLINK_LENGTH;
   result["CREA_MAX_PROXY_RECURSION_DEPTH"] = CREA_MAX_PROXY_RECURSION_DEPTH;
   result["CREA_MAX_RATION_DECAY_RATE"] = CREA_MAX_RATION_DECAY_RATE;
   result["CREA_MAX_RESERVE_RATIO"] = CREA_MAX_RESERVE_RATIO;
   result["CREA_MAX_RUNNER_WITNESSES_HF0"] = CREA_MAX_RUNNER_WITNESSES_HF0;
   result["CREA_MAX_RUNNER_WITNESSES_HF17"] = CREA_MAX_RUNNER_WITNESSES_HF17;
   result["CREA_MAX_SATOSHIS"] = CREA_MAX_SATOSHIS;
   result["CREA_MAX_SHARE_SUPPLY"] = CREA_MAX_SHARE_SUPPLY;
   result["CREA_MAX_SIG_CHECK_DEPTH"] = CREA_MAX_SIG_CHECK_DEPTH;
   result["CREA_MAX_TIME_UNTIL_EXPIRATION"] = CREA_MAX_TIME_UNTIL_EXPIRATION;
   result["CREA_MAX_TRANSACTION_SIZE"] = CREA_MAX_TRANSACTION_SIZE;
   result["CREA_MAX_UNDO_HISTORY"] = CREA_MAX_UNDO_HISTORY;
   result["CREA_MAX_URL_LENGTH"] = CREA_MAX_URL_LENGTH;
   result["CREA_MAX_VOTE_CHANGES"] = CREA_MAX_VOTE_CHANGES;
   result["CREA_MAX_VOTED_WITNESSES_HF0"] = CREA_MAX_VOTED_WITNESSES_HF0;
   result["CREA_MAX_VOTED_WITNESSES_HF17"] = CREA_MAX_VOTED_WITNESSES_HF17;
   result["CREA_MAX_WITHDRAW_ROUTES"] = CREA_MAX_WITHDRAW_ROUTES;
   result["CREA_MAX_WITNESS_URL_LENGTH"] = CREA_MAX_WITNESS_URL_LENGTH;
   result["CREA_MIN_ACCOUNT_CREATION_FEE"] = CREA_MIN_ACCOUNT_CREATION_FEE;
   result["CREA_MIN_ACCOUNT_NAME_LENGTH"] = CREA_MIN_ACCOUNT_NAME_LENGTH;
   result["CREA_MIN_BLOCK_SIZE_LIMIT"] = CREA_MIN_BLOCK_SIZE_LIMIT;
   result["CREA_MIN_BLOCK_SIZE"] = CREA_MIN_BLOCK_SIZE;
   result["CREA_MIN_CONTENT_REWARD"] = CREA_MIN_CONTENT_REWARD;
   result["CREA_MIN_CURATE_REWARD"] = CREA_MIN_CURATE_REWARD;
   result["CREA_MIN_PERMLINK_LENGTH"] = CREA_MIN_PERMLINK_LENGTH;
   result["CREA_MIN_REPLY_INTERVAL"] = CREA_MIN_REPLY_INTERVAL;
   result["CREA_MIN_REPLY_INTERVAL_HF20"] = CREA_MIN_REPLY_INTERVAL_HF20;
   result["CREA_MIN_ROOT_COMMENT_INTERVAL"] = CREA_MIN_ROOT_COMMENT_INTERVAL;
   result["CREA_MIN_VOTE_INTERVAL_SEC"] = CREA_MIN_VOTE_INTERVAL_SEC;
   result["CREA_MINER_ACCOUNT"] = CREA_MINER_ACCOUNT;
   result["CREA_MINER_PAY_PERCENT"] = CREA_MINER_PAY_PERCENT;
   result["CREA_MIN_FEEDS"] = CREA_MIN_FEEDS;
   result["CREA_MINING_REWARD"] = CREA_MINING_REWARD;
   result["CREA_MINING_TIME"] = CREA_MINING_TIME;
   result["CREA_MIN_LIQUIDITY_REWARD"] = CREA_MIN_LIQUIDITY_REWARD;
   result["CREA_MIN_LIQUIDITY_REWARD_PERIOD_SEC"] = CREA_MIN_LIQUIDITY_REWARD_PERIOD_SEC;
   result["CREA_MIN_PAYOUT_SBD"] = CREA_MIN_PAYOUT_SBD;
   result["CREA_MIN_POW_REWARD"] = CREA_MIN_POW_REWARD;
   result["CREA_MIN_PRODUCER_REWARD"] = CREA_MIN_PRODUCER_REWARD;
   result["CREA_MIN_TRANSACTION_EXPIRATION_LIMIT"] = CREA_MIN_TRANSACTION_EXPIRATION_LIMIT;
   result["CREA_MIN_TRANSACTION_SIZE_LIMIT"] = CREA_MIN_TRANSACTION_SIZE_LIMIT;
   result["CREA_MIN_UNDO_HISTORY"] = CREA_MIN_UNDO_HISTORY;
   result["CREA_NULL_ACCOUNT"] = CREA_NULL_ACCOUNT;
   result["CREA_NUM_INIT_MINERS"] = CREA_NUM_INIT_MINERS;
   result["CREA_OWNER_AUTH_HISTORY_TRACKING_START_BLOCK_NUM"] = CREA_OWNER_AUTH_HISTORY_TRACKING_START_BLOCK_NUM;
   result["CREA_OWNER_AUTH_RECOVERY_PERIOD"] = CREA_OWNER_AUTH_RECOVERY_PERIOD;
   result["CREA_OWNER_CHALLENGE_COOLDOWN"] = CREA_OWNER_CHALLENGE_COOLDOWN;
   result["CREA_OWNER_CHALLENGE_FEE"] = CREA_OWNER_CHALLENGE_FEE;
   result["CREA_OWNER_UPDATE_LIMIT"] = CREA_OWNER_UPDATE_LIMIT;
   result["CREA_POST_AVERAGE_WINDOW"] = CREA_POST_AVERAGE_WINDOW;
   result["CREA_POST_REWARD_FUND_NAME"] = CREA_POST_REWARD_FUND_NAME;
   result["CREA_POST_WEIGHT_CONSTANT"] = CREA_POST_WEIGHT_CONSTANT;
   result["CREA_POW_APR_PERCENT"] = CREA_POW_APR_PERCENT;
   result["CREA_PRODUCER_APR_PERCENT"] = CREA_PRODUCER_APR_PERCENT;
   result["CREA_PROXY_TO_SELF_ACCOUNT"] = CREA_PROXY_TO_SELF_ACCOUNT;
   result["CREA_SBD_INTEREST_COMPOUND_INTERVAL_SEC"] = CREA_SBD_INTEREST_COMPOUND_INTERVAL_SEC;
   result["CREA_SECONDS_PER_YEAR"] = CREA_SECONDS_PER_YEAR;
   result["CREA_RECENT_RSHARES_DECAY_TIME_HF19"] = CREA_RECENT_RSHARES_DECAY_TIME_HF19;
   result["CREA_RECENT_RSHARES_DECAY_TIME_HF17"] = CREA_RECENT_RSHARES_DECAY_TIME_HF17;
   result["CREA_REVERSE_AUCTION_WINDOW_SECONDS"] = CREA_REVERSE_AUCTION_WINDOW_SECONDS;
   result["CREA_ROOT_POST_PARENT"] = CREA_ROOT_POST_PARENT;
   result["CREA_SAVINGS_WITHDRAW_REQUEST_LIMIT"] = CREA_SAVINGS_WITHDRAW_REQUEST_LIMIT;
   result["CREA_SAVINGS_WITHDRAW_TIME"] = CREA_SAVINGS_WITHDRAW_TIME;
   result["CREA_SBD_START_PERCENT"] = CREA_SBD_START_PERCENT;
   result["CREA_SBD_STOP_PERCENT"] = CREA_SBD_STOP_PERCENT;
   result["CREA_SECOND_CASHOUT_WINDOW"] = CREA_SECOND_CASHOUT_WINDOW;
   result["CREA_SOFT_MAX_COMMENT_DEPTH"] = CREA_SOFT_MAX_COMMENT_DEPTH;
   result["CREA_START_MINER_VOTING_BLOCK"] = CREA_START_MINER_VOTING_BLOCK;
   result["CREA_START_VESTING_BLOCK"] = CREA_START_VESTING_BLOCK;
   result["CREA_TEMP_ACCOUNT"] = CREA_TEMP_ACCOUNT;
   result["CREA_UPVOTE_LOCKOUT_HF7"] = CREA_UPVOTE_LOCKOUT_HF7;
   result["CREA_UPVOTE_LOCKOUT_HF17"] = CREA_UPVOTE_LOCKOUT_HF17;
   result["CREA_VESTING_FUND_PERCENT"] = CREA_VESTING_FUND_PERCENT;
   result["CREA_VESTING_WITHDRAW_INTERVALS"] = CREA_VESTING_WITHDRAW_INTERVALS;
   result["CREA_VESTING_WITHDRAW_INTERVALS_PRE_HF_16"] = CREA_VESTING_WITHDRAW_INTERVALS_PRE_HF_16;
   result["CREA_VESTING_WITHDRAW_INTERVAL_SECONDS"] = CREA_VESTING_WITHDRAW_INTERVAL_SECONDS;
   result["CREA_VOTE_DUST_THRESHOLD"] = CREA_VOTE_DUST_THRESHOLD;
   result["CREA_VOTE_REGENERATION_SECONDS"] = CREA_VOTE_REGENERATION_SECONDS;
   result["CREA_SYMBOL"] = CREA_SYMBOL;
   result["VESTS_SYMBOL"] = VESTS_SYMBOL;
   result["CREA_VIRTUAL_SCHEDULE_LAP_LENGTH"] = CREA_VIRTUAL_SCHEDULE_LAP_LENGTH;
   result["CREA_VIRTUAL_SCHEDULE_LAP_LENGTH2"] = CREA_VIRTUAL_SCHEDULE_LAP_LENGTH2;
   result["CREA_MAX_LIMIT_ORDER_EXPIRATION"] = CREA_MAX_LIMIT_ORDER_EXPIRATION;
   result["CREA_DELEGATION_RETURN_PERIOD_HF0"] = CREA_DELEGATION_RETURN_PERIOD_HF0;
   result["CREA_DELEGATION_RETURN_PERIOD_HF20"] = CREA_DELEGATION_RETURN_PERIOD_HF20;

   return result;
}

} } // creativecoin::protocol
