#include "include/c/glfw3.h"
#include <stdlib.h>

napi_value getMemory(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;
  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);

  bool lossless = true;
  
  int64_t p;
  status = napi_get_value_bigint_int64(env, args[0], &p, &lossless);
  assert(status == napi_ok);
  int64_t l;
  status = napi_get_value_bigint_int64(env, args[1], &l, &lossless);
  assert(status == napi_ok);

  status = napi_create_external_arraybuffer(env, p, l, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value getAddress(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;
  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  void **buffer;
  void *pbuffer;
  buffer = &pbuffer;
  status = napi_get_arraybuffer_info(env, args[0], buffer, NULL);
  assert(status == napi_ok);

  status = napi_create_bigint_int64(env, *buffer, &num);
  assert(status == napi_ok);
  return num;
}

typedef struct {
  int p1;
  char* p2;
  } struct_glfwSetErrorCallback;

napi_threadsafe_function tsfn_glfwSetErrorCallback;
void callback_glfwSetErrorCallback(int a1,char* a2) {
  struct_glfwSetErrorCallback *args = malloc(sizeof *args);
  args->p1 = a1;
  args->p2 = a2;
  assert(napi_call_threadsafe_function(tsfn_glfwSetErrorCallback, args, napi_tsfn_nonblocking) == napi_ok);
}
void js_callback_glfwSetErrorCallback(napi_env env, napi_value js_cb, void* context, void* raw_data) {
  struct_glfwSetErrorCallback *data = raw_data;
  napi_value r1;
    int x1 = data->p1;
    assert(napi_create_int32(env, x1, &r1) == napi_ok);
    napi_value r2;
    char* x2 = data->p2;
    assert(napi_create_external(env, x2, NULL, NULL, &r2) == napi_ok);
    napi_value d[] = {
    r1,r2,
  };
  napi_value undefined;
  assert(napi_get_undefined(env, &undefined) == napi_ok);
  assert(napi_call_function(env, undefined, js_cb, 2, &d, NULL) == napi_ok);
  free(data);
}
typedef struct {
  GLFWmonitor* p1;
  int p2;
  } struct_glfwSetMonitorCallback;

napi_threadsafe_function tsfn_glfwSetMonitorCallback;
void callback_glfwSetMonitorCallback(GLFWmonitor* a1,int a2) {
  struct_glfwSetMonitorCallback *args = malloc(sizeof *args);
  args->p1 = a1;
  args->p2 = a2;
  assert(napi_call_threadsafe_function(tsfn_glfwSetMonitorCallback, args, napi_tsfn_nonblocking) == napi_ok);
}
void js_callback_glfwSetMonitorCallback(napi_env env, napi_value js_cb, void* context, void* raw_data) {
  struct_glfwSetMonitorCallback *data = raw_data;
  napi_value r1;
    GLFWmonitor* x1 = data->p1;
    assert(napi_create_external(env, x1, NULL, NULL, &r1) == napi_ok);
    napi_value r2;
    int x2 = data->p2;
    assert(napi_create_int32(env, x2, &r2) == napi_ok);
    napi_value d[] = {
    r1,r2,
  };
  napi_value undefined;
  assert(napi_get_undefined(env, &undefined) == napi_ok);
  assert(napi_call_function(env, undefined, js_cb, 2, &d, NULL) == napi_ok);
  free(data);
}
typedef struct {
  GLFWwindow* p1;
  int p2;
  int p3;
  } struct_glfwSetWindowPosCallback;

napi_threadsafe_function tsfn_glfwSetWindowPosCallback;
void callback_glfwSetWindowPosCallback(GLFWwindow* a1,int a2,int a3) {
  struct_glfwSetWindowPosCallback *args = malloc(sizeof *args);
  args->p1 = a1;
  args->p2 = a2;
  args->p3 = a3;
  assert(napi_call_threadsafe_function(tsfn_glfwSetWindowPosCallback, args, napi_tsfn_nonblocking) == napi_ok);
}
void js_callback_glfwSetWindowPosCallback(napi_env env, napi_value js_cb, void* context, void* raw_data) {
  struct_glfwSetWindowPosCallback *data = raw_data;
  napi_value r1;
    GLFWwindow* x1 = data->p1;
    assert(napi_create_external(env, x1, NULL, NULL, &r1) == napi_ok);
    napi_value r2;
    int x2 = data->p2;
    assert(napi_create_int32(env, x2, &r2) == napi_ok);
    napi_value r3;
    int x3 = data->p3;
    assert(napi_create_int32(env, x3, &r3) == napi_ok);
    napi_value d[] = {
    r1,r2,r3,
  };
  napi_value undefined;
  assert(napi_get_undefined(env, &undefined) == napi_ok);
  assert(napi_call_function(env, undefined, js_cb, 3, &d, NULL) == napi_ok);
  free(data);
}
typedef struct {
  GLFWwindow* p1;
  int p2;
  int p3;
  } struct_glfwSetWindowSizeCallback;

napi_threadsafe_function tsfn_glfwSetWindowSizeCallback;
void callback_glfwSetWindowSizeCallback(GLFWwindow* a1,int a2,int a3) {
  struct_glfwSetWindowSizeCallback *args = malloc(sizeof *args);
  args->p1 = a1;
  args->p2 = a2;
  args->p3 = a3;
  assert(napi_call_threadsafe_function(tsfn_glfwSetWindowSizeCallback, args, napi_tsfn_nonblocking) == napi_ok);
}
void js_callback_glfwSetWindowSizeCallback(napi_env env, napi_value js_cb, void* context, void* raw_data) {
  struct_glfwSetWindowSizeCallback *data = raw_data;
  napi_value r1;
    GLFWwindow* x1 = data->p1;
    assert(napi_create_external(env, x1, NULL, NULL, &r1) == napi_ok);
    napi_value r2;
    int x2 = data->p2;
    assert(napi_create_int32(env, x2, &r2) == napi_ok);
    napi_value r3;
    int x3 = data->p3;
    assert(napi_create_int32(env, x3, &r3) == napi_ok);
    napi_value d[] = {
    r1,r2,r3,
  };
  napi_value undefined;
  assert(napi_get_undefined(env, &undefined) == napi_ok);
  assert(napi_call_function(env, undefined, js_cb, 3, &d, NULL) == napi_ok);
  free(data);
}
typedef struct {
  GLFWwindow* p1;
  } struct_glfwSetWindowCloseCallback;

napi_threadsafe_function tsfn_glfwSetWindowCloseCallback;
void callback_glfwSetWindowCloseCallback(GLFWwindow* a1) {
  struct_glfwSetWindowCloseCallback *args = malloc(sizeof *args);
  args->p1 = a1;
  assert(napi_call_threadsafe_function(tsfn_glfwSetWindowCloseCallback, args, napi_tsfn_nonblocking) == napi_ok);
}
void js_callback_glfwSetWindowCloseCallback(napi_env env, napi_value js_cb, void* context, void* raw_data) {
  struct_glfwSetWindowCloseCallback *data = raw_data;
  napi_value r1;
    GLFWwindow* x1 = data->p1;
    assert(napi_create_external(env, x1, NULL, NULL, &r1) == napi_ok);
    napi_value d[] = {
    r1,
  };
  napi_value undefined;
  assert(napi_get_undefined(env, &undefined) == napi_ok);
  assert(napi_call_function(env, undefined, js_cb, 1, &d, NULL) == napi_ok);
  free(data);
}
typedef struct {
  GLFWwindow* p1;
  } struct_glfwSetWindowRefreshCallback;

napi_threadsafe_function tsfn_glfwSetWindowRefreshCallback;
void callback_glfwSetWindowRefreshCallback(GLFWwindow* a1) {
  struct_glfwSetWindowRefreshCallback *args = malloc(sizeof *args);
  args->p1 = a1;
  assert(napi_call_threadsafe_function(tsfn_glfwSetWindowRefreshCallback, args, napi_tsfn_nonblocking) == napi_ok);
}
void js_callback_glfwSetWindowRefreshCallback(napi_env env, napi_value js_cb, void* context, void* raw_data) {
  struct_glfwSetWindowRefreshCallback *data = raw_data;
  napi_value r1;
    GLFWwindow* x1 = data->p1;
    assert(napi_create_external(env, x1, NULL, NULL, &r1) == napi_ok);
    napi_value d[] = {
    r1,
  };
  napi_value undefined;
  assert(napi_get_undefined(env, &undefined) == napi_ok);
  assert(napi_call_function(env, undefined, js_cb, 1, &d, NULL) == napi_ok);
  free(data);
}
typedef struct {
  GLFWwindow* p1;
  int p2;
  } struct_glfwSetWindowFocusCallback;

napi_threadsafe_function tsfn_glfwSetWindowFocusCallback;
void callback_glfwSetWindowFocusCallback(GLFWwindow* a1,int a2) {
  struct_glfwSetWindowFocusCallback *args = malloc(sizeof *args);
  args->p1 = a1;
  args->p2 = a2;
  assert(napi_call_threadsafe_function(tsfn_glfwSetWindowFocusCallback, args, napi_tsfn_nonblocking) == napi_ok);
}
void js_callback_glfwSetWindowFocusCallback(napi_env env, napi_value js_cb, void* context, void* raw_data) {
  struct_glfwSetWindowFocusCallback *data = raw_data;
  napi_value r1;
    GLFWwindow* x1 = data->p1;
    assert(napi_create_external(env, x1, NULL, NULL, &r1) == napi_ok);
    napi_value r2;
    int x2 = data->p2;
    assert(napi_create_int32(env, x2, &r2) == napi_ok);
    napi_value d[] = {
    r1,r2,
  };
  napi_value undefined;
  assert(napi_get_undefined(env, &undefined) == napi_ok);
  assert(napi_call_function(env, undefined, js_cb, 2, &d, NULL) == napi_ok);
  free(data);
}
typedef struct {
  GLFWwindow* p1;
  int p2;
  } struct_glfwSetWindowIconifyCallback;

napi_threadsafe_function tsfn_glfwSetWindowIconifyCallback;
void callback_glfwSetWindowIconifyCallback(GLFWwindow* a1,int a2) {
  struct_glfwSetWindowIconifyCallback *args = malloc(sizeof *args);
  args->p1 = a1;
  args->p2 = a2;
  assert(napi_call_threadsafe_function(tsfn_glfwSetWindowIconifyCallback, args, napi_tsfn_nonblocking) == napi_ok);
}
void js_callback_glfwSetWindowIconifyCallback(napi_env env, napi_value js_cb, void* context, void* raw_data) {
  struct_glfwSetWindowIconifyCallback *data = raw_data;
  napi_value r1;
    GLFWwindow* x1 = data->p1;
    assert(napi_create_external(env, x1, NULL, NULL, &r1) == napi_ok);
    napi_value r2;
    int x2 = data->p2;
    assert(napi_create_int32(env, x2, &r2) == napi_ok);
    napi_value d[] = {
    r1,r2,
  };
  napi_value undefined;
  assert(napi_get_undefined(env, &undefined) == napi_ok);
  assert(napi_call_function(env, undefined, js_cb, 2, &d, NULL) == napi_ok);
  free(data);
}
typedef struct {
  GLFWwindow* p1;
  int p2;
  } struct_glfwSetWindowMaximizeCallback;

napi_threadsafe_function tsfn_glfwSetWindowMaximizeCallback;
void callback_glfwSetWindowMaximizeCallback(GLFWwindow* a1,int a2) {
  struct_glfwSetWindowMaximizeCallback *args = malloc(sizeof *args);
  args->p1 = a1;
  args->p2 = a2;
  assert(napi_call_threadsafe_function(tsfn_glfwSetWindowMaximizeCallback, args, napi_tsfn_nonblocking) == napi_ok);
}
void js_callback_glfwSetWindowMaximizeCallback(napi_env env, napi_value js_cb, void* context, void* raw_data) {
  struct_glfwSetWindowMaximizeCallback *data = raw_data;
  napi_value r1;
    GLFWwindow* x1 = data->p1;
    assert(napi_create_external(env, x1, NULL, NULL, &r1) == napi_ok);
    napi_value r2;
    int x2 = data->p2;
    assert(napi_create_int32(env, x2, &r2) == napi_ok);
    napi_value d[] = {
    r1,r2,
  };
  napi_value undefined;
  assert(napi_get_undefined(env, &undefined) == napi_ok);
  assert(napi_call_function(env, undefined, js_cb, 2, &d, NULL) == napi_ok);
  free(data);
}
typedef struct {
  GLFWwindow* p1;
  int p2;
  int p3;
  } struct_glfwSetFramebufferSizeCallback;

napi_threadsafe_function tsfn_glfwSetFramebufferSizeCallback;
void callback_glfwSetFramebufferSizeCallback(GLFWwindow* a1,int a2,int a3) {
  struct_glfwSetFramebufferSizeCallback *args = malloc(sizeof *args);
  args->p1 = a1;
  args->p2 = a2;
  args->p3 = a3;
  assert(napi_call_threadsafe_function(tsfn_glfwSetFramebufferSizeCallback, args, napi_tsfn_nonblocking) == napi_ok);
}
void js_callback_glfwSetFramebufferSizeCallback(napi_env env, napi_value js_cb, void* context, void* raw_data) {
  struct_glfwSetFramebufferSizeCallback *data = raw_data;
  napi_value r1;
    GLFWwindow* x1 = data->p1;
    assert(napi_create_external(env, x1, NULL, NULL, &r1) == napi_ok);
    napi_value r2;
    int x2 = data->p2;
    assert(napi_create_int32(env, x2, &r2) == napi_ok);
    napi_value r3;
    int x3 = data->p3;
    assert(napi_create_int32(env, x3, &r3) == napi_ok);
    napi_value d[] = {
    r1,r2,r3,
  };
  napi_value undefined;
  assert(napi_get_undefined(env, &undefined) == napi_ok);
  assert(napi_call_function(env, undefined, js_cb, 3, &d, NULL) == napi_ok);
  free(data);
}
typedef struct {
  GLFWwindow* p1;
  float p2;
  float p3;
  } struct_glfwSetWindowContentScaleCallback;

napi_threadsafe_function tsfn_glfwSetWindowContentScaleCallback;
void callback_glfwSetWindowContentScaleCallback(GLFWwindow* a1,float a2,float a3) {
  struct_glfwSetWindowContentScaleCallback *args = malloc(sizeof *args);
  args->p1 = a1;
  args->p2 = a2;
  args->p3 = a3;
  assert(napi_call_threadsafe_function(tsfn_glfwSetWindowContentScaleCallback, args, napi_tsfn_nonblocking) == napi_ok);
}
void js_callback_glfwSetWindowContentScaleCallback(napi_env env, napi_value js_cb, void* context, void* raw_data) {
  struct_glfwSetWindowContentScaleCallback *data = raw_data;
  napi_value r1;
    GLFWwindow* x1 = data->p1;
    assert(napi_create_external(env, x1, NULL, NULL, &r1) == napi_ok);
    napi_value r2;
    double x2 = data->p2;
    assert(napi_create_double(env, x2, &r2) == napi_ok);
    napi_value r3;
    double x3 = data->p3;
    assert(napi_create_double(env, x3, &r3) == napi_ok);
    napi_value d[] = {
    r1,r2,r3,
  };
  napi_value undefined;
  assert(napi_get_undefined(env, &undefined) == napi_ok);
  assert(napi_call_function(env, undefined, js_cb, 3, &d, NULL) == napi_ok);
  free(data);
}
typedef struct {
  GLFWwindow* p1;
  int p2;
  int p3;
  int p4;
  int p5;
  } struct_glfwSetKeyCallback;

napi_threadsafe_function tsfn_glfwSetKeyCallback;
void callback_glfwSetKeyCallback(GLFWwindow* a1,int a2,int a3,int a4,int a5) {
  struct_glfwSetKeyCallback *args = malloc(sizeof *args);
  args->p1 = a1;
  args->p2 = a2;
  args->p3 = a3;
  args->p4 = a4;
  args->p5 = a5;
  assert(napi_call_threadsafe_function(tsfn_glfwSetKeyCallback, args, napi_tsfn_nonblocking) == napi_ok);
}
void js_callback_glfwSetKeyCallback(napi_env env, napi_value js_cb, void* context, void* raw_data) {
  struct_glfwSetKeyCallback *data = raw_data;
  napi_value r1;
    GLFWwindow* x1 = data->p1;
    assert(napi_create_external(env, x1, NULL, NULL, &r1) == napi_ok);
    napi_value r2;
    int x2 = data->p2;
    assert(napi_create_int32(env, x2, &r2) == napi_ok);
    napi_value r3;
    int x3 = data->p3;
    assert(napi_create_int32(env, x3, &r3) == napi_ok);
    napi_value r4;
    int x4 = data->p4;
    assert(napi_create_int32(env, x4, &r4) == napi_ok);
    napi_value r5;
    int x5 = data->p5;
    assert(napi_create_int32(env, x5, &r5) == napi_ok);
    napi_value d[] = {
    r1,r2,r3,r4,r5,
  };
  napi_value undefined;
  assert(napi_get_undefined(env, &undefined) == napi_ok);
  assert(napi_call_function(env, undefined, js_cb, 5, &d, NULL) == napi_ok);
  free(data);
}
typedef struct {
  GLFWwindow* p1;
  unsigned int p2;
  } struct_glfwSetCharCallback;

napi_threadsafe_function tsfn_glfwSetCharCallback;
void callback_glfwSetCharCallback(GLFWwindow* a1,unsigned int a2) {
  struct_glfwSetCharCallback *args = malloc(sizeof *args);
  args->p1 = a1;
  args->p2 = a2;
  assert(napi_call_threadsafe_function(tsfn_glfwSetCharCallback, args, napi_tsfn_nonblocking) == napi_ok);
}
void js_callback_glfwSetCharCallback(napi_env env, napi_value js_cb, void* context, void* raw_data) {
  struct_glfwSetCharCallback *data = raw_data;
  napi_value r1;
    GLFWwindow* x1 = data->p1;
    assert(napi_create_external(env, x1, NULL, NULL, &r1) == napi_ok);
    napi_value r2;
    unsigned int x2 = data->p2;
    assert(napi_create_external(env, x2, NULL, NULL, &r2) == napi_ok);
    napi_value d[] = {
    r1,r2,
  };
  napi_value undefined;
  assert(napi_get_undefined(env, &undefined) == napi_ok);
  assert(napi_call_function(env, undefined, js_cb, 2, &d, NULL) == napi_ok);
  free(data);
}
typedef struct {
  GLFWwindow* p1;
  unsigned int p2;
  int p3;
  } struct_glfwSetCharModsCallback;

napi_threadsafe_function tsfn_glfwSetCharModsCallback;
void callback_glfwSetCharModsCallback(GLFWwindow* a1,unsigned int a2,int a3) {
  struct_glfwSetCharModsCallback *args = malloc(sizeof *args);
  args->p1 = a1;
  args->p2 = a2;
  args->p3 = a3;
  assert(napi_call_threadsafe_function(tsfn_glfwSetCharModsCallback, args, napi_tsfn_nonblocking) == napi_ok);
}
void js_callback_glfwSetCharModsCallback(napi_env env, napi_value js_cb, void* context, void* raw_data) {
  struct_glfwSetCharModsCallback *data = raw_data;
  napi_value r1;
    GLFWwindow* x1 = data->p1;
    assert(napi_create_external(env, x1, NULL, NULL, &r1) == napi_ok);
    napi_value r2;
    unsigned int x2 = data->p2;
    assert(napi_create_external(env, x2, NULL, NULL, &r2) == napi_ok);
    napi_value r3;
    int x3 = data->p3;
    assert(napi_create_int32(env, x3, &r3) == napi_ok);
    napi_value d[] = {
    r1,r2,r3,
  };
  napi_value undefined;
  assert(napi_get_undefined(env, &undefined) == napi_ok);
  assert(napi_call_function(env, undefined, js_cb, 3, &d, NULL) == napi_ok);
  free(data);
}
typedef struct {
  GLFWwindow* p1;
  int p2;
  int p3;
  int p4;
  } struct_glfwSetMouseButtonCallback;

napi_threadsafe_function tsfn_glfwSetMouseButtonCallback;
void callback_glfwSetMouseButtonCallback(GLFWwindow* a1,int a2,int a3,int a4) {
  struct_glfwSetMouseButtonCallback *args = malloc(sizeof *args);
  args->p1 = a1;
  args->p2 = a2;
  args->p3 = a3;
  args->p4 = a4;
  assert(napi_call_threadsafe_function(tsfn_glfwSetMouseButtonCallback, args, napi_tsfn_nonblocking) == napi_ok);
}
void js_callback_glfwSetMouseButtonCallback(napi_env env, napi_value js_cb, void* context, void* raw_data) {
  struct_glfwSetMouseButtonCallback *data = raw_data;
  napi_value r1;
    GLFWwindow* x1 = data->p1;
    assert(napi_create_external(env, x1, NULL, NULL, &r1) == napi_ok);
    napi_value r2;
    int x2 = data->p2;
    assert(napi_create_int32(env, x2, &r2) == napi_ok);
    napi_value r3;
    int x3 = data->p3;
    assert(napi_create_int32(env, x3, &r3) == napi_ok);
    napi_value r4;
    int x4 = data->p4;
    assert(napi_create_int32(env, x4, &r4) == napi_ok);
    napi_value d[] = {
    r1,r2,r3,r4,
  };
  napi_value undefined;
  assert(napi_get_undefined(env, &undefined) == napi_ok);
  assert(napi_call_function(env, undefined, js_cb, 4, &d, NULL) == napi_ok);
  free(data);
}
typedef struct {
  GLFWwindow* p1;
  double p2;
  double p3;
  } struct_glfwSetCursorPosCallback;

napi_threadsafe_function tsfn_glfwSetCursorPosCallback;
void callback_glfwSetCursorPosCallback(GLFWwindow* a1,double a2,double a3) {
  struct_glfwSetCursorPosCallback *args = malloc(sizeof *args);
  args->p1 = a1;
  args->p2 = a2;
  args->p3 = a3;
  assert(napi_call_threadsafe_function(tsfn_glfwSetCursorPosCallback, args, napi_tsfn_nonblocking) == napi_ok);
}
void js_callback_glfwSetCursorPosCallback(napi_env env, napi_value js_cb, void* context, void* raw_data) {
  struct_glfwSetCursorPosCallback *data = raw_data;
  napi_value r1;
    GLFWwindow* x1 = data->p1;
    assert(napi_create_external(env, x1, NULL, NULL, &r1) == napi_ok);
    napi_value r2;
    double x2 = data->p2;
    assert(napi_create_double(env, x2, &r2) == napi_ok);
    napi_value r3;
    double x3 = data->p3;
    assert(napi_create_double(env, x3, &r3) == napi_ok);
    napi_value d[] = {
    r1,r2,r3,
  };
  napi_value undefined;
  assert(napi_get_undefined(env, &undefined) == napi_ok);
  assert(napi_call_function(env, undefined, js_cb, 3, &d, NULL) == napi_ok);
  free(data);
}
typedef struct {
  GLFWwindow* p1;
  int p2;
  } struct_glfwSetCursorEnterCallback;

napi_threadsafe_function tsfn_glfwSetCursorEnterCallback;
void callback_glfwSetCursorEnterCallback(GLFWwindow* a1,int a2) {
  struct_glfwSetCursorEnterCallback *args = malloc(sizeof *args);
  args->p1 = a1;
  args->p2 = a2;
  assert(napi_call_threadsafe_function(tsfn_glfwSetCursorEnterCallback, args, napi_tsfn_nonblocking) == napi_ok);
}
void js_callback_glfwSetCursorEnterCallback(napi_env env, napi_value js_cb, void* context, void* raw_data) {
  struct_glfwSetCursorEnterCallback *data = raw_data;
  napi_value r1;
    GLFWwindow* x1 = data->p1;
    assert(napi_create_external(env, x1, NULL, NULL, &r1) == napi_ok);
    napi_value r2;
    int x2 = data->p2;
    assert(napi_create_int32(env, x2, &r2) == napi_ok);
    napi_value d[] = {
    r1,r2,
  };
  napi_value undefined;
  assert(napi_get_undefined(env, &undefined) == napi_ok);
  assert(napi_call_function(env, undefined, js_cb, 2, &d, NULL) == napi_ok);
  free(data);
}
typedef struct {
  GLFWwindow* p1;
  double p2;
  double p3;
  } struct_glfwSetScrollCallback;

napi_threadsafe_function tsfn_glfwSetScrollCallback;
void callback_glfwSetScrollCallback(GLFWwindow* a1,double a2,double a3) {
  struct_glfwSetScrollCallback *args = malloc(sizeof *args);
  args->p1 = a1;
  args->p2 = a2;
  args->p3 = a3;
  assert(napi_call_threadsafe_function(tsfn_glfwSetScrollCallback, args, napi_tsfn_nonblocking) == napi_ok);
}
void js_callback_glfwSetScrollCallback(napi_env env, napi_value js_cb, void* context, void* raw_data) {
  struct_glfwSetScrollCallback *data = raw_data;
  napi_value r1;
    GLFWwindow* x1 = data->p1;
    assert(napi_create_external(env, x1, NULL, NULL, &r1) == napi_ok);
    napi_value r2;
    double x2 = data->p2;
    assert(napi_create_double(env, x2, &r2) == napi_ok);
    napi_value r3;
    double x3 = data->p3;
    assert(napi_create_double(env, x3, &r3) == napi_ok);
    napi_value d[] = {
    r1,r2,r3,
  };
  napi_value undefined;
  assert(napi_get_undefined(env, &undefined) == napi_ok);
  assert(napi_call_function(env, undefined, js_cb, 3, &d, NULL) == napi_ok);
  free(data);
}
typedef struct {
  GLFWwindow* p1;
  int p2;
  char* p3;
  } struct_glfwSetDropCallback;

napi_threadsafe_function tsfn_glfwSetDropCallback;
void callback_glfwSetDropCallback(GLFWwindow* a1,int a2,char* a3) {
  struct_glfwSetDropCallback *args = malloc(sizeof *args);
  args->p1 = a1;
  args->p2 = a2;
  args->p3 = a3;
  assert(napi_call_threadsafe_function(tsfn_glfwSetDropCallback, args, napi_tsfn_nonblocking) == napi_ok);
}
void js_callback_glfwSetDropCallback(napi_env env, napi_value js_cb, void* context, void* raw_data) {
  struct_glfwSetDropCallback *data = raw_data;
  napi_value r1;
    GLFWwindow* x1 = data->p1;
    assert(napi_create_external(env, x1, NULL, NULL, &r1) == napi_ok);
    napi_value r2;
    int x2 = data->p2;
    assert(napi_create_int32(env, x2, &r2) == napi_ok);
    napi_value r3;
    char* x3 = data->p3;
    assert(napi_create_external(env, x3, NULL, NULL, &r3) == napi_ok);
    napi_value d[] = {
    r1,r2,r3,
  };
  napi_value undefined;
  assert(napi_get_undefined(env, &undefined) == napi_ok);
  assert(napi_call_function(env, undefined, js_cb, 3, &d, NULL) == napi_ok);
  free(data);
}
typedef struct {
  int p1;
  int p2;
  } struct_glfwSetJoystickCallback;

napi_threadsafe_function tsfn_glfwSetJoystickCallback;
void callback_glfwSetJoystickCallback(int a1,int a2) {
  struct_glfwSetJoystickCallback *args = malloc(sizeof *args);
  args->p1 = a1;
  args->p2 = a2;
  assert(napi_call_threadsafe_function(tsfn_glfwSetJoystickCallback, args, napi_tsfn_nonblocking) == napi_ok);
}
void js_callback_glfwSetJoystickCallback(napi_env env, napi_value js_cb, void* context, void* raw_data) {
  struct_glfwSetJoystickCallback *data = raw_data;
  napi_value r1;
    int x1 = data->p1;
    assert(napi_create_int32(env, x1, &r1) == napi_ok);
    napi_value r2;
    int x2 = data->p2;
    assert(napi_create_int32(env, x2, &r2) == napi_ok);
    napi_value d[] = {
    r1,r2,
  };
  napi_value undefined;
  assert(napi_get_undefined(env, &undefined) == napi_ok);
  assert(napi_call_function(env, undefined, js_cb, 2, &d, NULL) == napi_ok);
  free(data);
}
napi_value _glfwInit(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  int res = glfwInit(
    );

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwTerminate(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  void* res = NULL;
 glfwTerminate(
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwInitHint(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 glfwInitHint(
    
    ra1,
    
    ra2
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetVersion(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    bool losslessa1 = true;
    int64_t ra1;
    status = napi_get_value_bigint_int64(env, args[0], &ra1, &losslessa1);
    assert(status == napi_ok);
  
  
    bool losslessa2 = true;
    int64_t ra2;
    status = napi_get_value_bigint_int64(env, args[1], &ra2, &losslessa2);
    assert(status == napi_ok);
  
  
    bool losslessa3 = true;
    int64_t ra3;
    status = napi_get_value_bigint_int64(env, args[2], &ra3, &losslessa3);
    assert(status == napi_ok);
  void* res = NULL;
 glfwGetVersion(
    
    ra1,
    
    ra2,
    
    ra3
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetVersionString(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  char* res = glfwGetVersionString(
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetError(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  size_t la1;
    status = napi_get_value_string_utf8(env, args[0], NULL, 0, &la1);
    assert(status == napi_ok);
    char* ra1 = (char*)malloc(la1 + 1);
    status = napi_get_value_string_utf8(env, args[0], ra1, la1 + 1, &la1);
    assert(status == napi_ok);
  int res = glfwGetError(
    
    ra1
    );

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetErrorCallback(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_value work_name;
    assert(napi_create_string_utf8(env, "Thread-safe Function glfwSetErrorCallback", NAPI_AUTO_LENGTH, &work_name) == napi_ok);

    napi_value js_cb = args[0];
    assert(napi_create_threadsafe_function(env, js_cb, NULL, work_name, 0, 1, NULL, NULL, NULL, js_callback_glfwSetErrorCallback, &tsfn_glfwSetErrorCallback) == napi_ok);
  GLFWerrorfun res = glfwSetErrorCallback(
    callback_glfwSetErrorCallback
    );

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetMonitors(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    bool losslessa1 = true;
    int64_t ra1;
    status = napi_get_value_bigint_int64(env, args[0], &ra1, &losslessa1);
    assert(status == napi_ok);
  GLFWmonitor* res = glfwGetMonitors(
    
    ra1
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetPrimaryMonitor(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  GLFWmonitor* res = glfwGetPrimaryMonitor(
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetMonitorPos(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWmonitor* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWmonitor*)*a1;
      }
  
  
    bool losslessa2 = true;
    int64_t ra2;
    status = napi_get_value_bigint_int64(env, args[1], &ra2, &losslessa2);
    assert(status == napi_ok);
  
  
    bool losslessa3 = true;
    int64_t ra3;
    status = napi_get_value_bigint_int64(env, args[2], &ra3, &losslessa3);
    assert(status == napi_ok);
  void* res = NULL;
 glfwGetMonitorPos(
    
    ra1,
    
    ra2,
    
    ra3
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetMonitorWorkarea(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWmonitor* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWmonitor*)*a1;
      }
  
  
    bool losslessa2 = true;
    int64_t ra2;
    status = napi_get_value_bigint_int64(env, args[1], &ra2, &losslessa2);
    assert(status == napi_ok);
  
  
    bool losslessa3 = true;
    int64_t ra3;
    status = napi_get_value_bigint_int64(env, args[2], &ra3, &losslessa3);
    assert(status == napi_ok);
  
  
    bool losslessa4 = true;
    int64_t ra4;
    status = napi_get_value_bigint_int64(env, args[3], &ra4, &losslessa4);
    assert(status == napi_ok);
  
  
    bool losslessa5 = true;
    int64_t ra5;
    status = napi_get_value_bigint_int64(env, args[4], &ra5, &losslessa5);
    assert(status == napi_ok);
  void* res = NULL;
 glfwGetMonitorWorkarea(
    
    ra1,
    
    ra2,
    
    ra3,
    
    ra4,
    
    ra5
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetMonitorPhysicalSize(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWmonitor* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWmonitor*)*a1;
      }
  
  
    bool losslessa2 = true;
    int64_t ra2;
    status = napi_get_value_bigint_int64(env, args[1], &ra2, &losslessa2);
    assert(status == napi_ok);
  
  
    bool losslessa3 = true;
    int64_t ra3;
    status = napi_get_value_bigint_int64(env, args[2], &ra3, &losslessa3);
    assert(status == napi_ok);
  void* res = NULL;
 glfwGetMonitorPhysicalSize(
    
    ra1,
    
    ra2,
    
    ra3
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetMonitorContentScale(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWmonitor* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWmonitor*)*a1;
      }
  
  
    double* ra2 = NULL;
    status = napi_get_value_double(env, args[1], ra2);
    assert(status == napi_ok);
  
  
    double* ra3 = NULL;
    status = napi_get_value_double(env, args[2], ra3);
    assert(status == napi_ok);
  void* res = NULL;
 glfwGetMonitorContentScale(
    
    ra1,
    
    ra2,
    
    ra3
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetMonitorName(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWmonitor* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWmonitor*)*a1;
      }
  char* res = glfwGetMonitorName(
    
    ra1
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetMonitorUserPointer(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWmonitor* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWmonitor*)*a1;
      }
  
  napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    void* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (void*)*a2;
    }
  void* res = NULL;
 glfwSetMonitorUserPointer(
    
    ra1,
    
    ra2
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetMonitorUserPointer(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWmonitor* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWmonitor*)*a1;
      }
  void* res = glfwGetMonitorUserPointer(
    
    ra1
    );

  
  status = napi_create_bigint_int64(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetMonitorCallback(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_value work_name;
    assert(napi_create_string_utf8(env, "Thread-safe Function glfwSetMonitorCallback", NAPI_AUTO_LENGTH, &work_name) == napi_ok);

    napi_value js_cb = args[0];
    assert(napi_create_threadsafe_function(env, js_cb, NULL, work_name, 0, 1, NULL, NULL, NULL, js_callback_glfwSetMonitorCallback, &tsfn_glfwSetMonitorCallback) == napi_ok);
  GLFWmonitorfun res = glfwSetMonitorCallback(
    callback_glfwSetMonitorCallback
    );

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetVideoModes(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWmonitor* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWmonitor*)*a1;
      }
  
  
    bool losslessa2 = true;
    int64_t ra2;
    status = napi_get_value_bigint_int64(env, args[1], &ra2, &losslessa2);
    assert(status == napi_ok);
  GLFWvidmode* res = glfwGetVideoModes(
    
    ra1,
    
    ra2
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetVideoMode(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWmonitor* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWmonitor*)*a1;
      }
  GLFWvidmode* res = glfwGetVideoMode(
    
    ra1
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetGamma(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWmonitor* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWmonitor*)*a1;
      }
  
  
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 glfwSetGamma(
    
    ra1,
    
    ra2
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetGammaRamp(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWmonitor* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWmonitor*)*a1;
      }
  GLFWgammaramp* res = glfwGetGammaRamp(
    
    ra1
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetGammaRamp(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWmonitor* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWmonitor*)*a1;
      }
  
  napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    GLFWgammaramp* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (GLFWgammaramp*)*a2;
    }
  void* res = NULL;
 glfwSetGammaRamp(
    
    ra1,
    
    ra2
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwDefaultWindowHints(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  void* res = NULL;
 glfwDefaultWindowHints(
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwWindowHint(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 glfwWindowHint(
    
    ra1,
    
    ra2
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwWindowHintString(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  size_t la2;
    status = napi_get_value_string_utf8(env, args[1], NULL, 0, &la2);
    assert(status == napi_ok);
    char* ra2 = (char*)malloc(la2 + 1);
    status = napi_get_value_string_utf8(env, args[1], ra2, la2 + 1, &la2);
    assert(status == napi_ok);
  void* res = NULL;
 glfwWindowHintString(
    
    ra1,
    
    ra2
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwCreateWindow(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  size_t la3;
    status = napi_get_value_string_utf8(env, args[2], NULL, 0, &la3);
    assert(status == napi_ok);
    char* ra3 = (char*)malloc(la3 + 1);
    status = napi_get_value_string_utf8(env, args[2], ra3, la3 + 1, &la3);
    assert(status == napi_ok);
  
  napi_valuetype ta4;
    status = napi_typeof(env, args[3], &ta4);
    assert(status == napi_ok);

    
    GLFWmonitor* ra4 = NULL;
    if (ta4 != napi_null) {
      void **a4;
      void *pa4;
      a4 = &pa4;
      status = napi_get_value_external(env, args[3], a4);
      assert(status == napi_ok);
      
      ra4 = (GLFWmonitor*)*a4;
      }
  
  napi_valuetype ta5;
    status = napi_typeof(env, args[4], &ta5);
    assert(status == napi_ok);

    
    GLFWwindow* ra5 = NULL;
    if (ta5 != napi_null) {
      void **a5;
      void *pa5;
      a5 = &pa5;
      status = napi_get_value_external(env, args[4], a5);
      assert(status == napi_ok);
      
      ra5 = (GLFWwindow*)*a5;
      }
  GLFWwindow* res = glfwCreateWindow(
    
    ra1,
    
    ra2,
    
    ra3,
    
    ra4,
    
    ra5
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwDestroyWindow(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  void* res = NULL;
 glfwDestroyWindow(
    
    ra1
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwWindowShouldClose(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  int res = glfwWindowShouldClose(
    
    ra1
    );

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetWindowShouldClose(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 glfwSetWindowShouldClose(
    
    ra1,
    
    ra2
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetWindowTitle(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  size_t la2;
    status = napi_get_value_string_utf8(env, args[1], NULL, 0, &la2);
    assert(status == napi_ok);
    char* ra2 = (char*)malloc(la2 + 1);
    status = napi_get_value_string_utf8(env, args[1], ra2, la2 + 1, &la2);
    assert(status == napi_ok);
  void* res = NULL;
 glfwSetWindowTitle(
    
    ra1,
    
    ra2
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetWindowIcon(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  napi_valuetype ta3;
    status = napi_typeof(env, args[2], &ta3);
    assert(status == napi_ok);

    
    GLFWimage* ra3 = NULL;
    if (ta3 != napi_null) {
    void **a3;
    void *pa3;
    a3 = &pa3;
    status = napi_get_arraybuffer_info(env, args[2], a3, NULL);
    assert(status == napi_ok);
    
    ra3 = (GLFWimage*)*a3;
    }
  void* res = NULL;
 glfwSetWindowIcon(
    
    ra1,
    
    ra2,
    
    ra3
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetWindowPos(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  
    bool losslessa2 = true;
    int64_t ra2;
    status = napi_get_value_bigint_int64(env, args[1], &ra2, &losslessa2);
    assert(status == napi_ok);
  
  
    bool losslessa3 = true;
    int64_t ra3;
    status = napi_get_value_bigint_int64(env, args[2], &ra3, &losslessa3);
    assert(status == napi_ok);
  void* res = NULL;
 glfwGetWindowPos(
    
    ra1,
    
    ra2,
    
    ra3
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetWindowPos(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  void* res = NULL;
 glfwSetWindowPos(
    
    ra1,
    
    ra2,
    
    ra3
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetWindowSize(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  
    bool losslessa2 = true;
    int64_t ra2;
    status = napi_get_value_bigint_int64(env, args[1], &ra2, &losslessa2);
    assert(status == napi_ok);
  
  
    bool losslessa3 = true;
    int64_t ra3;
    status = napi_get_value_bigint_int64(env, args[2], &ra3, &losslessa3);
    assert(status == napi_ok);
  void* res = NULL;
 glfwGetWindowSize(
    
    ra1,
    
    ra2,
    
    ra3
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetWindowSizeLimits(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    int ra5;
    status = napi_get_value_int32(env, args[4], &ra5);
    assert(status == napi_ok);
  void* res = NULL;
 glfwSetWindowSizeLimits(
    
    ra1,
    
    ra2,
    
    ra3,
    
    ra4,
    
    ra5
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetWindowAspectRatio(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  void* res = NULL;
 glfwSetWindowAspectRatio(
    
    ra1,
    
    ra2,
    
    ra3
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetWindowSize(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  void* res = NULL;
 glfwSetWindowSize(
    
    ra1,
    
    ra2,
    
    ra3
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetFramebufferSize(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  
    bool losslessa2 = true;
    int64_t ra2;
    status = napi_get_value_bigint_int64(env, args[1], &ra2, &losslessa2);
    assert(status == napi_ok);
  
  
    bool losslessa3 = true;
    int64_t ra3;
    status = napi_get_value_bigint_int64(env, args[2], &ra3, &losslessa3);
    assert(status == napi_ok);
  void* res = NULL;
 glfwGetFramebufferSize(
    
    ra1,
    
    ra2,
    
    ra3
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetWindowFrameSize(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 5;
  napi_value args[5];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  
    bool losslessa2 = true;
    int64_t ra2;
    status = napi_get_value_bigint_int64(env, args[1], &ra2, &losslessa2);
    assert(status == napi_ok);
  
  
    bool losslessa3 = true;
    int64_t ra3;
    status = napi_get_value_bigint_int64(env, args[2], &ra3, &losslessa3);
    assert(status == napi_ok);
  
  
    bool losslessa4 = true;
    int64_t ra4;
    status = napi_get_value_bigint_int64(env, args[3], &ra4, &losslessa4);
    assert(status == napi_ok);
  
  
    bool losslessa5 = true;
    int64_t ra5;
    status = napi_get_value_bigint_int64(env, args[4], &ra5, &losslessa5);
    assert(status == napi_ok);
  void* res = NULL;
 glfwGetWindowFrameSize(
    
    ra1,
    
    ra2,
    
    ra3,
    
    ra4,
    
    ra5
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetWindowContentScale(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  
    double* ra2 = NULL;
    status = napi_get_value_double(env, args[1], ra2);
    assert(status == napi_ok);
  
  
    double* ra3 = NULL;
    status = napi_get_value_double(env, args[2], ra3);
    assert(status == napi_ok);
  void* res = NULL;
 glfwGetWindowContentScale(
    
    ra1,
    
    ra2,
    
    ra3
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetWindowOpacity(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  float res = glfwGetWindowOpacity(
    
    ra1
    );

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetWindowOpacity(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  void* res = NULL;
 glfwSetWindowOpacity(
    
    ra1,
    
    ra2
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwIconifyWindow(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  void* res = NULL;
 glfwIconifyWindow(
    
    ra1
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwRestoreWindow(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  void* res = NULL;
 glfwRestoreWindow(
    
    ra1
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwMaximizeWindow(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  void* res = NULL;
 glfwMaximizeWindow(
    
    ra1
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwShowWindow(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  void* res = NULL;
 glfwShowWindow(
    
    ra1
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwHideWindow(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  void* res = NULL;
 glfwHideWindow(
    
    ra1
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwFocusWindow(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  void* res = NULL;
 glfwFocusWindow(
    
    ra1
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwRequestWindowAttention(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  void* res = NULL;
 glfwRequestWindowAttention(
    
    ra1
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetWindowMonitor(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  GLFWmonitor* res = glfwGetWindowMonitor(
    
    ra1
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetWindowMonitor(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 7;
  napi_value args[7];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    GLFWmonitor* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (GLFWmonitor*)*a2;
      }
  
  
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  
  
    int ra4;
    status = napi_get_value_int32(env, args[3], &ra4);
    assert(status == napi_ok);
  
  
    int ra5;
    status = napi_get_value_int32(env, args[4], &ra5);
    assert(status == napi_ok);
  
  
    int ra6;
    status = napi_get_value_int32(env, args[5], &ra6);
    assert(status == napi_ok);
  
  
    int ra7;
    status = napi_get_value_int32(env, args[6], &ra7);
    assert(status == napi_ok);
  void* res = NULL;
 glfwSetWindowMonitor(
    
    ra1,
    
    ra2,
    
    ra3,
    
    ra4,
    
    ra5,
    
    ra6,
    
    ra7
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetWindowAttrib(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  int res = glfwGetWindowAttrib(
    
    ra1,
    
    ra2
    );

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetWindowAttrib(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  void* res = NULL;
 glfwSetWindowAttrib(
    
    ra1,
    
    ra2,
    
    ra3
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetWindowUserPointer(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    void* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (void*)*a2;
    }
  void* res = NULL;
 glfwSetWindowUserPointer(
    
    ra1,
    
    ra2
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetWindowUserPointer(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  void* res = glfwGetWindowUserPointer(
    
    ra1
    );

  
  status = napi_create_bigint_int64(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetWindowPosCallback(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  napi_value work_name;
    assert(napi_create_string_utf8(env, "Thread-safe Function glfwSetWindowPosCallback", NAPI_AUTO_LENGTH, &work_name) == napi_ok);

    napi_value js_cb = args[1];
    assert(napi_create_threadsafe_function(env, js_cb, NULL, work_name, 0, 1, NULL, NULL, NULL, js_callback_glfwSetWindowPosCallback, &tsfn_glfwSetWindowPosCallback) == napi_ok);
  GLFWwindowposfun res = glfwSetWindowPosCallback(
    
    ra1,
    callback_glfwSetWindowPosCallback
    );

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetWindowSizeCallback(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  napi_value work_name;
    assert(napi_create_string_utf8(env, "Thread-safe Function glfwSetWindowSizeCallback", NAPI_AUTO_LENGTH, &work_name) == napi_ok);

    napi_value js_cb = args[1];
    assert(napi_create_threadsafe_function(env, js_cb, NULL, work_name, 0, 1, NULL, NULL, NULL, js_callback_glfwSetWindowSizeCallback, &tsfn_glfwSetWindowSizeCallback) == napi_ok);
  GLFWwindowsizefun res = glfwSetWindowSizeCallback(
    
    ra1,
    callback_glfwSetWindowSizeCallback
    );

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetWindowCloseCallback(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  napi_value work_name;
    assert(napi_create_string_utf8(env, "Thread-safe Function glfwSetWindowCloseCallback", NAPI_AUTO_LENGTH, &work_name) == napi_ok);

    napi_value js_cb = args[1];
    assert(napi_create_threadsafe_function(env, js_cb, NULL, work_name, 0, 1, NULL, NULL, NULL, js_callback_glfwSetWindowCloseCallback, &tsfn_glfwSetWindowCloseCallback) == napi_ok);
  GLFWwindowclosefun res = glfwSetWindowCloseCallback(
    
    ra1,
    callback_glfwSetWindowCloseCallback
    );

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetWindowRefreshCallback(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  napi_value work_name;
    assert(napi_create_string_utf8(env, "Thread-safe Function glfwSetWindowRefreshCallback", NAPI_AUTO_LENGTH, &work_name) == napi_ok);

    napi_value js_cb = args[1];
    assert(napi_create_threadsafe_function(env, js_cb, NULL, work_name, 0, 1, NULL, NULL, NULL, js_callback_glfwSetWindowRefreshCallback, &tsfn_glfwSetWindowRefreshCallback) == napi_ok);
  GLFWwindowrefreshfun res = glfwSetWindowRefreshCallback(
    
    ra1,
    callback_glfwSetWindowRefreshCallback
    );

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetWindowFocusCallback(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  napi_value work_name;
    assert(napi_create_string_utf8(env, "Thread-safe Function glfwSetWindowFocusCallback", NAPI_AUTO_LENGTH, &work_name) == napi_ok);

    napi_value js_cb = args[1];
    assert(napi_create_threadsafe_function(env, js_cb, NULL, work_name, 0, 1, NULL, NULL, NULL, js_callback_glfwSetWindowFocusCallback, &tsfn_glfwSetWindowFocusCallback) == napi_ok);
  GLFWwindowfocusfun res = glfwSetWindowFocusCallback(
    
    ra1,
    callback_glfwSetWindowFocusCallback
    );

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetWindowIconifyCallback(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  napi_value work_name;
    assert(napi_create_string_utf8(env, "Thread-safe Function glfwSetWindowIconifyCallback", NAPI_AUTO_LENGTH, &work_name) == napi_ok);

    napi_value js_cb = args[1];
    assert(napi_create_threadsafe_function(env, js_cb, NULL, work_name, 0, 1, NULL, NULL, NULL, js_callback_glfwSetWindowIconifyCallback, &tsfn_glfwSetWindowIconifyCallback) == napi_ok);
  GLFWwindowiconifyfun res = glfwSetWindowIconifyCallback(
    
    ra1,
    callback_glfwSetWindowIconifyCallback
    );

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetWindowMaximizeCallback(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  napi_value work_name;
    assert(napi_create_string_utf8(env, "Thread-safe Function glfwSetWindowMaximizeCallback", NAPI_AUTO_LENGTH, &work_name) == napi_ok);

    napi_value js_cb = args[1];
    assert(napi_create_threadsafe_function(env, js_cb, NULL, work_name, 0, 1, NULL, NULL, NULL, js_callback_glfwSetWindowMaximizeCallback, &tsfn_glfwSetWindowMaximizeCallback) == napi_ok);
  GLFWwindowmaximizefun res = glfwSetWindowMaximizeCallback(
    
    ra1,
    callback_glfwSetWindowMaximizeCallback
    );

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetFramebufferSizeCallback(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  napi_value work_name;
    assert(napi_create_string_utf8(env, "Thread-safe Function glfwSetFramebufferSizeCallback", NAPI_AUTO_LENGTH, &work_name) == napi_ok);

    napi_value js_cb = args[1];
    assert(napi_create_threadsafe_function(env, js_cb, NULL, work_name, 0, 1, NULL, NULL, NULL, js_callback_glfwSetFramebufferSizeCallback, &tsfn_glfwSetFramebufferSizeCallback) == napi_ok);
  GLFWframebuffersizefun res = glfwSetFramebufferSizeCallback(
    
    ra1,
    callback_glfwSetFramebufferSizeCallback
    );

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetWindowContentScaleCallback(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  napi_value work_name;
    assert(napi_create_string_utf8(env, "Thread-safe Function glfwSetWindowContentScaleCallback", NAPI_AUTO_LENGTH, &work_name) == napi_ok);

    napi_value js_cb = args[1];
    assert(napi_create_threadsafe_function(env, js_cb, NULL, work_name, 0, 1, NULL, NULL, NULL, js_callback_glfwSetWindowContentScaleCallback, &tsfn_glfwSetWindowContentScaleCallback) == napi_ok);
  GLFWwindowcontentscalefun res = glfwSetWindowContentScaleCallback(
    
    ra1,
    callback_glfwSetWindowContentScaleCallback
    );

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwPollEvents(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  void* res = NULL;
 glfwPollEvents(
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwWaitEvents(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  void* res = NULL;
 glfwWaitEvents(
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwWaitEventsTimeout(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    double ra1;
    status = napi_get_value_double(env, args[0], &ra1);
    assert(status == napi_ok);
  void* res = NULL;
 glfwWaitEventsTimeout(
    
    ra1
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwPostEmptyEvent(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  void* res = NULL;
 glfwPostEmptyEvent(
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetInputMode(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  int res = glfwGetInputMode(
    
    ra1,
    
    ra2
    );

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetInputMode(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  void* res = NULL;
 glfwSetInputMode(
    
    ra1,
    
    ra2,
    
    ra3
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwRawMouseMotionSupported(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  int res = glfwRawMouseMotionSupported(
    );

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetKeyName(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  char* res = glfwGetKeyName(
    
    ra1,
    
    ra2
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetKeyScancode(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  int res = glfwGetKeyScancode(
    
    ra1
    );

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetKey(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  int res = glfwGetKey(
    
    ra1,
    
    ra2
    );

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetMouseButton(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  int res = glfwGetMouseButton(
    
    ra1,
    
    ra2
    );

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetCursorPos(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  
    double* ra2 = NULL;
    status = napi_get_value_double(env, args[1], ra2);
    assert(status == napi_ok);
  
  
    double* ra3 = NULL;
    status = napi_get_value_double(env, args[2], ra3);
    assert(status == napi_ok);
  void* res = NULL;
 glfwGetCursorPos(
    
    ra1,
    
    ra2,
    
    ra3
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetCursorPos(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  
    double ra2;
    status = napi_get_value_double(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    double ra3;
    status = napi_get_value_double(env, args[2], &ra3);
    assert(status == napi_ok);
  void* res = NULL;
 glfwSetCursorPos(
    
    ra1,
    
    ra2,
    
    ra3
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwCreateCursor(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 3;
  napi_value args[3];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWimage* ra1 = NULL;
    if (ta1 != napi_null) {
    void **a1;
    void *pa1;
    a1 = &pa1;
    status = napi_get_arraybuffer_info(env, args[0], a1, NULL);
    assert(status == napi_ok);
    
    ra1 = (GLFWimage*)*a1;
    }
  
  
    int ra2;
    status = napi_get_value_int32(env, args[1], &ra2);
    assert(status == napi_ok);
  
  
    int ra3;
    status = napi_get_value_int32(env, args[2], &ra3);
    assert(status == napi_ok);
  GLFWcursor* res = glfwCreateCursor(
    
    ra1,
    
    ra2,
    
    ra3
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwCreateStandardCursor(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  GLFWcursor* res = glfwCreateStandardCursor(
    
    ra1
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwDestroyCursor(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWcursor* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWcursor*)*a1;
      }
  void* res = NULL;
 glfwDestroyCursor(
    
    ra1
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetCursor(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    GLFWcursor* ra2 = NULL;
    if (ta2 != napi_null) {
      void **a2;
      void *pa2;
      a2 = &pa2;
      status = napi_get_value_external(env, args[1], a2);
      assert(status == napi_ok);
      
      ra2 = (GLFWcursor*)*a2;
      }
  void* res = NULL;
 glfwSetCursor(
    
    ra1,
    
    ra2
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetKeyCallback(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  napi_value work_name;
    assert(napi_create_string_utf8(env, "Thread-safe Function glfwSetKeyCallback", NAPI_AUTO_LENGTH, &work_name) == napi_ok);

    napi_value js_cb = args[1];
    assert(napi_create_threadsafe_function(env, js_cb, NULL, work_name, 0, 1, NULL, NULL, NULL, js_callback_glfwSetKeyCallback, &tsfn_glfwSetKeyCallback) == napi_ok);
  GLFWkeyfun res = glfwSetKeyCallback(
    
    ra1,
    callback_glfwSetKeyCallback
    );

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetCharCallback(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  napi_value work_name;
    assert(napi_create_string_utf8(env, "Thread-safe Function glfwSetCharCallback", NAPI_AUTO_LENGTH, &work_name) == napi_ok);

    napi_value js_cb = args[1];
    assert(napi_create_threadsafe_function(env, js_cb, NULL, work_name, 0, 1, NULL, NULL, NULL, js_callback_glfwSetCharCallback, &tsfn_glfwSetCharCallback) == napi_ok);
  GLFWcharfun res = glfwSetCharCallback(
    
    ra1,
    callback_glfwSetCharCallback
    );

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetCharModsCallback(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  napi_value work_name;
    assert(napi_create_string_utf8(env, "Thread-safe Function glfwSetCharModsCallback", NAPI_AUTO_LENGTH, &work_name) == napi_ok);

    napi_value js_cb = args[1];
    assert(napi_create_threadsafe_function(env, js_cb, NULL, work_name, 0, 1, NULL, NULL, NULL, js_callback_glfwSetCharModsCallback, &tsfn_glfwSetCharModsCallback) == napi_ok);
  GLFWcharmodsfun res = glfwSetCharModsCallback(
    
    ra1,
    callback_glfwSetCharModsCallback
    );

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetMouseButtonCallback(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  napi_value work_name;
    assert(napi_create_string_utf8(env, "Thread-safe Function glfwSetMouseButtonCallback", NAPI_AUTO_LENGTH, &work_name) == napi_ok);

    napi_value js_cb = args[1];
    assert(napi_create_threadsafe_function(env, js_cb, NULL, work_name, 0, 1, NULL, NULL, NULL, js_callback_glfwSetMouseButtonCallback, &tsfn_glfwSetMouseButtonCallback) == napi_ok);
  GLFWmousebuttonfun res = glfwSetMouseButtonCallback(
    
    ra1,
    callback_glfwSetMouseButtonCallback
    );

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetCursorPosCallback(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  napi_value work_name;
    assert(napi_create_string_utf8(env, "Thread-safe Function glfwSetCursorPosCallback", NAPI_AUTO_LENGTH, &work_name) == napi_ok);

    napi_value js_cb = args[1];
    assert(napi_create_threadsafe_function(env, js_cb, NULL, work_name, 0, 1, NULL, NULL, NULL, js_callback_glfwSetCursorPosCallback, &tsfn_glfwSetCursorPosCallback) == napi_ok);
  GLFWcursorposfun res = glfwSetCursorPosCallback(
    
    ra1,
    callback_glfwSetCursorPosCallback
    );

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetCursorEnterCallback(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  napi_value work_name;
    assert(napi_create_string_utf8(env, "Thread-safe Function glfwSetCursorEnterCallback", NAPI_AUTO_LENGTH, &work_name) == napi_ok);

    napi_value js_cb = args[1];
    assert(napi_create_threadsafe_function(env, js_cb, NULL, work_name, 0, 1, NULL, NULL, NULL, js_callback_glfwSetCursorEnterCallback, &tsfn_glfwSetCursorEnterCallback) == napi_ok);
  GLFWcursorenterfun res = glfwSetCursorEnterCallback(
    
    ra1,
    callback_glfwSetCursorEnterCallback
    );

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetScrollCallback(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  napi_value work_name;
    assert(napi_create_string_utf8(env, "Thread-safe Function glfwSetScrollCallback", NAPI_AUTO_LENGTH, &work_name) == napi_ok);

    napi_value js_cb = args[1];
    assert(napi_create_threadsafe_function(env, js_cb, NULL, work_name, 0, 1, NULL, NULL, NULL, js_callback_glfwSetScrollCallback, &tsfn_glfwSetScrollCallback) == napi_ok);
  GLFWscrollfun res = glfwSetScrollCallback(
    
    ra1,
    callback_glfwSetScrollCallback
    );

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetDropCallback(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  napi_value work_name;
    assert(napi_create_string_utf8(env, "Thread-safe Function glfwSetDropCallback", NAPI_AUTO_LENGTH, &work_name) == napi_ok);

    napi_value js_cb = args[1];
    assert(napi_create_threadsafe_function(env, js_cb, NULL, work_name, 0, 1, NULL, NULL, NULL, js_callback_glfwSetDropCallback, &tsfn_glfwSetDropCallback) == napi_ok);
  GLFWdropfun res = glfwSetDropCallback(
    
    ra1,
    callback_glfwSetDropCallback
    );

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwJoystickPresent(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  int res = glfwJoystickPresent(
    
    ra1
    );

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetJoystickAxes(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    bool losslessa2 = true;
    int64_t ra2;
    status = napi_get_value_bigint_int64(env, args[1], &ra2, &losslessa2);
    assert(status == napi_ok);
  float* res = glfwGetJoystickAxes(
    
    ra1,
    
    ra2
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetJoystickButtons(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    bool losslessa2 = true;
    int64_t ra2;
    status = napi_get_value_bigint_int64(env, args[1], &ra2, &losslessa2);
    assert(status == napi_ok);
  unsigned char* res = glfwGetJoystickButtons(
    
    ra1,
    
    ra2
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetJoystickHats(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  
    bool losslessa2 = true;
    int64_t ra2;
    status = napi_get_value_bigint_int64(env, args[1], &ra2, &losslessa2);
    assert(status == napi_ok);
  unsigned char* res = glfwGetJoystickHats(
    
    ra1,
    
    ra2
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetJoystickName(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  char* res = glfwGetJoystickName(
    
    ra1
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetJoystickGUID(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  char* res = glfwGetJoystickGUID(
    
    ra1
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetJoystickUserPointer(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    void* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (void*)*a2;
    }
  void* res = NULL;
 glfwSetJoystickUserPointer(
    
    ra1,
    
    ra2
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetJoystickUserPointer(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  void* res = glfwGetJoystickUserPointer(
    
    ra1
    );

  
  status = napi_create_bigint_int64(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwJoystickIsGamepad(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  int res = glfwJoystickIsGamepad(
    
    ra1
    );

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetJoystickCallback(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_value work_name;
    assert(napi_create_string_utf8(env, "Thread-safe Function glfwSetJoystickCallback", NAPI_AUTO_LENGTH, &work_name) == napi_ok);

    napi_value js_cb = args[0];
    assert(napi_create_threadsafe_function(env, js_cb, NULL, work_name, 0, 1, NULL, NULL, NULL, js_callback_glfwSetJoystickCallback, &tsfn_glfwSetJoystickCallback) == napi_ok);
  GLFWjoystickfun res = glfwSetJoystickCallback(
    callback_glfwSetJoystickCallback
    );

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwUpdateGamepadMappings(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  size_t la1;
    status = napi_get_value_string_utf8(env, args[0], NULL, 0, &la1);
    assert(status == napi_ok);
    char* ra1 = (char*)malloc(la1 + 1);
    status = napi_get_value_string_utf8(env, args[0], ra1, la1 + 1, &la1);
    assert(status == napi_ok);
  int res = glfwUpdateGamepadMappings(
    
    ra1
    );

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetGamepadName(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  char* res = glfwGetGamepadName(
    
    ra1
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetGamepadState(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  
  napi_valuetype ta2;
    status = napi_typeof(env, args[1], &ta2);
    assert(status == napi_ok);

    
    GLFWgamepadstate* ra2 = NULL;
    if (ta2 != napi_null) {
    void **a2;
    void *pa2;
    a2 = &pa2;
    status = napi_get_arraybuffer_info(env, args[1], a2, NULL);
    assert(status == napi_ok);
    
    ra2 = (GLFWgamepadstate*)*a2;
    }
  int res = glfwGetGamepadState(
    
    ra1,
    
    ra2
    );

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetClipboardString(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  
  size_t la2;
    status = napi_get_value_string_utf8(env, args[1], NULL, 0, &la2);
    assert(status == napi_ok);
    char* ra2 = (char*)malloc(la2 + 1);
    status = napi_get_value_string_utf8(env, args[1], ra2, la2 + 1, &la2);
    assert(status == napi_ok);
  void* res = NULL;
 glfwSetClipboardString(
    
    ra1,
    
    ra2
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetClipboardString(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  char* res = glfwGetClipboardString(
    
    ra1
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetTime(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  double res = glfwGetTime(
    );

  
  status = napi_create_double(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSetTime(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    double ra1;
    status = napi_get_value_double(env, args[0], &ra1);
    assert(status == napi_ok);
  void* res = NULL;
 glfwSetTime(
    
    ra1
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetTimerValue(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  uint64_t res = glfwGetTimerValue(
    );

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetTimerFrequency(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  uint64_t res = glfwGetTimerFrequency(
    );

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwMakeContextCurrent(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  void* res = NULL;
 glfwMakeContextCurrent(
    
    ra1
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetCurrentContext(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  GLFWwindow* res = glfwGetCurrentContext(
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSwapBuffers(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  napi_valuetype ta1;
    status = napi_typeof(env, args[0], &ta1);
    assert(status == napi_ok);

    
    GLFWwindow* ra1 = NULL;
    if (ta1 != napi_null) {
      void **a1;
      void *pa1;
      a1 = &pa1;
      status = napi_get_value_external(env, args[0], a1);
      assert(status == napi_ok);
      
      ra1 = (GLFWwindow*)*a1;
      }
  void* res = NULL;
 glfwSwapBuffers(
    
    ra1
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwSwapInterval(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    int ra1;
    status = napi_get_value_int32(env, args[0], &ra1);
    assert(status == napi_ok);
  void* res = NULL;
 glfwSwapInterval(
    
    ra1
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwExtensionSupported(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  size_t la1;
    status = napi_get_value_string_utf8(env, args[0], NULL, 0, &la1);
    assert(status == napi_ok);
    char* ra1 = (char*)malloc(la1 + 1);
    status = napi_get_value_string_utf8(env, args[0], ra1, la1 + 1, &la1);
    assert(status == napi_ok);
  int res = glfwExtensionSupported(
    
    ra1
    );

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetProcAddress(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  size_t la1;
    status = napi_get_value_string_utf8(env, args[0], NULL, 0, &la1);
    assert(status == napi_ok);
    char* ra1 = (char*)malloc(la1 + 1);
    status = napi_get_value_string_utf8(env, args[0], ra1, la1 + 1, &la1);
    assert(status == napi_ok);
  GLFWglproc res = glfwGetProcAddress(
    
    ra1
    );

  
  status = napi_create_external(env, &res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwVulkanSupported(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  int res = glfwVulkanSupported(
    );

  
  status = napi_create_int32(env, res, &num);
  assert(status == napi_ok);
  return num;
}

napi_value _glfwGetRequiredInstanceExtensions(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value num;

  
  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  assert(status == napi_ok);
  
  
    unsigned int* ra1 = NULL;
    status = napi_get_value_uint32(env, args[0], ra1);
    assert(status == napi_ok);
  char* res = glfwGetRequiredInstanceExtensions(
    
    ra1
    );

  
  status = napi_create_external(env, res, NULL, NULL, &num);
  assert(status == napi_ok);
  return num;
}


