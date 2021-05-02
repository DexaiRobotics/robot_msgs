"""LCM type definitions
This file automatically generated by lcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

import robot_msgs.lcmt_polynomial

class lcmt_polynomial_matrix(object):
    __slots__ = ["timestamp", "rows", "cols", "polynomials"]

    __typenames__ = ["int64_t", "int32_t", "int32_t", "robot_msgs.lcmt_polynomial"]

    __dimensions__ = [None, None, None, ["rows", "cols"]]

    def __init__(self):
        self.timestamp = 0
        self.rows = 0
        self.cols = 0
        self.polynomials = []

    def encode(self):
        buf = BytesIO()
        buf.write(lcmt_polynomial_matrix._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        buf.write(struct.pack(">qii", self.timestamp, self.rows, self.cols))
        for i0 in range(self.rows):
            for i1 in range(self.cols):
                assert self.polynomials[i0][i1]._get_packed_fingerprint() == robot_msgs.lcmt_polynomial._get_packed_fingerprint()
                self.polynomials[i0][i1]._encode_one(buf)

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != lcmt_polynomial_matrix._get_packed_fingerprint():
            raise ValueError("Decode error")
        return lcmt_polynomial_matrix._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = lcmt_polynomial_matrix()
        self.timestamp, self.rows, self.cols = struct.unpack(">qii", buf.read(16))
        self.polynomials = []
        for i0 in range(self.rows):
            self.polynomials.append ([])
            for i1 in range(self.cols):
                self.polynomials[i0].append(robot_msgs.lcmt_polynomial._decode_one(buf))
        return self
    _decode_one = staticmethod(_decode_one)

    def _get_hash_recursive(parents):
        if lcmt_polynomial_matrix in parents: return 0
        newparents = parents + [lcmt_polynomial_matrix]
        tmphash = (0xb7c3cad59f376c2d+ robot_msgs.lcmt_polynomial._get_hash_recursive(newparents)) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff) + (tmphash>>63)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if lcmt_polynomial_matrix._packed_fingerprint is None:
            lcmt_polynomial_matrix._packed_fingerprint = struct.pack(">Q", lcmt_polynomial_matrix._get_hash_recursive([]))
        return lcmt_polynomial_matrix._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

    def get_hash(self):
        """Get the LCM hash of the struct"""
        return struct.unpack(">Q", lcmt_polynomial_matrix._get_packed_fingerprint())[0]

