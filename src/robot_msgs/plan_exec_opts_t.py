"""LCM type definitions
This file automatically generated by lcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

class plan_exec_opts_t(object):
    __slots__ = []

    __typenames__ = []

    __dimensions__ = []

    DEFAULT = 0
    MOVE_UNTIL_STOP = 1
    RETRACT_FROM_STOP = 2
    OFFSET_TRAJ = 4

    def __init__(self):
        pass

    def encode(self):
        buf = BytesIO()
        buf.write(plan_exec_opts_t._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        pass

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != plan_exec_opts_t._get_packed_fingerprint():
            raise ValueError("Decode error")
        return plan_exec_opts_t._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = plan_exec_opts_t()
        return self
    _decode_one = staticmethod(_decode_one)

    def _get_hash_recursive(parents):
        if plan_exec_opts_t in parents: return 0
        tmphash = (0x12345678) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff) + (tmphash>>63)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if plan_exec_opts_t._packed_fingerprint is None:
            plan_exec_opts_t._packed_fingerprint = struct.pack(">Q", plan_exec_opts_t._get_hash_recursive([]))
        return plan_exec_opts_t._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

    def get_hash(self):
        """Get the LCM hash of the struct"""
        return struct.unpack(">Q", plan_exec_opts_t._get_packed_fingerprint())[0]

