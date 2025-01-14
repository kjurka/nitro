# This file was automatically generated by SWIG (http://www.swig.org).
# Version 4.0.2
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

from sys import version_info as _swig_python_version_info
if _swig_python_version_info < (2, 7, 0):
    raise RuntimeError("Python 2.7 or later required")

# Import the low-level C/C++ module
if __package__ or "." in __name__:
    from . import _coda_sys
else:
    import _coda_sys

try:
    import builtins as __builtin__
except ImportError:
    import __builtin__

def _swig_repr(self):
    try:
        strthis = "proxy of " + self.this.__repr__()
    except __builtin__.Exception:
        strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)


def _swig_setattr_nondynamic_instance_variable(set):
    def set_instance_attr(self, name, value):
        if name == "thisown":
            self.this.own(value)
        elif name == "this":
            set(self, name, value)
        elif hasattr(self, name) and isinstance(getattr(type(self), name), property):
            set(self, name, value)
        else:
            raise AttributeError("You cannot add instance attributes to %s" % self)
    return set_instance_attr


def _swig_setattr_nondynamic_class_variable(set):
    def set_class_attr(cls, name, value):
        if hasattr(cls, name) and not isinstance(getattr(cls, name), property):
            set(cls, name, value)
        else:
            raise AttributeError("You cannot add class attributes to %s" % cls)
    return set_class_attr


def _swig_add_metaclass(metaclass):
    """Class decorator for adding a metaclass to a SWIG wrapped class - a slimmed down version of six.add_metaclass"""
    def wrapper(cls):
        return metaclass(cls.__name__, cls.__bases__, cls.__dict__.copy())
    return wrapper


class _SwigNonDynamicMeta(type):
    """Meta class to enforce nondynamic attributes (no new attributes) for a class"""
    __setattr__ = _swig_setattr_nondynamic_class_variable(type.__setattr__)


NativeLayer_func__ = _coda_sys.NativeLayer_func__

SYS_FUNC = _coda_sys.SYS_FUNC


def isBigEndianSystem() -> "bool":
    r"""isBigEndianSystem() -> bool"""
    return _coda_sys.isBigEndianSystem()

def byteSwap(*args) -> "void":
    r"""
    byteSwap(void * buffer, unsigned short elemSize, size_t numElems)
    byteSwap(void const * buffer, unsigned short elemSize, size_t numElems, void * outputBuffer)
    """
    return _coda_sys.byteSwap(*args)

def alignedAlloc(*args) -> "void *":
    r"""alignedAlloc(size_t size, size_t alignment=SSE_INSTRUCTION_ALIGNMENT)"""
    return _coda_sys.alignedAlloc(*args)

def alignedFree(p: "void *") -> "void":
    r"""alignedFree(void * p)"""
    return _coda_sys.alignedFree(p)
class UTCDateTime(object):
    r"""Proxy of C++ sys::UTCDateTime class."""

    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc="The membership flag")
    __repr__ = _swig_repr

    def __init__(self, *args):
        r"""
        __init__(UTCDateTime self) -> UTCDateTime
        __init__(UTCDateTime self, int hour, int minute, double second) -> UTCDateTime
        __init__(UTCDateTime self, int year, int month, int day) -> UTCDateTime
        __init__(UTCDateTime self, int year, int month, int day, int hour, int minute, double second) -> UTCDateTime
        __init__(UTCDateTime self, double timeInMillis) -> UTCDateTime
        __init__(UTCDateTime self, std::string const & time, std::string const & format=DEFAULT_DATETIME_FORMAT) -> UTCDateTime
        """
        _coda_sys.UTCDateTime_swiginit(self, _coda_sys.new_UTCDateTime(*args))

    def format(self, *args) -> "std::string":
        r"""
        format(UTCDateTime self)
        format(UTCDateTime self) -> std::string
        """
        return _coda_sys.UTCDateTime_format(self, *args)
    __swig_destroy__ = _coda_sys.delete_UTCDateTime

# Register UTCDateTime in _coda_sys:
_coda_sys.UTCDateTime_swigregister(UTCDateTime)
cvar = _coda_sys.cvar
SSE_INSTRUCTION_ALIGNMENT = cvar.SSE_INSTRUCTION_ALIGNMENT
UTCDateTime.DEFAULT_DATETIME_FORMAT = _coda_sys.cvar.UTCDateTime_DEFAULT_DATETIME_FORMAT


def __lshift__(os: "std::ostream &", dateTime: "UTCDateTime") -> "std::ostream &":
    r"""__lshift__(std::ostream & os, UTCDateTime dateTime) -> std::ostream &"""
    return _coda_sys.__lshift__(os, dateTime)

def __rshift__(_is: "std::istream &", dateTime: "UTCDateTime") -> "std::istream &":
    r"""__rshift__(std::istream & _is, UTCDateTime dateTime) -> std::istream &"""
    return _coda_sys.__rshift__(_is, dateTime)


