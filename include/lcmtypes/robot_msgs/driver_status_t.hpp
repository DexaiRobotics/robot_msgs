/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#ifndef __robot_msgs_driver_status_t_hpp__
#define __robot_msgs_driver_status_t_hpp__

#include <lcm/lcm_coretypes.h>

#include <string>
#include <vector>

namespace robot_msgs
{

/// message with metadata about robot driver
class driver_status_t
{
    public:
        /// the timestamp in microseconds
        int64_t    utime;

        /**
         * true if the driver is running and a connection 
         * to the arm has been sucecssfully established
         */
        int8_t     driver_running;

        /**
         * optional messagee describing error if driver is 
         * not running
         */
        std::string err_msg;

        /// string describing robot's current mode
        std::string robot_mode;

        /**
         * true if robot arm is currently executing a plan, 
         * false if idle
         */
        int8_t     has_plan;

        /**
         * utime of the current plan.
         * set to -1 if robot does not have a plan
         */
        int64_t    current_plan_utime;

        /// start utime of the current plan
        int64_t    plan_start_utime;

        /// utime of the last completed plan.
        int64_t    last_plan_utime;

        /// true if last plan was completed successfully
        int8_t     last_plan_successful;

        /// optional messagee describing error if last plan failed
        std::string last_plan_msg;

        /// True if robot is paused by one or more sources
        int8_t     paused;

        /// number of pause sources
        int8_t     num_pause_sources;

        /// list of pause sources, empty if not paused
        std::vector< std::string > pause_sources;

        /// true if brakes are locked
        int8_t     brakes_locked;

        /// true if robot arm is user stopped
        int8_t     user_stopped;

        /// true if compliant push is currently being attempted
        int8_t     compliant_push_active;

        /// true if torque is enabled on robot arm joints
        int8_t     torque_enabled;

    public:
        /**
         * Encode a message into binary form.
         *
         * @param buf The output buffer.
         * @param offset Encoding starts at thie byte offset into @p buf.
         * @param maxlen Maximum number of bytes to write.  This should generally be
         *  equal to getEncodedSize().
         * @return The number of bytes encoded, or <0 on error.
         */
        inline int encode(void *buf, int offset, int maxlen) const;

        /**
         * Check how many bytes are required to encode this message.
         */
        inline int getEncodedSize() const;

        /**
         * Decode a message from binary form into this instance.
         *
         * @param buf The buffer containing the encoded message.
         * @param offset The byte offset into @p buf where the encoded message starts.
         * @param maxlen The maximum number of bytes to read while decoding.
         * @return The number of bytes decoded, or <0 if an error occured.
         */
        inline int decode(const void *buf, int offset, int maxlen);

        /**
         * Retrieve the 64-bit fingerprint identifying the structure of the message.
         * Note that the fingerprint is the same for all instances of the same
         * message type, and is a fingerprint on the message type definition, not on
         * the message contents.
         */
        inline static int64_t getHash();

        /**
         * Returns "driver_status_t"
         */
        inline static const char* getTypeName();

