# generated from rosidl_generator_py/resource/_idl.py.em
# with input from isaac_interfaces:msg/PerceptionResult.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PerceptionResult(type):
    """Metaclass of message 'PerceptionResult'."""

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
                'isaac_interfaces.msg.PerceptionResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__perception_result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__perception_result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__perception_result
            cls._TYPE_SUPPORT = module.type_support_msg__msg__perception_result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__perception_result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PerceptionResult(metaclass=Metaclass_PerceptionResult):
    """Message class 'PerceptionResult'."""

    __slots__ = [
        '_mineral_detected',
        '_object_id',
        '_object_type',
        '_confidence',
        '_x',
        '_y',
        '_z',
        '_obstacle_detected',
        '_obstacle_distance',
        '_terrain_traversable',
        '_terrain_slope',
    ]

    _fields_and_field_types = {
        'mineral_detected': 'boolean',
        'object_id': 'string',
        'object_type': 'string',
        'confidence': 'float',
        'x': 'float',
        'y': 'float',
        'z': 'float',
        'obstacle_detected': 'boolean',
        'obstacle_distance': 'float',
        'terrain_traversable': 'boolean',
        'terrain_slope': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mineral_detected = kwargs.get('mineral_detected', bool())
        self.object_id = kwargs.get('object_id', str())
        self.object_type = kwargs.get('object_type', str())
        self.confidence = kwargs.get('confidence', float())
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.z = kwargs.get('z', float())
        self.obstacle_detected = kwargs.get('obstacle_detected', bool())
        self.obstacle_distance = kwargs.get('obstacle_distance', float())
        self.terrain_traversable = kwargs.get('terrain_traversable', bool())
        self.terrain_slope = kwargs.get('terrain_slope', float())

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
        if self.mineral_detected != other.mineral_detected:
            return False
        if self.object_id != other.object_id:
            return False
        if self.object_type != other.object_type:
            return False
        if self.confidence != other.confidence:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        if self.obstacle_detected != other.obstacle_detected:
            return False
        if self.obstacle_distance != other.obstacle_distance:
            return False
        if self.terrain_traversable != other.terrain_traversable:
            return False
        if self.terrain_slope != other.terrain_slope:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mineral_detected(self):
        """Message field 'mineral_detected'."""
        return self._mineral_detected

    @mineral_detected.setter
    def mineral_detected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mineral_detected' field must be of type 'bool'"
        self._mineral_detected = value

    @builtins.property
    def object_id(self):
        """Message field 'object_id'."""
        return self._object_id

    @object_id.setter
    def object_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'object_id' field must be of type 'str'"
        self._object_id = value

    @builtins.property
    def object_type(self):
        """Message field 'object_type'."""
        return self._object_type

    @object_type.setter
    def object_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'object_type' field must be of type 'str'"
        self._object_type = value

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._confidence = value

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y = value

    @builtins.property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._z = value

    @builtins.property
    def obstacle_detected(self):
        """Message field 'obstacle_detected'."""
        return self._obstacle_detected

    @obstacle_detected.setter
    def obstacle_detected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'obstacle_detected' field must be of type 'bool'"
        self._obstacle_detected = value

    @builtins.property
    def obstacle_distance(self):
        """Message field 'obstacle_distance'."""
        return self._obstacle_distance

    @obstacle_distance.setter
    def obstacle_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'obstacle_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'obstacle_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._obstacle_distance = value

    @builtins.property
    def terrain_traversable(self):
        """Message field 'terrain_traversable'."""
        return self._terrain_traversable

    @terrain_traversable.setter
    def terrain_traversable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'terrain_traversable' field must be of type 'bool'"
        self._terrain_traversable = value

    @builtins.property
    def terrain_slope(self):
        """Message field 'terrain_slope'."""
        return self._terrain_slope

    @terrain_slope.setter
    def terrain_slope(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'terrain_slope' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'terrain_slope' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._terrain_slope = value
