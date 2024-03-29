"""LCM type definitions
This file automatically generated by lcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

class trigger_t(object):
    __slots__ = ["utime", "success", "message"]

    __typenames__ = ["int64_t", "boolean", "string"]

    __dimensions__ = [None, None, None]

    def __init__(self):
        self.utime = 0
        self.success = False
        self.message = ""

    def encode(self):
        buf = BytesIO()
        buf.write(trigger_t._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        buf.write(struct.pack(">qb", self.utime, self.success))
        __message_encoded = self.message.encode('utf-8')
        buf.write(struct.pack('>I', len(__message_encoded)+1))
        buf.write(__message_encoded)
        buf.write(b"\0")

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != trigger_t._get_packed_fingerprint():
            raise ValueError("Decode error")
        return trigger_t._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = trigger_t()
        self.utime = struct.unpack(">q", buf.read(8))[0]
        self.success = bool(struct.unpack('b', buf.read(1))[0])
        __message_len = struct.unpack('>I', buf.read(4))[0]
        self.message = buf.read(__message_len)[:-1].decode('utf-8', 'replace')
        return self
    _decode_one = staticmethod(_decode_one)

    def _get_hash_recursive(parents):
        if trigger_t in parents: return 0
        tmphash = (0xb4a5e5884199d15b) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff) + (tmphash>>63)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if trigger_t._packed_fingerprint is None:
            trigger_t._packed_fingerprint = struct.pack(">Q", trigger_t._get_hash_recursive([]))
        return trigger_t._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

    def get_hash(self):
        """Get the LCM hash of the struct"""
        return struct.unpack(">Q", trigger_t._get_packed_fingerprint())[0]

