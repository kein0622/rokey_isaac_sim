# generated from rosidl_generator_py/resource/_idl.py.em
# with input from isaac_interfaces:srv/ResetSimulation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ResetSimulation_Request(type):
    """Metaclass of message 'ResetSimulation_Request'."""

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
                'isaac_interfaces.srv.ResetSimulation_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__reset_simulation__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__reset_simulation__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__reset_simulation__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__reset_simulation__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__reset_simulation__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ResetSimulation_Request(metaclass=Metaclass_ResetSimulation_Request):
    """Message class 'ResetSimulation_Request'."""

    __slots__ = [
        '_reset_world',
        '_reset_robot',
        '_reset_mission',
        '_reason',
    ]

    _fields_and_field_types = {
        'reset_world': 'boolean',
        'reset_robot': 'boolean',
        'reset_mission': 'boolean',
        'reason': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.reset_world = kwargs.get('reset_world', bool())
        self.reset_robot = kwargs.get('reset_robot', bool())
        self.reset_mission = kwargs.get('reset_mission', bool())
        self.reason = kwargs.get('reason', str())

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
        if self.reset_world != other.reset_world:
            return False
        if self.reset_robot != other.reset_robot:
            return False
        if self.reset_mission != other.reset_mission:
            return False
        if self.reason != other.reason:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def reset_world(self):
        """Message field 'reset_world'."""
        return self._reset_world

    @reset_world.setter
    def reset_world(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reset_world' field must be of type 'bool'"
        self._reset_world = value

    @builtins.property
    def reset_robot(self):
        """Message field 'reset_robot'."""
        return self._reset_robot

    @reset_robot.setter
    def reset_robot(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reset_robot' field must be of type 'bool'"
        self._reset_robot = value

    @builtins.property
    def reset_mission(self):
        """Message field 'reset_mission'."""
        return self._reset_mission

    @reset_mission.setter
    def reset_mission(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reset_mission' field must be of type 'bool'"
        self._reset_mission = value

    @builtins.property
    def reason(self):
        """Message field 'reason'."""
        return self._reason

    @reason.setter
    def reason(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'reason' field must be of type 'str'"
        self._reason = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ResetSimulation_Response(type):
    """Metaclass of message 'ResetSimulation_Response'."""

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
                'isaac_interfaces.srv.ResetSimulation_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__reset_simulation__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__reset_simulation__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__reset_simulation__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__reset_simulation__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__reset_simulation__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ResetSimulation_Response(metaclass=Metaclass_ResetSimulation_Response):
    """Message class 'ResetSimulation_Response'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

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
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_ResetSimulation(type):
    """Metaclass of service 'ResetSimulation'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('isaac_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'isaac_interfaces.srv.ResetSimulation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__reset_simulation

            from isaac_interfaces.srv import _reset_simulation
            if _reset_simulation.Metaclass_ResetSimulation_Request._TYPE_SUPPORT is None:
                _reset_simulation.Metaclass_ResetSimulation_Request.__import_type_support__()
            if _reset_simulation.Metaclass_ResetSimulation_Response._TYPE_SUPPORT is None:
                _reset_simulation.Metaclass_ResetSimulation_Response.__import_type_support__()


class ResetSimulation(metaclass=Metaclass_ResetSimulation):
    from isaac_interfaces.srv._reset_simulation import ResetSimulation_Request as Request
    from isaac_interfaces.srv._reset_simulation import ResetSimulation_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
