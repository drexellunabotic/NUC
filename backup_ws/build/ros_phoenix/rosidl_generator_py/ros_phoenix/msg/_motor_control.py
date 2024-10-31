# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_phoenix:msg/MotorControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorControl(type):
    """Metaclass of message 'MotorControl'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PERCENT_OUTPUT': 0,
        'POSITION': 1,
        'VELOCITY': 2,
        'CURRENT': 3,
        'FOLLOWER': 5,
        'MOTION_PROFILE': 6,
        'MOTION_MAGIC': 7,
        'MOTION_PROFILE_ARC': 10,
        'DISABLED': 15,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ros_phoenix')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros_phoenix.msg.MotorControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_control
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_control
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_control
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_control
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_control

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PERCENT_OUTPUT': cls.__constants['PERCENT_OUTPUT'],
            'POSITION': cls.__constants['POSITION'],
            'VELOCITY': cls.__constants['VELOCITY'],
            'CURRENT': cls.__constants['CURRENT'],
            'FOLLOWER': cls.__constants['FOLLOWER'],
            'MOTION_PROFILE': cls.__constants['MOTION_PROFILE'],
            'MOTION_MAGIC': cls.__constants['MOTION_MAGIC'],
            'MOTION_PROFILE_ARC': cls.__constants['MOTION_PROFILE_ARC'],
            'DISABLED': cls.__constants['DISABLED'],
            'MODE__DEFAULT': 0,
            'VALUE__DEFAULT': 0.0,
        }

    @property
    def PERCENT_OUTPUT(self):
        """Message constant 'PERCENT_OUTPUT'."""
        return Metaclass_MotorControl.__constants['PERCENT_OUTPUT']

    @property
    def POSITION(self):
        """Message constant 'POSITION'."""
        return Metaclass_MotorControl.__constants['POSITION']

    @property
    def VELOCITY(self):
        """Message constant 'VELOCITY'."""
        return Metaclass_MotorControl.__constants['VELOCITY']

    @property
    def CURRENT(self):
        """Message constant 'CURRENT'."""
        return Metaclass_MotorControl.__constants['CURRENT']

    @property
    def FOLLOWER(self):
        """Message constant 'FOLLOWER'."""
        return Metaclass_MotorControl.__constants['FOLLOWER']

    @property
    def MOTION_PROFILE(self):
        """Message constant 'MOTION_PROFILE'."""
        return Metaclass_MotorControl.__constants['MOTION_PROFILE']

    @property
    def MOTION_MAGIC(self):
        """Message constant 'MOTION_MAGIC'."""
        return Metaclass_MotorControl.__constants['MOTION_MAGIC']

    @property
    def MOTION_PROFILE_ARC(self):
        """Message constant 'MOTION_PROFILE_ARC'."""
        return Metaclass_MotorControl.__constants['MOTION_PROFILE_ARC']

    @property
    def DISABLED(self):
        """Message constant 'DISABLED'."""
        return Metaclass_MotorControl.__constants['DISABLED']

    @property
    def MODE__DEFAULT(cls):
        """Return default value for message field 'mode'."""
        return 0

    @property
    def VALUE__DEFAULT(cls):
        """Return default value for message field 'value'."""
        return 0.0


class MotorControl(metaclass=Metaclass_MotorControl):
    """
    Message class 'MotorControl'.

    Constants:
      PERCENT_OUTPUT
      POSITION
      VELOCITY
      CURRENT
      FOLLOWER
      MOTION_PROFILE
      MOTION_MAGIC
      MOTION_PROFILE_ARC
      DISABLED
    """

    __slots__ = [
        '_mode',
        '_value',
    ]

    _fields_and_field_types = {
        'mode': 'int32',
        'value': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mode = kwargs.get(
            'mode', MotorControl.MODE__DEFAULT)
        self.value = kwargs.get(
            'value', MotorControl.VALUE__DEFAULT)

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
        if self.mode != other.mode:
            return False
        if self.value != other.value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mode' field must be an integer in [-2147483648, 2147483647]"
        self._mode = value

    @builtins.property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._value = value
