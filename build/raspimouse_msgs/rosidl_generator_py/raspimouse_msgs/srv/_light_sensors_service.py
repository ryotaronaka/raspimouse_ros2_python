# generated from rosidl_generator_py/resource/_idl.py.em
# with input from raspimouse_msgs:srv/LightSensorsService.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LightSensorsService_Request(type):
    """Metaclass of message 'LightSensorsService_Request'."""

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
            module = import_type_support('raspimouse_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'raspimouse_msgs.srv.LightSensorsService_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__light_sensors_service__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__light_sensors_service__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__light_sensors_service__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__light_sensors_service__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__light_sensors_service__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LightSensorsService_Request(metaclass=Metaclass_LightSensorsService_Request):
    """Message class 'LightSensorsService_Request'."""

    __slots__ = [
        '_right_forward',
        '_right_side',
        '_left_side',
        '_left_forward',
    ]

    _fields_and_field_types = {
        'right_forward': 'int16',
        'right_side': 'int16',
        'left_side': 'int16',
        'left_forward': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.right_forward = kwargs.get('right_forward', int())
        self.right_side = kwargs.get('right_side', int())
        self.left_side = kwargs.get('left_side', int())
        self.left_forward = kwargs.get('left_forward', int())

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
        if self.right_forward != other.right_forward:
            return False
        if self.right_side != other.right_side:
            return False
        if self.left_side != other.left_side:
            return False
        if self.left_forward != other.left_forward:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def right_forward(self):
        """Message field 'right_forward'."""
        return self._right_forward

    @right_forward.setter
    def right_forward(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_forward' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'right_forward' field must be an integer in [-32768, 32767]"
        self._right_forward = value

    @property
    def right_side(self):
        """Message field 'right_side'."""
        return self._right_side

    @right_side.setter
    def right_side(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_side' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'right_side' field must be an integer in [-32768, 32767]"
        self._right_side = value

    @property
    def left_side(self):
        """Message field 'left_side'."""
        return self._left_side

    @left_side.setter
    def left_side(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_side' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'left_side' field must be an integer in [-32768, 32767]"
        self._left_side = value

    @property
    def left_forward(self):
        """Message field 'left_forward'."""
        return self._left_forward

    @left_forward.setter
    def left_forward(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_forward' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'left_forward' field must be an integer in [-32768, 32767]"
        self._left_forward = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_LightSensorsService_Response(type):
    """Metaclass of message 'LightSensorsService_Response'."""

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
            module = import_type_support('raspimouse_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'raspimouse_msgs.srv.LightSensorsService_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__light_sensors_service__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__light_sensors_service__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__light_sensors_service__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__light_sensors_service__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__light_sensors_service__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LightSensorsService_Response(metaclass=Metaclass_LightSensorsService_Response):
    """Message class 'LightSensorsService_Response'."""

    __slots__ = [
        '_sum',
    ]

    _fields_and_field_types = {
        'sum': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sum = kwargs.get('sum', int())

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
        if self.sum != other.sum:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def sum(self):  # noqa: A003
        """Message field 'sum'."""
        return self._sum

    @sum.setter  # noqa: A003
    def sum(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sum' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'sum' field must be an integer in [-32768, 32767]"
        self._sum = value


class Metaclass_LightSensorsService(type):
    """Metaclass of service 'LightSensorsService'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('raspimouse_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'raspimouse_msgs.srv.LightSensorsService')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__light_sensors_service

            from raspimouse_msgs.srv import _light_sensors_service
            if _light_sensors_service.Metaclass_LightSensorsService_Request._TYPE_SUPPORT is None:
                _light_sensors_service.Metaclass_LightSensorsService_Request.__import_type_support__()
            if _light_sensors_service.Metaclass_LightSensorsService_Response._TYPE_SUPPORT is None:
                _light_sensors_service.Metaclass_LightSensorsService_Response.__import_type_support__()


class LightSensorsService(metaclass=Metaclass_LightSensorsService):
    from raspimouse_msgs.srv._light_sensors_service import LightSensorsService_Request as Request
    from raspimouse_msgs.srv._light_sensors_service import LightSensorsService_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
