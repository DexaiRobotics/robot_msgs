/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#ifndef __robot_msgs_stuffgetter_plan_t_hpp__
#define __robot_msgs_stuffgetter_plan_t_hpp__

#include <lcm/lcm_coretypes.h>

#include <string>
#include <vector>
#include "bot_core/robot_state_t.hpp"
#include "bot_core/robot_state_t.hpp"
#include "bot_core/robot_state_t.hpp"
#include "bot_core/robot_state_t.hpp"
#include "bot_core/robot_state_t.hpp"
#include "bot_core/robot_state_t.hpp"
#include "bot_core/robot_state_t.hpp"
#include "bot_core/robot_state_t.hpp"
#include "bot_core/robot_state_t.hpp"
#include "bot_core/robot_state_t.hpp"
#include "bot_core/robot_state_t.hpp"
#include "bot_core/robot_state_t.hpp"

namespace robot_msgs
{

class stuffgetter_plan_t
{
    public:
        int64_t    utime;

        /// total time for the plan
        std::string robot_type;

        std::string utensil;

        std::string material;

        std::string container;

        /**
         * A StuffGetter plan is divided into approach, get_stuff, finish, and dispense phases
         * We store the key points to generate the trajectory and the full plans
         * Approach waypoint is reached via RRT
         */
        bot_core::robot_state_t approach;

        /// approach_plan links approach <----> get_stuff[0]
        int32_t    num_approach_plan_states;

        std::vector< bot_core::robot_state_t > approach_plan;

        /// GetStuff Plan encodes the interaction with the material 
        int32_t    num_get_stuff_states;

        std::vector< bot_core::robot_state_t > get_stuff;

        int32_t    num_get_stuff_plan_states;

        std::vector< bot_core::robot_state_t > get_stuff_plan;

        /// finish is a ready state before dispensing
        bot_core::robot_state_t finish;

        int32_t    num_finish_plan_states;

        std::vector< bot_core::robot_state_t > finish_plan;

        /// dispense links finish <----> dispense_point and dispenses
        int32_t    num_dispense_states;

        std::vector< bot_core::robot_state_t > dispense;

        int32_t    num_dispense_plan_states;

        std::vector< bot_core::robot_state_t > dispense_plan;

        /// attach_tool[0] is reached via RRT from last point 
        int32_t    num_attach_tool_states;

        std::vector< bot_core::robot_state_t > attach_tool;

        int32_t    num_attach_tool_plan_states;

        std::vector< bot_core::robot_state_t > attach_tool_plan;

        /// remove_tool[0] is reached via RRT from dispense 
        int32_t    num_remove_tool_states;

        std::vector< bot_core::robot_state_t > remove_tool;

        int32_t    num_remove_tool_plan_states;

        std::vector< bot_core::robot_state_t > remove_tool_plan;

        /// information for the controller. Flexibility to do mixed pos/impedance control
        int8_t     arm_control_type;

    public:
        /// see constants below  
        // If you're using C++11 and are getting compiler errors saying
        // things like ‘constexpr’ needed for in-class initialization of
        // static data member then re-run lcm-gen with '--cpp-std=c++11'
        // to generate code that is compliant with C++11
        static const int8_t   NONE = 0;
        // If you're using C++11 and are getting compiler errors saying
        // things like ‘constexpr’ needed for in-class initialization of
        // static data member then re-run lcm-gen with '--cpp-std=c++11'
        // to generate code that is compliant with C++11
        static const int8_t   POSITION = 1;
        // If you're using C++11 and are getting compiler errors saying
        // things like ‘constexpr’ needed for in-class initialization of
        // static data member then re-run lcm-gen with '--cpp-std=c++11'
        // to generate code that is compliant with C++11
        static const int8_t   IMPEDANCE = 2;
        // If you're using C++11 and are getting compiler errors saying
        // things like ‘constexpr’ needed for in-class initialization of
        // static data member then re-run lcm-gen with '--cpp-std=c++11'
        // to generate code that is compliant with C++11
        static const int8_t   STIFF = 3;
        // If you're using C++11 and are getting compiler errors saying
        // things like ‘constexpr’ needed for in-class initialization of
        // static data member then re-run lcm-gen with '--cpp-std=c++11'
        // to generate code that is compliant with C++11
        static const int8_t   COMPLIANT = 4;

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
         * Returns "stuffgetter_plan_t"
         */
        inline static const char* getTypeName();

