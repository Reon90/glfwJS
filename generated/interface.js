const os = require('node:os');
const buildType = os.arch() === 'arm64' ? `${os.platform()}-${os.arch()}` : os.platform(); 
const glfw = require(`../build/${buildType}/Release/glfwJS.node`);

function getMemory(p, l) {
    return glfw.getMemory(p, l);
}

function getAddress(buffer) {
    return glfw.getAddress(buffer);
}



function glfwInit() {
    return glfw._glfwInit();
}
function glfwTerminate() {
    return glfw._glfwTerminate();
}
function glfwInitHint(ra1,ra2) {
    return glfw._glfwInitHint(ra1,ra2);
}
function glfwGetVersion(ra1,ra2,ra3) {
    return glfw._glfwGetVersion(ra1,ra2,ra3);
}
function glfwGetVersionString() {
    return glfw._glfwGetVersionString();
}
function glfwGetError(ra1) {
    return glfw._glfwGetError(ra1);
}
function glfwSetErrorCallback(ra1) {
    return glfw._glfwSetErrorCallback(ra1);
}
function glfwGetMonitors(ra1) {
    return glfw._glfwGetMonitors(ra1);
}
function glfwGetPrimaryMonitor() {
    return glfw._glfwGetPrimaryMonitor();
}
function glfwGetMonitorPos(ra1,ra2,ra3) {
    return glfw._glfwGetMonitorPos(ra1,ra2,ra3);
}
function glfwGetMonitorWorkarea(ra1,ra2,ra3,ra4,ra5) {
    return glfw._glfwGetMonitorWorkarea(ra1,ra2,ra3,ra4,ra5);
}
function glfwGetMonitorPhysicalSize(ra1,ra2,ra3) {
    return glfw._glfwGetMonitorPhysicalSize(ra1,ra2,ra3);
}
function glfwGetMonitorContentScale(ra1,ra2,ra3) {
    return glfw._glfwGetMonitorContentScale(ra1,ra2,ra3);
}
function glfwGetMonitorName(ra1) {
    return glfw._glfwGetMonitorName(ra1);
}
function glfwSetMonitorUserPointer(ra1,ra2) {
    return glfw._glfwSetMonitorUserPointer(ra1,ra2);
}
function glfwGetMonitorUserPointer(ra1) {
    return glfw._glfwGetMonitorUserPointer(ra1);
}
function glfwSetMonitorCallback(ra1) {
    return glfw._glfwSetMonitorCallback(ra1);
}
function glfwGetVideoModes(ra1,ra2) {
    return glfw._glfwGetVideoModes(ra1,ra2);
}
function glfwGetVideoMode(ra1) {
    return glfw._glfwGetVideoMode(ra1);
}
function glfwSetGamma(ra1,ra2) {
    return glfw._glfwSetGamma(ra1,ra2);
}
function glfwGetGammaRamp(ra1) {
    return glfw._glfwGetGammaRamp(ra1);
}
function glfwSetGammaRamp(ra1,ra2) {
    return glfw._glfwSetGammaRamp(ra1,ra2);
}
function glfwDefaultWindowHints() {
    return glfw._glfwDefaultWindowHints();
}
function glfwWindowHint(ra1,ra2) {
    return glfw._glfwWindowHint(ra1,ra2);
}
function glfwWindowHintString(ra1,ra2) {
    return glfw._glfwWindowHintString(ra1,ra2);
}
function glfwCreateWindow(ra1,ra2,ra3,ra4,ra5) {
    return glfw._glfwCreateWindow(ra1,ra2,ra3,ra4,ra5);
}
function glfwDestroyWindow(ra1) {
    return glfw._glfwDestroyWindow(ra1);
}
function glfwWindowShouldClose(ra1) {
    return glfw._glfwWindowShouldClose(ra1);
}
function glfwSetWindowShouldClose(ra1,ra2) {
    return glfw._glfwSetWindowShouldClose(ra1,ra2);
}
function glfwSetWindowTitle(ra1,ra2) {
    return glfw._glfwSetWindowTitle(ra1,ra2);
}
function glfwSetWindowIcon(ra1,ra2,ra3) {
    return glfw._glfwSetWindowIcon(ra1,ra2,ra3);
}
function glfwGetWindowPos(ra1,ra2,ra3) {
    return glfw._glfwGetWindowPos(ra1,ra2,ra3);
}
function glfwSetWindowPos(ra1,ra2,ra3) {
    return glfw._glfwSetWindowPos(ra1,ra2,ra3);
}
function glfwGetWindowSize(ra1,ra2,ra3) {
    return glfw._glfwGetWindowSize(ra1,ra2,ra3);
}
function glfwSetWindowSizeLimits(ra1,ra2,ra3,ra4,ra5) {
    return glfw._glfwSetWindowSizeLimits(ra1,ra2,ra3,ra4,ra5);
}
function glfwSetWindowAspectRatio(ra1,ra2,ra3) {
    return glfw._glfwSetWindowAspectRatio(ra1,ra2,ra3);
}
function glfwSetWindowSize(ra1,ra2,ra3) {
    return glfw._glfwSetWindowSize(ra1,ra2,ra3);
}
function glfwGetFramebufferSize(ra1,ra2,ra3) {
    return glfw._glfwGetFramebufferSize(ra1,ra2,ra3);
}
function glfwGetWindowFrameSize(ra1,ra2,ra3,ra4,ra5) {
    return glfw._glfwGetWindowFrameSize(ra1,ra2,ra3,ra4,ra5);
}
function glfwGetWindowContentScale(ra1,ra2,ra3) {
    return glfw._glfwGetWindowContentScale(ra1,ra2,ra3);
}
function glfwGetWindowOpacity(ra1) {
    return glfw._glfwGetWindowOpacity(ra1);
}
function glfwSetWindowOpacity(ra1,ra2) {
    return glfw._glfwSetWindowOpacity(ra1,ra2);
}
function glfwIconifyWindow(ra1) {
    return glfw._glfwIconifyWindow(ra1);
}
function glfwRestoreWindow(ra1) {
    return glfw._glfwRestoreWindow(ra1);
}
function glfwMaximizeWindow(ra1) {
    return glfw._glfwMaximizeWindow(ra1);
}
function glfwShowWindow(ra1) {
    return glfw._glfwShowWindow(ra1);
}
function glfwHideWindow(ra1) {
    return glfw._glfwHideWindow(ra1);
}
function glfwFocusWindow(ra1) {
    return glfw._glfwFocusWindow(ra1);
}
function glfwRequestWindowAttention(ra1) {
    return glfw._glfwRequestWindowAttention(ra1);
}
function glfwGetWindowMonitor(ra1) {
    return glfw._glfwGetWindowMonitor(ra1);
}
function glfwSetWindowMonitor(ra1,ra2,ra3,ra4,ra5,ra6,ra7) {
    return glfw._glfwSetWindowMonitor(ra1,ra2,ra3,ra4,ra5,ra6,ra7);
}
function glfwGetWindowAttrib(ra1,ra2) {
    return glfw._glfwGetWindowAttrib(ra1,ra2);
}
function glfwSetWindowAttrib(ra1,ra2,ra3) {
    return glfw._glfwSetWindowAttrib(ra1,ra2,ra3);
}
function glfwSetWindowUserPointer(ra1,ra2) {
    return glfw._glfwSetWindowUserPointer(ra1,ra2);
}
function glfwGetWindowUserPointer(ra1) {
    return glfw._glfwGetWindowUserPointer(ra1);
}
function glfwSetWindowPosCallback(ra1,ra2) {
    return glfw._glfwSetWindowPosCallback(ra1,ra2);
}
function glfwSetWindowSizeCallback(ra1,ra2) {
    return glfw._glfwSetWindowSizeCallback(ra1,ra2);
}
function glfwSetWindowCloseCallback(ra1,ra2) {
    return glfw._glfwSetWindowCloseCallback(ra1,ra2);
}
function glfwSetWindowRefreshCallback(ra1,ra2) {
    return glfw._glfwSetWindowRefreshCallback(ra1,ra2);
}
function glfwSetWindowFocusCallback(ra1,ra2) {
    return glfw._glfwSetWindowFocusCallback(ra1,ra2);
}
function glfwSetWindowIconifyCallback(ra1,ra2) {
    return glfw._glfwSetWindowIconifyCallback(ra1,ra2);
}
function glfwSetWindowMaximizeCallback(ra1,ra2) {
    return glfw._glfwSetWindowMaximizeCallback(ra1,ra2);
}
function glfwSetFramebufferSizeCallback(ra1,ra2) {
    return glfw._glfwSetFramebufferSizeCallback(ra1,ra2);
}
function glfwSetWindowContentScaleCallback(ra1,ra2) {
    return glfw._glfwSetWindowContentScaleCallback(ra1,ra2);
}
function glfwPollEvents() {
    return glfw._glfwPollEvents();
}
function glfwWaitEvents() {
    return glfw._glfwWaitEvents();
}
function glfwWaitEventsTimeout(ra1) {
    return glfw._glfwWaitEventsTimeout(ra1);
}
function glfwPostEmptyEvent() {
    return glfw._glfwPostEmptyEvent();
}
function glfwGetInputMode(ra1,ra2) {
    return glfw._glfwGetInputMode(ra1,ra2);
}
function glfwSetInputMode(ra1,ra2,ra3) {
    return glfw._glfwSetInputMode(ra1,ra2,ra3);
}
function glfwRawMouseMotionSupported() {
    return glfw._glfwRawMouseMotionSupported();
}
function glfwGetKeyName(ra1,ra2) {
    return glfw._glfwGetKeyName(ra1,ra2);
}
function glfwGetKeyScancode(ra1) {
    return glfw._glfwGetKeyScancode(ra1);
}
function glfwGetKey(ra1,ra2) {
    return glfw._glfwGetKey(ra1,ra2);
}
function glfwGetMouseButton(ra1,ra2) {
    return glfw._glfwGetMouseButton(ra1,ra2);
}
function glfwGetCursorPos(ra1,ra2,ra3) {
    return glfw._glfwGetCursorPos(ra1,ra2,ra3);
}
function glfwSetCursorPos(ra1,ra2,ra3) {
    return glfw._glfwSetCursorPos(ra1,ra2,ra3);
}
function glfwCreateCursor(ra1,ra2,ra3) {
    return glfw._glfwCreateCursor(ra1,ra2,ra3);
}
function glfwCreateStandardCursor(ra1) {
    return glfw._glfwCreateStandardCursor(ra1);
}
function glfwDestroyCursor(ra1) {
    return glfw._glfwDestroyCursor(ra1);
}
function glfwSetCursor(ra1,ra2) {
    return glfw._glfwSetCursor(ra1,ra2);
}
function glfwSetKeyCallback(ra1,ra2) {
    return glfw._glfwSetKeyCallback(ra1,ra2);
}
function glfwSetCharCallback(ra1,ra2) {
    return glfw._glfwSetCharCallback(ra1,ra2);
}
function glfwSetCharModsCallback(ra1,ra2) {
    return glfw._glfwSetCharModsCallback(ra1,ra2);
}
function glfwSetMouseButtonCallback(ra1,ra2) {
    return glfw._glfwSetMouseButtonCallback(ra1,ra2);
}
function glfwSetCursorPosCallback(ra1,ra2) {
    return glfw._glfwSetCursorPosCallback(ra1,ra2);
}
function glfwSetCursorEnterCallback(ra1,ra2) {
    return glfw._glfwSetCursorEnterCallback(ra1,ra2);
}
function glfwSetScrollCallback(ra1,ra2) {
    return glfw._glfwSetScrollCallback(ra1,ra2);
}
function glfwSetDropCallback(ra1,ra2) {
    return glfw._glfwSetDropCallback(ra1,ra2);
}
function glfwJoystickPresent(ra1) {
    return glfw._glfwJoystickPresent(ra1);
}
function glfwGetJoystickAxes(ra1,ra2) {
    return glfw._glfwGetJoystickAxes(ra1,ra2);
}
function glfwGetJoystickButtons(ra1,ra2) {
    return glfw._glfwGetJoystickButtons(ra1,ra2);
}
function glfwGetJoystickHats(ra1,ra2) {
    return glfw._glfwGetJoystickHats(ra1,ra2);
}
function glfwGetJoystickName(ra1) {
    return glfw._glfwGetJoystickName(ra1);
}
function glfwGetJoystickGUID(ra1) {
    return glfw._glfwGetJoystickGUID(ra1);
}
function glfwSetJoystickUserPointer(ra1,ra2) {
    return glfw._glfwSetJoystickUserPointer(ra1,ra2);
}
function glfwGetJoystickUserPointer(ra1) {
    return glfw._glfwGetJoystickUserPointer(ra1);
}
function glfwJoystickIsGamepad(ra1) {
    return glfw._glfwJoystickIsGamepad(ra1);
}
function glfwSetJoystickCallback(ra1) {
    return glfw._glfwSetJoystickCallback(ra1);
}
function glfwUpdateGamepadMappings(ra1) {
    return glfw._glfwUpdateGamepadMappings(ra1);
}
function glfwGetGamepadName(ra1) {
    return glfw._glfwGetGamepadName(ra1);
}
function glfwGetGamepadState(ra1,ra2) {
    return glfw._glfwGetGamepadState(ra1,ra2);
}
function glfwSetClipboardString(ra1,ra2) {
    return glfw._glfwSetClipboardString(ra1,ra2);
}
function glfwGetClipboardString(ra1) {
    return glfw._glfwGetClipboardString(ra1);
}
function glfwGetTime() {
    return glfw._glfwGetTime();
}
function glfwSetTime(ra1) {
    return glfw._glfwSetTime(ra1);
}
function glfwGetTimerValue() {
    return glfw._glfwGetTimerValue();
}
function glfwGetTimerFrequency() {
    return glfw._glfwGetTimerFrequency();
}
function glfwMakeContextCurrent(ra1) {
    return glfw._glfwMakeContextCurrent(ra1);
}
function glfwGetCurrentContext() {
    return glfw._glfwGetCurrentContext();
}
function glfwSwapBuffers(ra1) {
    return glfw._glfwSwapBuffers(ra1);
}
function glfwSwapInterval(ra1) {
    return glfw._glfwSwapInterval(ra1);
}
function glfwExtensionSupported(ra1) {
    return glfw._glfwExtensionSupported(ra1);
}
function glfwGetProcAddress(ra1) {
    return glfw._glfwGetProcAddress(ra1);
}
function glfwVulkanSupported() {
    return glfw._glfwVulkanSupported();
}
function glfwGetRequiredInstanceExtensions(ra1) {
    return glfw._glfwGetRequiredInstanceExtensions(ra1);
}


