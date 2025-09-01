// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from usb_v1:msg/Joy.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "usb_v1/msg/detail/joy__struct.h"
#include "usb_v1/msg/detail/joy__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool usb_v1__msg__joy__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[20];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("usb_v1.msg._joy.Joy", full_classname_dest, 19) == 0);
  }
  usb_v1__msg__Joy * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT8);
      Py_ssize_t size = 2;
      uint8_t * dest = ros_message->header;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // move_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "move_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->move_1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // move_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "move_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->move_2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // move_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "move_3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->move_3 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // move_4
    PyObject * field = PyObject_GetAttrString(_pymsg, "move_4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->move_4 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // set1
    PyObject * field = PyObject_GetAttrString(_pymsg, "set1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->set1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // set2
    PyObject * field = PyObject_GetAttrString(_pymsg, "set2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->set2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // attack1
    PyObject * field = PyObject_GetAttrString(_pymsg, "attack1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->attack1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // attack2
    PyObject * field = PyObject_GetAttrString(_pymsg, "attack2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->attack2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // attack3
    PyObject * field = PyObject_GetAttrString(_pymsg, "attack3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->attack3 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // attack4
    PyObject * field = PyObject_GetAttrString(_pymsg, "attack4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->attack4 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stick_lx
    PyObject * field = PyObject_GetAttrString(_pymsg, "stick_lx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stick_lx = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // stick_ly
    PyObject * field = PyObject_GetAttrString(_pymsg, "stick_ly");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stick_ly = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // stick_rx
    PyObject * field = PyObject_GetAttrString(_pymsg, "stick_rx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stick_rx = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // stick_ry
    PyObject * field = PyObject_GetAttrString(_pymsg, "stick_ry");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stick_ry = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * usb_v1__msg__joy__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Joy */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("usb_v1.msg._joy");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Joy");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  usb_v1__msg__Joy * ros_message = (usb_v1__msg__Joy *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "header");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->header[0]);
    memcpy(dst, src, 2 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // move_1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->move_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "move_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // move_2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->move_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "move_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // move_3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->move_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "move_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // move_4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->move_4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "move_4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->set1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->set2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // attack1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->attack1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "attack1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // attack2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->attack2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "attack2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // attack3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->attack3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "attack3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // attack4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->attack4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "attack4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stick_lx
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->stick_lx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stick_lx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stick_ly
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->stick_ly);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stick_ly", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stick_rx
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->stick_rx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stick_rx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stick_ry
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->stick_ry);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stick_ry", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
