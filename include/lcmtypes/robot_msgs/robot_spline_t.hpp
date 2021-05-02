/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#ifndef __robot_msgs_robot_spline_t_hpp__
#define __robot_msgs_robot_spline_t_hpp__

#include <lcm/lcm_coretypes.h>

#include <string>
#include <vector>
#include "robot_msgs/lcmt_piecewise_polynomial.hpp"
#include "robot_msgs/robot_joint.hpp"
#include "bot_core/position_3d_t.hpp"

namespace robot_msgs
{

class robot_spline_t
{
    public:
        int64_t    utime;

        std::string robot_name;

        int32_t    num_states;

        robot_msgs::lcmt_piecewise_polynomial piecewise_polynomial;

        int32_t    dof;

        std::vector< robot_msgs::robot_joint > robot_joints;

        bot_core::position_3d_t cartesian_goal;

        int16_t    exec_opt;

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
         * Returns "robot_spline_t"
         */
        inline static const char* getTypeName();

        // LCM support functions. Users should not call these
        inline int _encodeNoHash(void *buf, int offset, int maxlen) const;
        inline int _getEncodedSizeNoHash() const;
        inline int _decodeNoHash(const void *buf, int offset, int maxlen);
        inline static uint64_t _computeHash(const __lcm_hash_ptr *p);
};

int robot_spline_t::encode(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;
    int64_t hash = getHash();

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->_encodeNoHash(buf, offset + pos, maxlen - pos);
    if (tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int robot_spline_t::decode(const void *buf, int offset, int maxlen)
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

int robot_spline_t::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t robot_spline_t::getHash()
{
    static int64_t hash = static_cast<int64_t>(_computeHash(NULL));
    return hash;
}

const char* robot_spline_t::getTypeName()
{
    return "robot_spline_t";
}

int robot_spline_t::_encodeNoHash(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &this->utime, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    char* robot_name_cstr = const_cast<char*>(this->robot_name.c_str());
    tlen = __string_encode_array(
        buf, offset + pos, maxlen - pos, &robot_name_cstr, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_states, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->piecewise_polynomial._encodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->dof, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    for (int a0 = 0; a0 < this->dof; a0++) {
        tlen = this->robot_joints[a0]._encodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = this->cartesian_goal._encodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int16_t_encode_array(buf, offset + pos, maxlen - pos, &this->exec_opt, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int robot_spline_t::_decodeNoHash(const void *buf, int offset, int maxlen)
{
    int pos = 0, tlen;

    tlen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this->utime, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    int32_t __robot_name_len__;
    tlen = __int32_t_decode_array(
        buf, offset + pos, maxlen - pos, &__robot_name_len__, 1);
    if(tlen < 0) return tlen; else pos += tlen;
    if(__robot_name_len__ > maxlen - pos) return -1;
    this->robot_name.assign(
        static_cast<const char*>(buf) + offset + pos, __robot_name_len__ - 1);
    pos += __robot_name_len__;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_states, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->piecewise_polynomial._decodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->dof, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    try {
        this->robot_joints.resize(this->dof);
    } catch (...) {
        return -1;
    }
    for (int a0 = 0; a0 < this->dof; a0++) {
        tlen = this->robot_joints[a0]._decodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = this->cartesian_goal._decodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int16_t_decode_array(buf, offset + pos, maxlen - pos, &this->exec_opt, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int robot_spline_t::_getEncodedSizeNoHash() const
{
    int enc_size = 0;
    enc_size += __int64_t_encoded_array_size(NULL, 1);
    enc_size += this->robot_name.size() + 4 + 1;
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += this->piecewise_polynomial._getEncodedSizeNoHash();
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->dof; a0++) {
        enc_size += this->robot_joints[a0]._getEncodedSizeNoHash();
    }
    enc_size += this->cartesian_goal._getEncodedSizeNoHash();
    enc_size += __int16_t_encoded_array_size(NULL, 1);
    return enc_size;
}

uint64_t robot_spline_t::_computeHash(const __lcm_hash_ptr *p)
{
    const __lcm_hash_ptr *fp;
    for(fp = p; fp != NULL; fp = fp->parent)
        if(fp->v == robot_spline_t::getHash)
            return 0;
    const __lcm_hash_ptr cp = { p, robot_spline_t::getHash };

    uint64_t hash = 0xed0a1268ba000244LL +
         robot_msgs::lcmt_piecewise_polynomial::_computeHash(&cp) +
         robot_msgs::robot_joint::_computeHash(&cp) +
         bot_core::position_3d_t::_computeHash(&cp);

    return (hash<<1) + ((hash>>63)&1);
}

}

#endif
