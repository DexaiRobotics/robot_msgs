/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#ifndef __robot_msgs_plan_exec_opts_t_hpp__
#define __robot_msgs_plan_exec_opts_t_hpp__

#include <lcm/lcm_coretypes.h>


namespace robot_msgs
{

class plan_exec_opts_t
{
    public:
        static constexpr int16_t  DEFAULT = 0;
        static constexpr int16_t  MOVE_UNTIL_STOP = 1;
        static constexpr int16_t  RETRACT_FROM_STOP = 2;
        static constexpr int16_t  OFFSET_TRAJ = 3;
        static constexpr int16_t  MOVE_UNTIL_STOP_W_OFFSET_TRAJ_PLUS = 4;
        static constexpr int16_t  RETRACT_FROM_STOP_W_OFFSET_TRAJ_PLUS = 5;

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
         * Returns "plan_exec_opts_t"
         */
        inline static const char* getTypeName();

        // LCM support functions. Users should not call these
        inline int _encodeNoHash(void *buf, int offset, int maxlen) const;
        inline int _getEncodedSizeNoHash() const;
        inline int _decodeNoHash(const void *buf, int offset, int maxlen);
        inline static uint64_t _computeHash(const __lcm_hash_ptr *p);
};

int plan_exec_opts_t::encode(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;
    int64_t hash = getHash();

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->_encodeNoHash(buf, offset + pos, maxlen - pos);
    if (tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int plan_exec_opts_t::decode(const void *buf, int offset, int maxlen)
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

int plan_exec_opts_t::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t plan_exec_opts_t::getHash()
{
    static int64_t hash = static_cast<int64_t>(_computeHash(NULL));
    return hash;
}

const char* plan_exec_opts_t::getTypeName()
{
    return "plan_exec_opts_t";
}

int plan_exec_opts_t::_encodeNoHash(void *, int, int) const
{
    return 0;
}

int plan_exec_opts_t::_decodeNoHash(const void *, int, int)
{
    return 0;
}

int plan_exec_opts_t::_getEncodedSizeNoHash() const
{
    return 0;
}

uint64_t plan_exec_opts_t::_computeHash(const __lcm_hash_ptr *)
{
    uint64_t hash = 0x0000000012345678LL;
    return (hash<<1) + ((hash>>63)&1);
}

}

#endif
