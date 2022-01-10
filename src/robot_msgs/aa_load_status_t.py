"""LCM type definitions
This file automatically generated by lcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

import robot_msgs.double_t

class aa_load_status_t(object):
    __slots__ = ["utime", "is_responsive", "load_value"]

    __typenames__ = ["int64_t", "boolean", "robot_msgs.double_t"]

    __dimensions__ = [None, None, None]

    def __init__(self):
        self.utime = 0
        self.is_responsive = False
        self.load_value = robot_msgs.double_t()

    def encode(self):
        buf = BytesIO()
        buf.write(aa_load_status_t._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        buf.write(struct.pack(">qb", self.utime, self.is_responsive))
        assert self.load_value._get_packed_fingerprint() == robot_msgs.double_t._get_packed_fingerprint()
        self.load_value._encode_one(buf)

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != aa_load_status_t._get_packed_fingerprint():
            raise ValueError("Decode error")
        return aa_load_status_t._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = aa_load_status_t()
        self.utime = struct.unpack(">q", buf.read(8))[0]
        self.is_responsive = bool(struct.unpack('b', buf.read(1))[0])
        self.load_value = robot_msgs.double_t._decode_one(buf)
        return self
    _decode_one = staticmethod(_decode_one)

    def _get_hash_recursive(parents):
        if aa_load_status_t in parents: return 0
        newparents = parents + [aa_load_status_t]
        tmphash = (0xfaaa4334d88b75db+ robot_msgs.double_t._get_hash_recursive(newparents)) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff) + (tmphash>>63)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if aa_load_status_t._packed_fingerprint is None:
            aa_load_status_t._packed_fingerprint = struct.pack(">Q", aa_load_status_t._get_hash_recursive([]))
        return aa_load_status_t._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

    def get_hash(self):
        """Get the LCM hash of the struct"""
        return struct.unpack(">Q", aa_load_status_t._get_packed_fingerprint())[0]

