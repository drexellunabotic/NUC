# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_phoenix:msg/MotorStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorStatus(type):
    """Metaclass of message 'MotorStatus'."""

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
            module = import_type_support('ros_phoenix')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros_phoenix.msg.MotorStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorStatus(metaclass=Metaclass_MotorStatus):
    """Message class 'MotorStatus'."""

    __slots__ = [
        '_temperature',
        '_bus_voltage',
        '_output_percent',
        '_output_voltage',
        '_output_current',
        '_position',
        '_velocity',
        '_fwd_limit',
        '_rev_limit',
    ]

    _fields_and_field_types = {
        'temperature': 'double',
        'bus_voltage': 'double',
        'output_percent': 'double',
        'output_voltage': 'double',
        'output_current': 'double',
        'position': 'double',
        'velocity': 'double',
        'fwd_limit': 'boolean',
        'rev_limit': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.temperature = kwargs.get('temperature', float())
        self.bus_voltage = kwargs.get('bus_voltage', float())
        self.output_percent = kwargs.get('output_percent', float())
        self.output_voltage = kwargs.get('output_voltage', float())
        self.output_current = kwargs.get('output_current', float())
        self.position = kwargs.get('position', float())
        self.velocity = kwargs.get('velocity', float())
        self.fwd_limit = kwargs.get('fwd_limit', bool())
        self.rev_limit = kwargs.get('rev_limit', bool())

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
        if self.temperature != other.temperature:
            return False
        if self.bus_voltage != other.bus_voltage:
            return False
        if self.output_percent != other.output_percent:
            return False
        if self.output_voltage != other.output_voltage:
            return False
        if self.output_current != other.output_current:
            return False
        if self.position != other.position:
            return False
        if self.velocity != other.velocity:
            return False
        if self.fwd_limit != other.fwd_limit:
            return False
        if self.rev_limit != other.rev_limit:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temperature' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'temperature' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._temperature = value

    @builtins.property
    def bus_voltage(self):
        """Message field 'bus_voltage'."""
        return self._bus_voltage

    @bus_voltage.setter
    def bus_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bus_voltage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'bus_voltage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._bus_voltage = value

    @builtins.property
    def output_percent(self):
        """Message field 'output_percent'."""
        return self._output_percent

    @output_percent.setter
    def output_percent(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'output_percent' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'output_percent' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._output_percent = value

    @builtins.property
    def output_voltage(self):
        """Message field 'output_voltage'."""
        return self._output_voltage

    @output_voltage.setter
    def output_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'output_voltage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'output_voltage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._output_voltage = value

    @builtins.property
    def output_current(self):
        """Message field 'output_current'."""
        return self._output_current

    @output_current.setter
    def output_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'output_current' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'output_current' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._output_current = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'position' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._position = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._velocity = value

    @builtins.property
    def fwd_limit(self):
        """Message field 'fwd_limit'."""
        return self._fwd_limit

    @fwd_limit.setter
    def fwd_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fwd_limit' field must be of type 'bool'"
        self._fwd_limit = value

    @builtins.property
    def rev_limit(self):
        """Message field 'rev_limit'."""
        return self._rev_limit

    @rev_limit.setter
    def rev_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rev_limit' field must be of type 'bool'"
        self._rev_limit = value
