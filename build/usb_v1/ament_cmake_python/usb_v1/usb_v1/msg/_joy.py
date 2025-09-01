# generated from rosidl_generator_py/resource/_idl.py.em
# with input from usb_v1:msg/Joy.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'header'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Joy(type):
    """Metaclass of message 'Joy'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('usb_v1')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'usb_v1.msg.Joy')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__joy
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__joy
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__joy
            cls._TYPE_SUPPORT = module.type_support_msg__msg__joy
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__joy

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Joy(metaclass=Metaclass_Joy):
    """Message class 'Joy'."""

    __slots__ = [
        '_header',
        '_move_1',
        '_move_2',
        '_move_3',
        '_move_4',
        '_set1',
        '_set2',
        '_attack1',
        '_attack2',
        '_attack3',
        '_attack4',
        '_stick_lx',
        '_stick_ly',
        '_stick_rx',
        '_stick_ry',
    ]

    _fields_and_field_types = {
        'header': 'uint8[2]',
        'move_1': 'uint8',
        'move_2': 'uint8',
        'move_3': 'uint8',
        'move_4': 'uint8',
        'set1': 'uint8',
        'set2': 'uint8',
        'attack1': 'uint8',
        'attack2': 'uint8',
        'attack3': 'uint8',
        'attack4': 'uint8',
        'stick_lx': 'int8',
        'stick_ly': 'int8',
        'stick_rx': 'int8',
        'stick_ry': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 2),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'header' not in kwargs:
            self.header = numpy.zeros(2, dtype=numpy.uint8)
        else:
            self.header = numpy.array(kwargs.get('header'), dtype=numpy.uint8)
            assert self.header.shape == (2, )
        self.move_1 = kwargs.get('move_1', int())
        self.move_2 = kwargs.get('move_2', int())
        self.move_3 = kwargs.get('move_3', int())
        self.move_4 = kwargs.get('move_4', int())
        self.set1 = kwargs.get('set1', int())
        self.set2 = kwargs.get('set2', int())
        self.attack1 = kwargs.get('attack1', int())
        self.attack2 = kwargs.get('attack2', int())
        self.attack3 = kwargs.get('attack3', int())
        self.attack4 = kwargs.get('attack4', int())
        self.stick_lx = kwargs.get('stick_lx', int())
        self.stick_ly = kwargs.get('stick_ly', int())
        self.stick_rx = kwargs.get('stick_rx', int())
        self.stick_ry = kwargs.get('stick_ry', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if all(self.header != other.header):
            return False
        if self.move_1 != other.move_1:
            return False
        if self.move_2 != other.move_2:
            return False
        if self.move_3 != other.move_3:
            return False
        if self.move_4 != other.move_4:
            return False
        if self.set1 != other.set1:
            return False
        if self.set2 != other.set2:
            return False
        if self.attack1 != other.attack1:
            return False
        if self.attack2 != other.attack2:
            return False
        if self.attack3 != other.attack3:
            return False
        if self.attack4 != other.attack4:
            return False
        if self.stick_lx != other.stick_lx:
            return False
        if self.stick_ly != other.stick_ly:
            return False
        if self.stick_rx != other.stick_rx:
            return False
        if self.stick_ry != other.stick_ry:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'header' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 2, \
                "The 'header' numpy.ndarray() must have a size of 2"
            self._header = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'header' field must be a set or sequence with length 2 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._header = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def move_1(self):
        """Message field 'move_1'."""
        return self._move_1

    @move_1.setter
    def move_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'move_1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'move_1' field must be an unsigned integer in [0, 255]"
        self._move_1 = value

    @builtins.property
    def move_2(self):
        """Message field 'move_2'."""
        return self._move_2

    @move_2.setter
    def move_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'move_2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'move_2' field must be an unsigned integer in [0, 255]"
        self._move_2 = value

    @builtins.property
    def move_3(self):
        """Message field 'move_3'."""
        return self._move_3

    @move_3.setter
    def move_3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'move_3' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'move_3' field must be an unsigned integer in [0, 255]"
        self._move_3 = value

    @builtins.property
    def move_4(self):
        """Message field 'move_4'."""
        return self._move_4

    @move_4.setter
    def move_4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'move_4' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'move_4' field must be an unsigned integer in [0, 255]"
        self._move_4 = value

    @builtins.property
    def set1(self):
        """Message field 'set1'."""
        return self._set1

    @set1.setter
    def set1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'set1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'set1' field must be an unsigned integer in [0, 255]"
        self._set1 = value

    @builtins.property
    def set2(self):
        """Message field 'set2'."""
        return self._set2

    @set2.setter
    def set2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'set2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'set2' field must be an unsigned integer in [0, 255]"
        self._set2 = value

    @builtins.property
    def attack1(self):
        """Message field 'attack1'."""
        return self._attack1

    @attack1.setter
    def attack1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'attack1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'attack1' field must be an unsigned integer in [0, 255]"
        self._attack1 = value

    @builtins.property
    def attack2(self):
        """Message field 'attack2'."""
        return self._attack2

    @attack2.setter
    def attack2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'attack2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'attack2' field must be an unsigned integer in [0, 255]"
        self._attack2 = value

    @builtins.property
    def attack3(self):
        """Message field 'attack3'."""
        return self._attack3

    @attack3.setter
    def attack3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'attack3' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'attack3' field must be an unsigned integer in [0, 255]"
        self._attack3 = value

    @builtins.property
    def attack4(self):
        """Message field 'attack4'."""
        return self._attack4

    @attack4.setter
    def attack4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'attack4' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'attack4' field must be an unsigned integer in [0, 255]"
        self._attack4 = value

    @builtins.property
    def stick_lx(self):
        """Message field 'stick_lx'."""
        return self._stick_lx

    @stick_lx.setter
    def stick_lx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stick_lx' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'stick_lx' field must be an integer in [-128, 127]"
        self._stick_lx = value

    @builtins.property
    def stick_ly(self):
        """Message field 'stick_ly'."""
        return self._stick_ly

    @stick_ly.setter
    def stick_ly(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stick_ly' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'stick_ly' field must be an integer in [-128, 127]"
        self._stick_ly = value

    @builtins.property
    def stick_rx(self):
        """Message field 'stick_rx'."""
        return self._stick_rx

    @stick_rx.setter
    def stick_rx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stick_rx' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'stick_rx' field must be an integer in [-128, 127]"
        self._stick_rx = value

    @builtins.property
    def stick_ry(self):
        """Message field 'stick_ry'."""
        return self._stick_ry

    @stick_ry.setter
    def stick_ry(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stick_ry' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'stick_ry' field must be an integer in [-128, 127]"
        self._stick_ry = value