        // LCM support functions. Users should not call these
        inline int _encodeNoHash(void *buf, int offset, int maxlen) const;
        inline int _getEncodedSizeNoHash() const;
        inline int _decodeNoHash(const void *buf, int offset, int maxlen);
        inline static uint64_t _computeHash(const __lcm_hash_ptr *p);
};

int stuffgetter_plan_t::encode(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;
    int64_t hash = getHash();

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->_encodeNoHash(buf, offset + pos, maxlen - pos);
    if (tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int stuffgetter_plan_t::decode(const void *buf, int offset, int maxlen)
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

int stuffgetter_plan_t::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t stuffgetter_plan_t::getHash()
{
    static int64_t hash = static_cast<int64_t>(_computeHash(NULL));
    return hash;
}

const char* stuffgetter_plan_t::getTypeName()
{
    return "stuffgetter_plan_t";
}

int stuffgetter_plan_t::_encodeNoHash(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &this->utime, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    char* robot_type_cstr = const_cast<char*>(this->robot_type.c_str());
    tlen = __string_encode_array(
        buf, offset + pos, maxlen - pos, &robot_type_cstr, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    char* utensil_cstr = const_cast<char*>(this->utensil.c_str());
    tlen = __string_encode_array(
        buf, offset + pos, maxlen - pos, &utensil_cstr, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    char* material_cstr = const_cast<char*>(this->material.c_str());
    tlen = __string_encode_array(
        buf, offset + pos, maxlen - pos, &material_cstr, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    char* container_cstr = const_cast<char*>(this->container.c_str());
    tlen = __string_encode_array(
        buf, offset + pos, maxlen - pos, &container_cstr, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->approach._encodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_approach_plan_states, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    for (int a0 = 0; a0 < this->num_approach_plan_states; a0++) {
        tlen = this->approach_plan[a0]._encodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_get_stuff_states, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    for (int a0 = 0; a0 < this->num_get_stuff_states; a0++) {
        tlen = this->get_stuff[a0]._encodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_get_stuff_plan_states, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    for (int a0 = 0; a0 < this->num_get_stuff_plan_states; a0++) {
        tlen = this->get_stuff_plan[a0]._encodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = this->finish._encodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_finish_plan_states, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    for (int a0 = 0; a0 < this->num_finish_plan_states; a0++) {
        tlen = this->finish_plan[a0]._encodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_dispense_states, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    for (int a0 = 0; a0 < this->num_dispense_states; a0++) {
        tlen = this->dispense[a0]._encodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_dispense_plan_states, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    for (int a0 = 0; a0 < this->num_dispense_plan_states; a0++) {
        tlen = this->dispense_plan[a0]._encodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_attach_tool_states, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    for (int a0 = 0; a0 < this->num_attach_tool_states; a0++) {
        tlen = this->attach_tool[a0]._encodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_attach_tool_plan_states, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    for (int a0 = 0; a0 < this->num_attach_tool_plan_states; a0++) {
        tlen = this->attach_tool_plan[a0]._encodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_remove_tool_states, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    for (int a0 = 0; a0 < this->num_remove_tool_states; a0++) {
        tlen = this->remove_tool[a0]._encodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_remove_tool_plan_states, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    for (int a0 = 0; a0 < this->num_remove_tool_plan_states; a0++) {
        tlen = this->remove_tool_plan[a0]._encodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &this->arm_control_type, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int stuffgetter_plan_t::_decodeNoHash(const void *buf, int offset, int maxlen)
{
    int pos = 0, tlen;

    tlen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this->utime, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    int32_t __robot_type_len__;
    tlen = __int32_t_decode_array(
        buf, offset + pos, maxlen - pos, &__robot_type_len__, 1);
    if(tlen < 0) return tlen; else pos += tlen;
    if(__robot_type_len__ > maxlen - pos) return -1;
    this->robot_type.assign(
        static_cast<const char*>(buf) + offset + pos, __robot_type_len__ - 1);
    pos += __robot_type_len__;

    int32_t __utensil_len__;
    tlen = __int32_t_decode_array(
        buf, offset + pos, maxlen - pos, &__utensil_len__, 1);
    if(tlen < 0) return tlen; else pos += tlen;
    if(__utensil_len__ > maxlen - pos) return -1;
    this->utensil.assign(
        static_cast<const char*>(buf) + offset + pos, __utensil_len__ - 1);
    pos += __utensil_len__;

    int32_t __material_len__;
    tlen = __int32_t_decode_array(
        buf, offset + pos, maxlen - pos, &__material_len__, 1);
    if(tlen < 0) return tlen; else pos += tlen;
    if(__material_len__ > maxlen - pos) return -1;
    this->material.assign(
        static_cast<const char*>(buf) + offset + pos, __material_len__ - 1);
    pos += __material_len__;

    int32_t __container_len__;
    tlen = __int32_t_decode_array(
        buf, offset + pos, maxlen - pos, &__container_len__, 1);
    if(tlen < 0) return tlen; else pos += tlen;
    if(__container_len__ > maxlen - pos) return -1;
    this->container.assign(
        static_cast<const char*>(buf) + offset + pos, __container_len__ - 1);
    pos += __container_len__;

    tlen = this->approach._decodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_approach_plan_states, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    try {
        this->approach_plan.resize(this->num_approach_plan_states);
    } catch (...) {
        return -1;
    }
    for (int a0 = 0; a0 < this->num_approach_plan_states; a0++) {
        tlen = this->approach_plan[a0]._decodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_get_stuff_states, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    try {
        this->get_stuff.resize(this->num_get_stuff_states);
    } catch (...) {
        return -1;
    }
    for (int a0 = 0; a0 < this->num_get_stuff_states; a0++) {
        tlen = this->get_stuff[a0]._decodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_get_stuff_plan_states, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    try {
        this->get_stuff_plan.resize(this->num_get_stuff_plan_states);
    } catch (...) {
        return -1;
    }
    for (int a0 = 0; a0 < this->num_get_stuff_plan_states; a0++) {
        tlen = this->get_stuff_plan[a0]._decodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = this->finish._decodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_finish_plan_states, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    try {
        this->finish_plan.resize(this->num_finish_plan_states);
    } catch (...) {
        return -1;
    }
    for (int a0 = 0; a0 < this->num_finish_plan_states; a0++) {
        tlen = this->finish_plan[a0]._decodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_dispense_states, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    try {
        this->dispense.resize(this->num_dispense_states);
    } catch (...) {
        return -1;
    }
    for (int a0 = 0; a0 < this->num_dispense_states; a0++) {
        tlen = this->dispense[a0]._decodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_dispense_plan_states, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    try {
        this->dispense_plan.resize(this->num_dispense_plan_states);
    } catch (...) {
        return -1;
    }
    for (int a0 = 0; a0 < this->num_dispense_plan_states; a0++) {
        tlen = this->dispense_plan[a0]._decodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_attach_tool_states, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    try {
        this->attach_tool.resize(this->num_attach_tool_states);
    } catch (...) {
        return -1;
    }
    for (int a0 = 0; a0 < this->num_attach_tool_states; a0++) {
        tlen = this->attach_tool[a0]._decodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_attach_tool_plan_states, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    try {
        this->attach_tool_plan.resize(this->num_attach_tool_plan_states);
    } catch (...) {
        return -1;
    }
    for (int a0 = 0; a0 < this->num_attach_tool_plan_states; a0++) {
        tlen = this->attach_tool_plan[a0]._decodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_remove_tool_states, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    try {
        this->remove_tool.resize(this->num_remove_tool_states);
    } catch (...) {
        return -1;
    }
    for (int a0 = 0; a0 < this->num_remove_tool_states; a0++) {
        tlen = this->remove_tool[a0]._decodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_remove_tool_plan_states, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    try {
        this->remove_tool_plan.resize(this->num_remove_tool_plan_states);
    } catch (...) {
        return -1;
    }
    for (int a0 = 0; a0 < this->num_remove_tool_plan_states; a0++) {
        tlen = this->remove_tool_plan[a0]._decodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &this->arm_control_type, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int stuffgetter_plan_t::_getEncodedSizeNoHash() const
{
    int enc_size = 0;
    enc_size += __int64_t_encoded_array_size(NULL, 1);
    enc_size += this->robot_type.size() + 4 + 1;
    enc_size += this->utensil.size() + 4 + 1;
    enc_size += this->material.size() + 4 + 1;
    enc_size += this->container.size() + 4 + 1;
    enc_size += this->approach._getEncodedSizeNoHash();
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->num_approach_plan_states; a0++) {
        enc_size += this->approach_plan[a0]._getEncodedSizeNoHash();
    }
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->num_get_stuff_states; a0++) {
        enc_size += this->get_stuff[a0]._getEncodedSizeNoHash();
    }
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->num_get_stuff_plan_states; a0++) {
        enc_size += this->get_stuff_plan[a0]._getEncodedSizeNoHash();
    }
    enc_size += this->finish._getEncodedSizeNoHash();
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->num_finish_plan_states; a0++) {
        enc_size += this->finish_plan[a0]._getEncodedSizeNoHash();
    }
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->num_dispense_states; a0++) {
        enc_size += this->dispense[a0]._getEncodedSizeNoHash();
    }
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->num_dispense_plan_states; a0++) {
        enc_size += this->dispense_plan[a0]._getEncodedSizeNoHash();
    }
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->num_attach_tool_states; a0++) {
        enc_size += this->attach_tool[a0]._getEncodedSizeNoHash();
    }
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->num_attach_tool_plan_states; a0++) {
        enc_size += this->attach_tool_plan[a0]._getEncodedSizeNoHash();
    }
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->num_remove_tool_states; a0++) {
        enc_size += this->remove_tool[a0]._getEncodedSizeNoHash();
    }
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->num_remove_tool_plan_states; a0++) {
        enc_size += this->remove_tool_plan[a0]._getEncodedSizeNoHash();
    }
    enc_size += __int8_t_encoded_array_size(NULL, 1);
    return enc_size;
}

uint64_t stuffgetter_plan_t::_computeHash(const __lcm_hash_ptr *p)
{
    const __lcm_hash_ptr *fp;
    for(fp = p; fp != NULL; fp = fp->parent)
        if(fp->v == stuffgetter_plan_t::getHash)
            return 0;
    const __lcm_hash_ptr cp = { p, stuffgetter_plan_t::getHash };

    uint64_t hash = 0xe59fc54876338524LL +
         bot_core::robot_state_t::_computeHash(&cp) +
         bot_core::robot_state_t::_computeHash(&cp) +
         bot_core::robot_state_t::_computeHash(&cp) +
         bot_core::robot_state_t::_computeHash(&cp) +
         bot_core::robot_state_t::_computeHash(&cp) +
         bot_core::robot_state_t::_computeHash(&cp) +
         bot_core::robot_state_t::_computeHash(&cp) +
         bot_core::robot_state_t::_computeHash(&cp) +
         bot_core::robot_state_t::_computeHash(&cp) +
         bot_core::robot_state_t::_computeHash(&cp) +
         bot_core::robot_state_t::_computeHash(&cp) +
         bot_core::robot_state_t::_computeHash(&cp);

    return (hash<<1) + ((hash>>63)&1);
}

}

#endif
