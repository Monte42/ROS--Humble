# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_robot_interfaces:srv/KillTurtle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_KillTurtle_Request(type):
    """Metaclass of message 'KillTurtle_Request'."""

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
            module = import_type_support('my_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_robot_interfaces.srv.KillTurtle_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__kill_turtle__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__kill_turtle__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__kill_turtle__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__kill_turtle__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__kill_turtle__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class KillTurtle_Request(metaclass=Metaclass_KillTurtle_Request):
    """Message class 'KillTurtle_Request'."""

    __slots__ = [
        '_turtle_name',
    ]

    _fields_and_field_types = {
        'turtle_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.turtle_name = kwargs.get('turtle_name', str())

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
        if self.turtle_name != other.turtle_name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def turtle_name(self):
        """Message field 'turtle_name'."""
        return self._turtle_name

    @turtle_name.setter
    def turtle_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'turtle_name' field must be of type 'str'"
        self._turtle_name = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_KillTurtle_Response(type):
    """Metaclass of message 'KillTurtle_Response'."""

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
            module = import_type_support('my_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_robot_interfaces.srv.KillTurtle_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__kill_turtle__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__kill_turtle__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__kill_turtle__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__kill_turtle__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__kill_turtle__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class KillTurtle_Response(metaclass=Metaclass_KillTurtle_Response):
    """Message class 'KillTurtle_Response'."""

    __slots__ = [
        '_sucess',
    ]

    _fields_and_field_types = {
        'sucess': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sucess = kwargs.get('sucess', str())

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
        if self.sucess != other.sucess:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sucess(self):
        """Message field 'sucess'."""
        return self._sucess

    @sucess.setter
    def sucess(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sucess' field must be of type 'str'"
        self._sucess = value


class Metaclass_KillTurtle(type):
    """Metaclass of service 'KillTurtle'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_robot_interfaces.srv.KillTurtle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__kill_turtle

            from my_robot_interfaces.srv import _kill_turtle
            if _kill_turtle.Metaclass_KillTurtle_Request._TYPE_SUPPORT is None:
                _kill_turtle.Metaclass_KillTurtle_Request.__import_type_support__()
            if _kill_turtle.Metaclass_KillTurtle_Response._TYPE_SUPPORT is None:
                _kill_turtle.Metaclass_KillTurtle_Response.__import_type_support__()


class KillTurtle(metaclass=Metaclass_KillTurtle):
    from my_robot_interfaces.srv._kill_turtle import KillTurtle_Request as Request
    from my_robot_interfaces.srv._kill_turtle import KillTurtle_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
