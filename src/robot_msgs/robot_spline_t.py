"""LCM type definitions
This file automatically generated by lcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

import robot_msgs.robot_joint

import robot_msgs.lcmt_piecewise_polynomial

import robot_msgs.pose_t

class robot_spline_t(object):
    __slots__ = ["utime", "robot_name", "num_states", "piecewise_polynomial", "dof", "robot_joints", "cartesian_goal", "exec_opt"]

    __typenames__ = ["int64_t", "string", "int32_t", "robot_msgs.lcmt_piecewise_polynomial", "int32_t", "robot_msgs.robot_joint", "robot_msgs.pose_t", "int16_t"]

    __dimensions__ = [None, None, None, None, None, ["dof"], None, None]

    def __init__(self):
        self.utime = 0
        self.robot_name = ""
        self.num_states = 0
        self.piecewise_polynomial = robot_msgs.lcmt_piecewise_polynomial()
        self.dof = 0
        self.robot_joints = []
        self.cartesian_goal = robot_msgs.pose_t()
        self.exec_opt = 0

    def encode(self):
        buf = BytesIO()
        buf.write(robot_spline_t._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        buf.write(struct.pack(">q", self.utime))
        __robot_name_encoded = self.robot_name.encode('utf-8')
        buf.write(struct.pack('>I', len(__robot_name_encoded)+1))
        buf.write(__robot_name_encoded)
        buf.write(b"\0")
        buf.write(struct.pack(">i", self.num_states))
        assert self.piecewise_polynomial._get_packed_fingerprint() == robot_msgs.lcmt_piecewise_polynomial._get_packed_fingerprint()
        self.piecewise_polynomial._encode_one(buf)
        buf.write(struct.pack(">i", self.dof))
        for i0 in range(self.dof):
            assert self.robot_joints[i0]._get_packed_fingerprint() == robot_msgs.robot_joint._get_packed_fingerprint()
            self.robot_joints[i0]._encode_one(buf)
        assert self.cartesian_goal._get_packed_fingerprint() == robot_msgs.pose_t._get_packed_fingerprint()
        self.cartesian_goal._encode_one(buf)
        buf.write(struct.pack(">h", self.exec_opt))

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != robot_spline_t._get_packed_fingerprint():
            raise ValueError("Decode error")
        return robot_spline_t._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = robot_spline_t()
        self.utime = struct.unpack(">q", buf.read(8))[0]
        __robot_name_len = struct.unpack('>I', buf.read(4))[0]
        self.robot_name = buf.read(__robot_name_len)[:-1].decode('utf-8', 'replace')
        self.num_states = struct.unpack(">i", buf.read(4))[0]
        self.piecewise_polynomial = robot_msgs.lcmt_piecewise_polynomial._decode_one(buf)
        self.dof = struct.unpack(">i", buf.read(4))[0]
        self.robot_joints = []
        for i0 in range(self.dof):
            self.robot_joints.append(robot_msgs.robot_joint._decode_one(buf))
        self.cartesian_goal = robot_msgs.pose_t._decode_one(buf)
        self.exec_opt = struct.unpack(">h", buf.read(2))[0]
        return self
    _decode_one = staticmethod(_decode_one)

    def _get_hash_recursive(parents):
        if robot_spline_t in parents: return 0
        newparents = parents + [robot_spline_t]
        tmphash = (0xed0a1268ba000244+ robot_msgs.lcmt_piecewise_polynomial._get_hash_recursive(newparents)+ robot_msgs.robot_joint._get_hash_recursive(newparents)+ robot_msgs.pose_t._get_hash_recursive(newparents)) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff) + (tmphash>>63)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if robot_spline_t._packed_fingerprint is None:
            robot_spline_t._packed_fingerprint = struct.pack(">Q", robot_spline_t._get_hash_recursive([]))
        return robot_spline_t._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

    def get_hash(self):
        """Get the LCM hash of the struct"""
        return struct.unpack(">Q", robot_spline_t._get_packed_fingerprint())[0]