module.exports = {
    GL_FALSE: 0,
    GL_TRUE: 1,
    GL_RGBA8: 32856,
    GLFW_VERSION_MAJOR:3,
    GLFW_VERSION_MINOR:3,
    GLFW_VERSION_REVISION :      2,
    GLFW_TRUE:         1,
    GLFW_FALSE:        0,
    GLFW_RELEASE:      0,
    GLFW_PRESS:        1,
    GLFW_REPEAT:       2,
    GLFW_HAT_CENTERED: 0,
    GLFW_HAT_UP:       1,
    GLFW_HAT_RIGHT:    2,
    GLFW_HAT_DOWN:     4,
    GLFW_HAT_LEFT:     8,
    GLFW_HAT_RIGHT_UP: (2 | 1),
    GLFW_HAT_RIGHT_DOWN:         (2 | 4),
    GLFW_HAT_LEFT_UP:  (8  | 1),
    GLFW_HAT_LEFT_DOWN:(8  | 4),
    GLFW_KEY_UNKNOWN:  -1,
    GLFW_KEY_SPACE:    32,
    GLFW_KEY_APOSTROPHE  :       39,
    GLFW_KEY_MINUS:    45,
    GLFW_KEY_PERIOD:   46,
    GLFW_KEY_SLASH:    47,
    GLFW_KEY_0:        48,
    GLFW_KEY_1:        49,
    GLFW_KEY_2:        50,
    GLFW_KEY_3:        51,
    GLFW_KEY_4:        52,
    GLFW_KEY_5:        53,
    GLFW_KEY_6:        54,
    GLFW_KEY_7:        55,
    GLFW_KEY_8:        56,
    GLFW_KEY_9:        57,
    GLFW_KEY_SEMICOLON:59,
    GLFW_KEY_EQUAL:    61,
    GLFW_KEY_A:        65,
    GLFW_KEY_B:        66,
    GLFW_KEY_C:        67,
    GLFW_KEY_D:        68,
    GLFW_KEY_E:        69,
    GLFW_KEY_F:        70,
    GLFW_KEY_G:        71,
    GLFW_KEY_H:        72,
    GLFW_KEY_I:        73,
    GLFW_KEY_J:        74,
    GLFW_KEY_K:        75,
    GLFW_KEY_L:        76,
    GLFW_KEY_M:        77,
    GLFW_KEY_N:        78,
    GLFW_KEY_O:        79,
    GLFW_KEY_P:        80,
    GLFW_KEY_Q:        81,
    GLFW_KEY_R:        82,
    GLFW_KEY_S:        83,
    GLFW_KEY_T:        84,
    GLFW_KEY_U:        85,
    GLFW_KEY_V:        86,
    GLFW_KEY_W:        87,
    GLFW_KEY_X:        88,
    GLFW_KEY_Y:        89,
    GLFW_KEY_Z:        90,
    GLFW_KEY_LEFT_BRACKET :      91,
    GLFW_KEY_BACKSLASH:92,
    GLFW_KEY_RIGHT_BRACKET :     93,
    GLFW_KEY_GRAVE_ACCENT :      96,
    GLFW_KEY_WORLD_1:  161,
    GLFW_KEY_WORLD_2:  162 ,
    GLFW_KEY_ESCAPE:   256,
    GLFW_KEY_ENTER:    257,
    GLFW_KEY_TAB:      258,
    GLFW_KEY_BACKSPACE:259,
    GLFW_KEY_INSERT:   260,
    GLFW_KEY_DELETE:   261,
    GLFW_KEY_RIGHT:    262,
    GLFW_KEY_LEFT:     263,
    GLFW_KEY_DOWN:     264,
    GLFW_KEY_UP:       265,
    GLFW_KEY_PAGE_UP:  266,
    GLFW_KEY_PAGE_DOWN:267,
    GLFW_KEY_HOME:     268,
    GLFW_KEY_END:      269,
    GLFW_KEY_CAPS_LOCK:280,
    GLFW_KEY_SCROLL_LOCK  :      281,
    GLFW_KEY_NUM_LOCK: 282,
    GLFW_KEY_PRINT_SCREEN  :     283,
    GLFW_KEY_PAUSE:    284,
    GLFW_KEY_F1:       290,
    GLFW_KEY_F2:       291,
    GLFW_KEY_F3:       292,
    GLFW_KEY_F4:       293,
    GLFW_KEY_F5:       294,
    GLFW_KEY_F6:       295,
    GLFW_KEY_F7:       296,
    GLFW_KEY_F8:       297,
    GLFW_KEY_F9:       298,
    GLFW_KEY_F10:      299,
    GLFW_KEY_F11:      300,
    GLFW_KEY_F12:      301,
    GLFW_KEY_F13:      302,
    GLFW_KEY_F14:      303,
    GLFW_KEY_F15:      304,
    GLFW_KEY_F16:      305,
    GLFW_KEY_F17:      306,
    GLFW_KEY_F18:      307,
    GLFW_KEY_F19:      308,
    GLFW_KEY_F20:      309,
    GLFW_KEY_F21:      310,
    GLFW_KEY_F22:      311,
    GLFW_KEY_F23:      312,
    GLFW_KEY_F24:      313,
    GLFW_KEY_F25:      314,
    GLFW_KEY_KP_0:     320,
    GLFW_KEY_KP_1:     321,
    GLFW_KEY_KP_2:     322,
    GLFW_KEY_KP_3:     323,
    GLFW_KEY_KP_4:     324,
    GLFW_KEY_KP_5:     325,
    GLFW_KEY_KP_6:     326,
    GLFW_KEY_KP_7:     327,
    GLFW_KEY_KP_8:     328,
    GLFW_KEY_KP_9:     329,
    GLFW_KEY_KP_DECIMAL  :       330,
    GLFW_KEY_KP_DIVIDE:331,
    GLFW_KEY_KP_MULTIPLY   :     332,
    GLFW_KEY_KP_SUBTRACT   :     333,
    GLFW_KEY_KP_ADD:   334,
    GLFW_KEY_KP_ENTER: 335,
    GLFW_KEY_KP_EQUAL: 336,
    GLFW_KEY_LEFT_SHIFT   :      340,
    GLFW_KEY_LEFT_CONTROL :      341,
    GLFW_KEY_LEFT_ALT: 342,
    GLFW_KEY_LEFT_SUPER  :       343,
    GLFW_KEY_RIGHT_SHIFT  :      344,
    GLFW_KEY_RIGHT_CONTROL :     345,
    GLFW_KEY_RIGHT_ALT:346,
    GLFW_KEY_RIGHT_SUPER :       347,
    GLFW_KEY_MENU:     348,
    GLFW_KEY_LAST:     348,
    GLFW_MOD_SHIFT: 0x0001,
    GLFW_MOD_CONTROL    :     0x0002,
    GLFW_MOD_ALT:   0x0004,
    GLFW_MOD_SUPER: 0x0008,
    GLFW_MOD_CAPS_LOCK   :    0x0010,
    GLFW_MOD_NUM_LOCK :       0x0020,
    GLFW_MOUSE_BUTTON_1  :       0,
    GLFW_MOUSE_BUTTON_2  :       1,
    GLFW_MOUSE_BUTTON_3  :       2,
    GLFW_MOUSE_BUTTON_4  :       3,
    GLFW_MOUSE_BUTTON_5  :       4,
    GLFW_MOUSE_BUTTON_6  :       5,
    GLFW_MOUSE_BUTTON_7  :       6,
    GLFW_MOUSE_BUTTON_8   :      7,
    GLFW_MOUSE_BUTTON_LAST :     7,
    GLFW_MOUSE_BUTTON_LEFT :     0,
    GLFW_MOUSE_BUTTON_RIGHT  :   1,
    GLFW_MOUSE_BUTTON_MIDDLE :   2,
    GLFW_JOYSTICK_1:   0,
    GLFW_JOYSTICK_2:   1,
    GLFW_JOYSTICK_3:   2,
    GLFW_JOYSTICK_4:   3,
    GLFW_JOYSTICK_5:   4,
    GLFW_JOYSTICK_6:   5,
    GLFW_JOYSTICK_7:   6,
    GLFW_JOYSTICK_8:   7,
    GLFW_JOYSTICK_9:   8,
    GLFW_JOYSTICK_10:  9,
    GLFW_JOYSTICK_11:  10,
    GLFW_JOYSTICK_12:  11,
    GLFW_JOYSTICK_13:  12,
    GLFW_JOYSTICK_14:  13,
    GLFW_JOYSTICK_15:  14,
    GLFW_JOYSTICK_16:  15,
    GLFW_JOYSTICK_LAST:15,
    GLFW_GAMEPAD_BUTTON_A:     0,
    GLFW_GAMEPAD_BUTTON_B:     1,
    GLFW_GAMEPAD_BUTTON_X:     2,
    GLFW_GAMEPAD_BUTTON_Y:     3,
    GLFW_GAMEPAD_BUTTON_LEFT_BUMPER  :   4,
    GLFW_GAMEPAD_BUTTON_RIGHT_BUMPER:    5,
    GLFW_GAMEPAD_BUTTON_BACK:  6,
    GLFW_GAMEPAD_BUTTON_START: 7,
    GLFW_GAMEPAD_BUTTON_GUIDE: 8,
    GLFW_GAMEPAD_BUTTON_LEFT_THUMB :     9,
    GLFW_GAMEPAD_BUTTON_RIGHT_THUMB  :   10,
    GLFW_GAMEPAD_BUTTON_DPAD_UP   :      11,
    GLFW_GAMEPAD_BUTTON_DPAD_RIGHT :     12,
    GLFW_GAMEPAD_BUTTON_DPAD_DOWN :      13,
    GLFW_GAMEPAD_BUTTON_DPAD_LEFT  :     14,
    GLFW_GAMEPAD_BUTTON_LAST:  14,
    GLFW_GAMEPAD_BUTTON_CROSS   :    0,
    GLFW_GAMEPAD_BUTTON_CIRCLE  :    1,
    GLFW_GAMEPAD_BUTTON_SQUARE  :    2,
    GLFW_GAMEPAD_BUTTON_TRIANGLE :   3,
    GLFW_GAMEPAD_AXIS_LEFT_X  :      0,
    GLFW_GAMEPAD_AXIS_LEFT_Y  :      1,
    GLFW_GAMEPAD_AXIS_RIGHT_X :      2,
    GLFW_GAMEPAD_AXIS_RIGHT_Y :      3,
    GLFW_GAMEPAD_AXIS_LEFT_TRIGGER:  4,
    GLFW_GAMEPAD_AXIS_RIGHT_TRIGGER :5,
    GLFW_GAMEPAD_AXIS_LAST:5,
    GLFW_NO_ERROR:     0,
    GLFW_NOT_INITIALIZED  :      0x00010001,
    GLFW_NO_CURRENT_CONTEXT :    0x00010002,
    GLFW_INVALID_ENUM: 0x00010003,
    GLFW_INVALID_VALUE:0x00010004,
    GLFW_OUT_OF_MEMORY:0x00010005,
    GLFW_API_UNAVAILABLE   :     0x00010006,
    GLFW_VERSION_UNAVAILABLE :   0x00010007,
    GLFW_PLATFORM_ERROR  :       0x00010008,
    GLFW_FORMAT_UNAVAILABLE :    0x00010009,
    GLFW_NO_WINDOW_CONTEXT :     0x0001000A,
    GLFW_FOCUSED:      0x00020001,
    GLFW_ICONIFIED:    0x00020002,
    GLFW_RESIZABLE:    0x00020003,
    GLFW_VISIBLE:      0x00020004,
    GLFW_DECORATED:    0x00020005,
    GLFW_AUTO_ICONIFY: 0x00020006,
    GLFW_FLOATING:     0x00020007,
    GLFW_MAXIMIZED:    0x00020008,
    GLFW_CENTER_CURSOR:0x00020009,
    GLFW_TRANSPARENT_FRAMEBUFFER :0x0002000A,
    GLFW_HOVERED:      0x0002000B,
    GLFW_FOCUS_ON_SHOW:0x0002000C,
    GLFW_RED_BITS:     0x00021001,
    GLFW_GREEN_BITS:   0x00021002,
    GLFW_BLUE_BITS:    0x00021003,
    GLFW_ALPHA_BITS:   0x00021004,
    GLFW_DEPTH_BITS:   0x00021005,
    GLFW_STENCIL_BITS: 0x00021006,
    GLFW_ACCUM_RED_BITS  :       0x00021007,
    GLFW_ACCUM_GREEN_BITS :      0x00021008,
    GLFW_ACCUM_BLUE_BITS  :      0x00021009,
    GLFW_ACCUM_ALPHA_BITS :      0x0002100A,
    GLFW_AUX_BUFFERS:  0x0002100B,
    GLFW_STEREO:       0x0002100C,
    GLFW_SAMPLES:      0x0002100D,
    GLFW_SRGB_CAPABLE: 0x0002100E,
    GLFW_REFRESH_RATE: 0x0002100F,
    GLFW_DOUBLEBUFFER: 0x00021010,
    GLFW_CLIENT_API:   0x00022001,
    GLFW_CONTEXT_VERSION_MAJOR : 0x00022002,
    GLFW_CONTEXT_VERSION_MINOR : 0x00022003,
    GLFW_CONTEXT_REVISION   :    0x00022004,
    GLFW_CONTEXT_ROBUSTNESS  :   0x00022005,
    GLFW_OPENGL_FORWARD_COMPAT : 0x00022006,
    GLFW_OPENGL_DEBUG_CONTEXT:   0x00022007,
    GLFW_OPENGL_PROFILE    :     0x00022008,
    GLFW_CONTEXT_RELEASE_BEHAVIOR: 0x00022009,
    GLFW_CONTEXT_NO_ERROR    :   0x0002200A,
    GLFW_CONTEXT_CREATION_API :  0x0002200B,
    GLFW_SCALE_TO_MONITOR  :     0x0002200C,
    GLFW_COCOA_RETINA_FRAMEBUFFER: 0x00023001,
    GLFW_COCOA_FRAME_NAME    :     0x00023002,
    GLFW_COCOA_GRAPHICS_SWITCHING: 0x00023003,
    GLFW_X11_CLASS_NAME  :       0x00024001,
    GLFW_X11_INSTANCE_NAME :     0x00024002,
    GLFW_NO_API:   0,
    GLFW_OPENGL_API:   0x00030001,
    GLFW_OPENGL_ES_API:0x00030002,
    GLFW_NO_ROBUSTNESS:         0,
    GLFW_NO_RESET_NOTIFICATION : 0x00031001,
    GLFW_LOSE_CONTEXT_ON_RESET : 0x00031002,
    GLFW_OPENGL_ANY_PROFILE:    0,
    GLFW_OPENGL_CORE_PROFILE :   0x00032001,
    GLFW_OPENGL_COMPAT_PROFILE:  0x00032002,
    GLFW_CURSOR:       0x00033001,
    GLFW_STICKY_KEYS:  0x00033002,
    GLFW_STICKY_MOUSE_BUTTONS:   0x00033003,
    GLFW_LOCK_KEY_MODS:0x00033004,
    GLFW_RAW_MOUSE_MOTION:       0x00033005,
    GLFW_CURSOR_NORMAL:0x00034001,
    GLFW_CURSOR_HIDDEN:0x00034002,
    GLFW_CURSOR_DISABLED:        0x00034003,
    GLFW_ANY_RELEASE_BEHAVIOR:  0,
    GLFW_RELEASE_BEHAVIOR_FLUSH: 0x00035001,
    GLFW_RELEASE_BEHAVIOR_NONE:  0x00035002,
    GLFW_NATIVE_CONTEXT_API:     0x00036001,
    GLFW_EGL_CONTEXT_API:        0x00036002,
    GLFW_OSMESA_CONTEXT_API :    0x00036003,
    GLFW_ARROW_CURSOR: 0x00036001,
    GLFW_IBEAM_CURSOR: 0x00036002,
    GLFW_CROSSHAIR_CURSOR:       0x00036003,
    GLFW_HAND_CURSOR:  0x00036004,
    GLFW_HRESIZE_CURSOR:         0x00036005,
    GLFW_VRESIZE_CURSOR:         0x00036006,
    GLFW_CONNECTED:    0x00040001,
    GLFW_DISCONNECTED: 0x00040002,
    GLFW_JOYSTICK_HAT_BUTTONS:   0x00050001,
    GLFW_COCOA_CHDIR_RESOURCES:  0x00051001,
    GLFW_COCOA_MENUBAR:0x00051002,
    GLFW_DONT_CARE:    -1,
    getMemory,
    getAddress,
    glfwInit,
    glfwTerminate,
    glfwInitHint,
    glfwGetVersion,
    glfwGetVersionString,
    glfwGetError,
    glfwSetErrorCallback,
    glfwGetMonitors,
    glfwGetPrimaryMonitor,
    glfwGetMonitorPos,
    glfwGetMonitorWorkarea,
    glfwGetMonitorPhysicalSize,
    glfwGetMonitorContentScale,
    glfwGetMonitorName,
    glfwSetMonitorUserPointer,
    glfwGetMonitorUserPointer,
    glfwSetMonitorCallback,
    glfwGetVideoModes,
    glfwGetVideoMode,
    glfwSetGamma,
    glfwGetGammaRamp,
    glfwSetGammaRamp,
    glfwDefaultWindowHints,
    glfwWindowHint,
    glfwWindowHintString,
    glfwCreateWindow,
    glfwDestroyWindow,
    glfwWindowShouldClose,
    glfwSetWindowShouldClose,
    glfwSetWindowTitle,
    glfwSetWindowIcon,
    glfwGetWindowPos,
    glfwSetWindowPos,
    glfwGetWindowSize,
    glfwSetWindowSizeLimits,
    glfwSetWindowAspectRatio,
    glfwSetWindowSize,
    glfwGetFramebufferSize,
    glfwGetWindowFrameSize,
    glfwGetWindowContentScale,
    glfwGetWindowOpacity,
    glfwSetWindowOpacity,
    glfwIconifyWindow,
    glfwRestoreWindow,
    glfwMaximizeWindow,
    glfwShowWindow,
    glfwHideWindow,
    glfwFocusWindow,
    glfwRequestWindowAttention,
    glfwGetWindowMonitor,
    glfwSetWindowMonitor,
    glfwGetWindowAttrib,
    glfwSetWindowAttrib,
    glfwSetWindowUserPointer,
    glfwGetWindowUserPointer,
    glfwSetWindowPosCallback,
    glfwSetWindowSizeCallback,
    glfwSetWindowCloseCallback,
    glfwSetWindowRefreshCallback,
    glfwSetWindowFocusCallback,
    glfwSetWindowIconifyCallback,
    glfwSetWindowMaximizeCallback,
    glfwSetFramebufferSizeCallback,
    glfwSetWindowContentScaleCallback,
    glfwPollEvents,
    glfwWaitEvents,
    glfwWaitEventsTimeout,
    glfwPostEmptyEvent,
    glfwGetInputMode,
    glfwSetInputMode,
    glfwRawMouseMotionSupported,
    glfwGetKeyName,
    glfwGetKeyScancode,
    glfwGetKey,
    glfwGetMouseButton,
    glfwGetCursorPos,
    glfwSetCursorPos,
    glfwCreateCursor,
    glfwCreateStandardCursor,
    glfwDestroyCursor,
    glfwSetCursor,
    glfwSetKeyCallback,
    glfwSetCharCallback,
    glfwSetCharModsCallback,
    glfwSetMouseButtonCallback,
    glfwSetCursorPosCallback,
    glfwSetCursorEnterCallback,
    glfwSetScrollCallback,
    glfwSetDropCallback,
    glfwJoystickPresent,
    glfwGetJoystickAxes,
    glfwGetJoystickButtons,
    glfwGetJoystickHats,
    glfwGetJoystickName,
    glfwGetJoystickGUID,
    glfwSetJoystickUserPointer,
    glfwGetJoystickUserPointer,
    glfwJoystickIsGamepad,
    glfwSetJoystickCallback,
    glfwUpdateGamepadMappings,
    glfwGetGamepadName,
    glfwGetGamepadState,
    glfwSetClipboardString,
    glfwGetClipboardString,
    glfwGetTime,
    glfwSetTime,
    glfwGetTimerValue,
    glfwGetTimerFrequency,
    glfwMakeContextCurrent,
    glfwGetCurrentContext,
    glfwSwapBuffers,
    glfwSwapInterval,
    glfwExtensionSupported,
    glfwGetProcAddress,
    glfwVulkanSupported,
    glfwGetRequiredInstanceExtensions,
    
};
