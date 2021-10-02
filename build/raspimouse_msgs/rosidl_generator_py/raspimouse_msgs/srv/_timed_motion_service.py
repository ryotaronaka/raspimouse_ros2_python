# generated from rosidl_generator_py/resource/_idl.py.em
# with input from raspimouse_msgs:srv/TimedMotionService.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TimedMotionService_Request(type):
    """Metaclass of message 'TimedMotionService_Request'."""

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
                'raspimouse_msgs.srv.TimedMotionService_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__timed_motion_service__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__timed_motion_service__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__timed_motion_service__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__timed_motion_service__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__timed_motion_service__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TimedMotionService_Request(metaclass=Metaclass_TimedMotionService_Request):
    """Message class 'TimedMotionService_Request'."""

    __slots__ = [
        '_left_hz',
        '_right_hz',
        '_duration_ms',
    ]

    _fields_and_field_types = {
        'left_hz': 'int16',
        'right_hz': 'int16',
        'duration_ms': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.left_hz = kwargs.get('left_hz', int())
        self.right_hz = kwargs.get('right_hz', int())
        self.duration_ms = kwargs.get('duration_ms', int())

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
        if self.left_hz != other.left_hz:
            return False
        if self.right_hz != other.right_hz:
            return False
        if self.duration_ms != other.duration_ms:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def left_hz(self):
        """Message field 'left_hz'."""
        return self._left_hz

    @left_hz.setter
    def left_hz(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_hz' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'left_hz' field must be an integer in [-32768, 32767]"
        self._left_hz = value

    @property
    def right_hz(self):
        """Message field 'right_hz'."""
        return self._right_hz

    @right_hz.setter
    def right_hz(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_hz' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'right_hz' field must be an integer in [-32768, 32767]"
        self._right_hz = value

    @property
    def duration_ms(self):
        """Message field 'duration_ms'."""
        return self._duration_ms

    @duration_ms.setter
    def duration_ms(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'duration_ms' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'duration_ms' field must be an unsigned integer in [0, 4294967295]"
        self._duration_ms = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TimedMotionService_Response(type):
    """Metaclass of message 'TimedMotionService_Response'."""

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
                'raspimouse_msgs.srv.TimedMotionService_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__timed_motion_service__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__timed_motion_service__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__timed_motion_service__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__timed_motion_service__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__timed_motion_service__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TimedMotionService_Response(metaclass=Metaclass_TimedMotionService_Response):
    """Message class 'TimedMotionService_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
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


class Metaclass_TimedMotionService(type):
    """Metaclass of service 'TimedMotionService'."""

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
                'raspimouse_msgs.srv.TimedMotionService')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__timed_motion_service

            from raspimouse_msgs.srv import _timed_motion_service
            if _timed_motion_service.Metaclass_TimedMotionService_Request._TYPE_SUPPORT is None:
                _timed_motion_service.Metaclass_TimedMotionService_Request.__import_type_support__()
            if _timed_motion_service.Metaclass_TimedMotionService_Response._TYPE_SUPPORT is None:
                _timed_motion_service.Metaclass_TimedMotionService_Response.__import_type_support__()


class TimedMotionService(metaclass=Metaclass_TimedMotionService):
    from raspimouse_msgs.srv._timed_motion_service import TimedMotionService_Request as Request
    from raspimouse_msgs.srv._timed_motion_service import TimedMotionService_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
