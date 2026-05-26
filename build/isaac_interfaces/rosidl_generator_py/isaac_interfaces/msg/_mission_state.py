# generated from rosidl_generator_py/resource/_idl.py.em
# with input from isaac_interfaces:msg/MissionState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MissionState(type):
    """Metaclass of message 'MissionState'."""

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
            module = import_type_support('isaac_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'isaac_interfaces.msg.MissionState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mission_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mission_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mission_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mission_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mission_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MissionState(metaclass=Metaclass_MissionState):
    """Message class 'MissionState'."""

    __slots__ = [
        '_state',
        '_previous_state',
        '_battery_percent',
        '_low_battery',
        '_critical_battery',
        '_cargo_count',
        '_cargo_capacity',
        '_collected_count',
        '_collection_goal',
        '_active_task',
        '_last_error',
    ]

    _fields_and_field_types = {
        'state': 'string',
        'previous_state': 'string',
        'battery_percent': 'float',
        'low_battery': 'boolean',
        'critical_battery': 'boolean',
        'cargo_count': 'int32',
        'cargo_capacity': 'int32',
        'collected_count': 'int32',
        'collection_goal': 'int32',
        'active_task': 'string',
        'last_error': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.state = kwargs.get('state', str())
        self.previous_state = kwargs.get('previous_state', str())
        self.battery_percent = kwargs.get('battery_percent', float())
        self.low_battery = kwargs.get('low_battery', bool())
        self.critical_battery = kwargs.get('critical_battery', bool())
        self.cargo_count = kwargs.get('cargo_count', int())
        self.cargo_capacity = kwargs.get('cargo_capacity', int())
        self.collected_count = kwargs.get('collected_count', int())
        self.collection_goal = kwargs.get('collection_goal', int())
        self.active_task = kwargs.get('active_task', str())
        self.last_error = kwargs.get('last_error', str())

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
        if self.state != other.state:
            return False
        if self.previous_state != other.previous_state:
            return False
        if self.battery_percent != other.battery_percent:
            return False
        if self.low_battery != other.low_battery:
            return False
        if self.critical_battery != other.critical_battery:
            return False
        if self.cargo_count != other.cargo_count:
            return False
        if self.cargo_capacity != other.cargo_capacity:
            return False
        if self.collected_count != other.collected_count:
            return False
        if self.collection_goal != other.collection_goal:
            return False
        if self.active_task != other.active_task:
            return False
        if self.last_error != other.last_error:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'state' field must be of type 'str'"
        self._state = value

    @builtins.property
    def previous_state(self):
        """Message field 'previous_state'."""
        return self._previous_state

    @previous_state.setter
    def previous_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'previous_state' field must be of type 'str'"
        self._previous_state = value

    @builtins.property
    def battery_percent(self):
        """Message field 'battery_percent'."""
        return self._battery_percent

    @battery_percent.setter
    def battery_percent(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_percent' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_percent' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_percent = value

    @builtins.property
    def low_battery(self):
        """Message field 'low_battery'."""
        return self._low_battery

    @low_battery.setter
    def low_battery(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'low_battery' field must be of type 'bool'"
        self._low_battery = value

    @builtins.property
    def critical_battery(self):
        """Message field 'critical_battery'."""
        return self._critical_battery

    @critical_battery.setter
    def critical_battery(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'critical_battery' field must be of type 'bool'"
        self._critical_battery = value

    @builtins.property
    def cargo_count(self):
        """Message field 'cargo_count'."""
        return self._cargo_count

    @cargo_count.setter
    def cargo_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cargo_count' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cargo_count' field must be an integer in [-2147483648, 2147483647]"
        self._cargo_count = value

    @builtins.property
    def cargo_capacity(self):
        """Message field 'cargo_capacity'."""
        return self._cargo_capacity

    @cargo_capacity.setter
    def cargo_capacity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cargo_capacity' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cargo_capacity' field must be an integer in [-2147483648, 2147483647]"
        self._cargo_capacity = value

    @builtins.property
    def collected_count(self):
        """Message field 'collected_count'."""
        return self._collected_count

    @collected_count.setter
    def collected_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'collected_count' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'collected_count' field must be an integer in [-2147483648, 2147483647]"
        self._collected_count = value

    @builtins.property
    def collection_goal(self):
        """Message field 'collection_goal'."""
        return self._collection_goal

    @collection_goal.setter
    def collection_goal(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'collection_goal' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'collection_goal' field must be an integer in [-2147483648, 2147483647]"
        self._collection_goal = value

    @builtins.property
    def active_task(self):
        """Message field 'active_task'."""
        return self._active_task

    @active_task.setter
    def active_task(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'active_task' field must be of type 'str'"
        self._active_task = value

    @builtins.property
    def last_error(self):
        """Message field 'last_error'."""
        return self._last_error

    @last_error.setter
    def last_error(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'last_error' field must be of type 'str'"
        self._last_error = value