        // LCM support functions. Users should not call these
        inline int _encodeNoHash(void *buf, int offset, int maxlen) const;
        inline int _getEncodedSizeNoHash() const;
        inline int _decodeNoHash(const void *buf, int offset, int maxlen);
        inline static uint64_t _computeHash(const __lcm_hash_ptr *p);
};

int driver_status_t::encode(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;
    int64_t hash = getHash();

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->_encodeNoHash(buf, offset + pos, maxlen - pos);
    if (tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int driver_status_t::decode(const void *buf, int offset, int maxlen)
{
    int pos = 0, thislen;

    int64_t msg_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &msg_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (msg_hash != getHash()) return -1;

    thislen = this->_decodeNoHash(buf, offset + pos, maxlen - pos);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int driver_status_t::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t driver_status_t::getHash()
{
    static int64_t hash = static_cast<int64_t>(_computeHash(NULL));
    return hash;
}

const char* driver_status_t::getTypeName()
{
    return "driver_status_t";
}

int driver_status_t::_encodeNoHash(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &this->utime, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &this->driver_running, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    char* err_msg_cstr = const_cast<char*>(this->err_msg.c_str());
    tlen = __string_encode_array(
        buf, offset + pos, maxlen - pos, &err_msg_cstr, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    char* robot_mode_cstr = const_cast<char*>(this->robot_mode.c_str());
    tlen = __string_encode_array(
        buf, offset + pos, maxlen - pos, &robot_mode_cstr, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &this->has_plan, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &this->current_plan_utime, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &this->plan_start_utime, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &this->last_plan_utime, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &this->last_plan_successful, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    char* last_plan_msg_cstr = const_cast<char*>(this->last_plan_msg.c_str());
    tlen = __string_encode_array(
        buf, offset + pos, maxlen - pos, &last_plan_msg_cstr, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &this->paused, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_pause_sources, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    for (int a0 = 0; a0 < this->num_pause_sources; a0++) {
        char* __cstr = const_cast<char*>(this->pause_sources[a0].c_str());
        tlen = __string_encode_array(
            buf, offset + pos, maxlen - pos, &__cstr, 1);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &this->brakes_locked, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &this->user_stopped, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &this->compliant_push_active, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &this->torque_enabled, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int driver_status_t::_decodeNoHash(const void *buf, int offset, int maxlen)
{
    int pos = 0, tlen;

    tlen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this->utime, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &this->driver_running, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    int32_t __err_msg_len__;
    tlen = __int32_t_decode_array(
        buf, offset + pos, maxlen - pos, &__err_msg_len__, 1);
    if(tlen < 0) return tlen; else pos += tlen;
    if(__err_msg_len__ > maxlen - pos) return -1;
    this->err_msg.assign(
        static_cast<const char*>(buf) + offset + pos, __err_msg_len__ - 1);
    pos += __err_msg_len__;

    int32_t __robot_mode_len__;
    tlen = __int32_t_decode_array(
        buf, offset + pos, maxlen - pos, &__robot_mode_len__, 1);
    if(tlen < 0) return tlen; else pos += tlen;
    if(__robot_mode_len__ > maxlen - pos) return -1;
    this->robot_mode.assign(
        static_cast<const char*>(buf) + offset + pos, __robot_mode_len__ - 1);
    pos += __robot_mode_len__;

    tlen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &this->has_plan, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this->current_plan_utime, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this->plan_start_utime, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this->last_plan_utime, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &this->last_plan_successful, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    int32_t __last_plan_msg_len__;
    tlen = __int32_t_decode_array(
        buf, offset + pos, maxlen - pos, &__last_plan_msg_len__, 1);
    if(tlen < 0) return tlen; else pos += tlen;
    if(__last_plan_msg_len__ > maxlen - pos) return -1;
    this->last_plan_msg.assign(
        static_cast<const char*>(buf) + offset + pos, __last_plan_msg_len__ - 1);
    pos += __last_plan_msg_len__;

    tlen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &this->paused, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_pause_sources, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    try {
        this->pause_sources.resize(this->num_pause_sources);
    } catch (...) {
        return -1;
    }
    for (int a0 = 0; a0 < this->num_pause_sources; a0++) {
        int32_t __elem_len;
        tlen = __int32_t_decode_array(
            buf, offset + pos, maxlen - pos, &__elem_len, 1);
        if(tlen < 0) return tlen; else pos += tlen;
        if(__elem_len > maxlen - pos) return -1;
        this->pause_sources[a0].assign(static_cast<const char*>(buf) + offset + pos, __elem_len -  1);
        pos += __elem_len;
    }

    tlen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &this->brakes_locked, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &this->user_stopped, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &this->compliant_push_active, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &this->torque_enabled, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int driver_status_t::_getEncodedSizeNoHash() const
{
    int enc_size = 0;
    enc_size += __int64_t_encoded_array_size(NULL, 1);
    enc_size += __boolean_encoded_array_size(NULL, 1);
    enc_size += this->err_msg.size() + 4 + 1;
    enc_size += this->robot_mode.size() + 4 + 1;
    enc_size += __boolean_encoded_array_size(NULL, 1);
    enc_size += __int64_t_encoded_array_size(NULL, 1);
    enc_size += __int64_t_encoded_array_size(NULL, 1);
    enc_size += __int64_t_encoded_array_size(NULL, 1);
    enc_size += __boolean_encoded_array_size(NULL, 1);
    enc_size += this->last_plan_msg.size() + 4 + 1;
    enc_size += __boolean_encoded_array_size(NULL, 1);
    enc_size += __int8_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->num_pause_sources; a0++) {
        enc_size += this->pause_sources[a0].size() + 4 + 1;
    }
    enc_size += __boolean_encoded_array_size(NULL, 1);
    enc_size += __boolean_encoded_array_size(NULL, 1);
    enc_size += __boolean_encoded_array_size(NULL, 1);
    enc_size += __boolean_encoded_array_size(NULL, 1);
    return enc_size;
}

uint64_t driver_status_t::_computeHash(const __lcm_hash_ptr *)
{
    uint64_t hash = 0xb1717036f4c2f0c8LL;
    return (hash<<1) + ((hash>>63)&1);
}

}

#endif
