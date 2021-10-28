const { platform } = process;
const defines = require('./defines');
const glfw = require(`../build/${platform}/Release/glfwJS.node`);

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
function glfwInitHint(ra1, ra2) {
    return glfw._glfwInitHint(ra1, ra2);
}
function glfwGetVersion(ra1, ra2, ra3) {
    return glfw._glfwGetVersion(ra1, ra2, ra3);
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
function glfwGetMonitorPos(ra1, ra2, ra3) {
    return glfw._glfwGetMonitorPos(ra1, ra2, ra3);
}
function glfwGetMonitorWorkarea(ra1, ra2, ra3, ra4, ra5) {
    return glfw._glfwGetMonitorWorkarea(ra1, ra2, ra3, ra4, ra5);
}
function glfwGetMonitorPhysicalSize(ra1, ra2, ra3) {
    return glfw._glfwGetMonitorPhysicalSize(ra1, ra2, ra3);
}
function glfwGetMonitorContentScale(ra1, ra2, ra3) {
    return glfw._glfwGetMonitorContentScale(ra1, ra2, ra3);
}
function glfwGetMonitorName(ra1) {
    return glfw._glfwGetMonitorName(ra1);
}
function glfwSetMonitorUserPointer(ra1, ra2) {
    return glfw._glfwSetMonitorUserPointer(ra1, ra2);
}
function glfwGetMonitorUserPointer(ra1) {
    return glfw._glfwGetMonitorUserPointer(ra1);
}
function glfwSetMonitorCallback(ra1) {
    return glfw._glfwSetMonitorCallback(ra1);
}
function glfwGetVideoModes(ra1, ra2) {
    return glfw._glfwGetVideoModes(ra1, ra2);
}
function glfwGetVideoMode(ra1) {
    return glfw._glfwGetVideoMode(ra1);
}
function glfwSetGamma(ra1, ra2) {
    return glfw._glfwSetGamma(ra1, ra2);
}
function glfwGetGammaRamp(ra1) {
    return glfw._glfwGetGammaRamp(ra1);
}
function glfwSetGammaRamp(ra1, ra2) {
    return glfw._glfwSetGammaRamp(ra1, ra2);
}
function glfwDefaultWindowHints() {
    return glfw._glfwDefaultWindowHints();
}
function glfwWindowHint(ra1, ra2) {
    return glfw._glfwWindowHint(ra1, ra2);
}
function glfwWindowHintString(ra1, ra2) {
    return glfw._glfwWindowHintString(ra1, ra2);
}
function glfwCreateWindow(ra1, ra2, ra3, ra4, ra5) {
    return glfw._glfwCreateWindow(ra1, ra2, ra3, ra4, ra5);
}
function glfwDestroyWindow(ra1) {
    return glfw._glfwDestroyWindow(ra1);
}
function glfwWindowShouldClose(ra1) {
    return glfw._glfwWindowShouldClose(ra1);
}
function glfwSetWindowShouldClose(ra1, ra2) {
    return glfw._glfwSetWindowShouldClose(ra1, ra2);
}
function glfwSetWindowTitle(ra1, ra2) {
    return glfw._glfwSetWindowTitle(ra1, ra2);
}
function glfwSetWindowIcon(ra1, ra2, ra3) {
    return glfw._glfwSetWindowIcon(ra1, ra2, ra3);
}
function glfwGetWindowPos(ra1, ra2, ra3) {
    return glfw._glfwGetWindowPos(ra1, ra2, ra3);
}
function glfwSetWindowPos(ra1, ra2, ra3) {
    return glfw._glfwSetWindowPos(ra1, ra2, ra3);
}
function glfwGetWindowSize(ra1, ra2, ra3) {
    return glfw._glfwGetWindowSize(ra1, ra2, ra3);
}
function glfwSetWindowSizeLimits(ra1, ra2, ra3, ra4, ra5) {
    return glfw._glfwSetWindowSizeLimits(ra1, ra2, ra3, ra4, ra5);
}
function glfwSetWindowAspectRatio(ra1, ra2, ra3) {
    return glfw._glfwSetWindowAspectRatio(ra1, ra2, ra3);
}
function glfwSetWindowSize(ra1, ra2, ra3) {
    return glfw._glfwSetWindowSize(ra1, ra2, ra3);
}
function glfwGetFramebufferSize(ra1, ra2, ra3) {
    return glfw._glfwGetFramebufferSize(ra1, ra2, ra3);
}
function glfwGetWindowFrameSize(ra1, ra2, ra3, ra4, ra5) {
    return glfw._glfwGetWindowFrameSize(ra1, ra2, ra3, ra4, ra5);
}
function glfwGetWindowContentScale(ra1, ra2, ra3) {
    return glfw._glfwGetWindowContentScale(ra1, ra2, ra3);
}
function glfwGetWindowOpacity(ra1) {
    return glfw._glfwGetWindowOpacity(ra1);
}
function glfwSetWindowOpacity(ra1, ra2) {
    return glfw._glfwSetWindowOpacity(ra1, ra2);
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
function glfwSetWindowMonitor(ra1, ra2, ra3, ra4, ra5, ra6, ra7) {
    return glfw._glfwSetWindowMonitor(ra1, ra2, ra3, ra4, ra5, ra6, ra7);
}
function glfwGetWindowAttrib(ra1, ra2) {
    return glfw._glfwGetWindowAttrib(ra1, ra2);
}
function glfwSetWindowAttrib(ra1, ra2, ra3) {
    return glfw._glfwSetWindowAttrib(ra1, ra2, ra3);
}
function glfwSetWindowUserPointer(ra1, ra2) {
    return glfw._glfwSetWindowUserPointer(ra1, ra2);
}
function glfwGetWindowUserPointer(ra1) {
    return glfw._glfwGetWindowUserPointer(ra1);
}
function glfwSetWindowPosCallback(ra1, ra2) {
    return glfw._glfwSetWindowPosCallback(ra1, ra2);
}
function glfwSetWindowSizeCallback(ra1, ra2) {
    return glfw._glfwSetWindowSizeCallback(ra1, ra2);
}
function glfwSetWindowCloseCallback(ra1, ra2) {
    return glfw._glfwSetWindowCloseCallback(ra1, ra2);
}
function glfwSetWindowRefreshCallback(ra1, ra2) {
    return glfw._glfwSetWindowRefreshCallback(ra1, ra2);
}
function glfwSetWindowFocusCallback(ra1, ra2) {
    return glfw._glfwSetWindowFocusCallback(ra1, ra2);
}
function glfwSetWindowIconifyCallback(ra1, ra2) {
    return glfw._glfwSetWindowIconifyCallback(ra1, ra2);
}
function glfwSetWindowMaximizeCallback(ra1, ra2) {
    return glfw._glfwSetWindowMaximizeCallback(ra1, ra2);
}
function glfwSetFramebufferSizeCallback(ra1, ra2) {
    return glfw._glfwSetFramebufferSizeCallback(ra1, ra2);
}
function glfwSetWindowContentScaleCallback(ra1, ra2) {
    return glfw._glfwSetWindowContentScaleCallback(ra1, ra2);
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
function glfwGetInputMode(ra1, ra2) {
    return glfw._glfwGetInputMode(ra1, ra2);
}
function glfwSetInputMode(ra1, ra2, ra3) {
    return glfw._glfwSetInputMode(ra1, ra2, ra3);
}
function glfwRawMouseMotionSupported() {
    return glfw._glfwRawMouseMotionSupported();
}
function glfwGetKeyName(ra1, ra2) {
    return glfw._glfwGetKeyName(ra1, ra2);
}
function glfwGetKeyScancode(ra1) {
    return glfw._glfwGetKeyScancode(ra1);
}
function glfwGetKey(ra1, ra2) {
    return glfw._glfwGetKey(ra1, ra2);
}
function glfwGetMouseButton(ra1, ra2) {
    return glfw._glfwGetMouseButton(ra1, ra2);
}
function glfwGetCursorPos(ra1, ra2, ra3) {
    return glfw._glfwGetCursorPos(ra1, ra2, ra3);
}
function glfwSetCursorPos(ra1, ra2, ra3) {
    return glfw._glfwSetCursorPos(ra1, ra2, ra3);
}
function glfwCreateCursor(ra1, ra2, ra3) {
    return glfw._glfwCreateCursor(ra1, ra2, ra3);
}
function glfwCreateStandardCursor(ra1) {
    return glfw._glfwCreateStandardCursor(ra1);
}
function glfwDestroyCursor(ra1) {
    return glfw._glfwDestroyCursor(ra1);
}
function glfwSetCursor(ra1, ra2) {
    return glfw._glfwSetCursor(ra1, ra2);
}
function glfwSetKeyCallback(ra1, ra2) {
    return glfw._glfwSetKeyCallback(ra1, ra2);
}
function glfwSetCharCallback(ra1, ra2) {
    return glfw._glfwSetCharCallback(ra1, ra2);
}
function glfwSetCharModsCallback(ra1, ra2) {
    return glfw._glfwSetCharModsCallback(ra1, ra2);
}
function glfwSetMouseButtonCallback(ra1, ra2) {
    return glfw._glfwSetMouseButtonCallback(ra1, ra2);
}
function glfwSetCursorPosCallback(ra1, ra2) {
    return glfw._glfwSetCursorPosCallback(ra1, ra2);
}
function glfwSetCursorEnterCallback(ra1, ra2) {
    return glfw._glfwSetCursorEnterCallback(ra1, ra2);
}
function glfwSetScrollCallback(ra1, ra2) {
    return glfw._glfwSetScrollCallback(ra1, ra2);
}
function glfwSetDropCallback(ra1, ra2) {
    return glfw._glfwSetDropCallback(ra1, ra2);
}
function glfwJoystickPresent(ra1) {
    return glfw._glfwJoystickPresent(ra1);
}
function glfwGetJoystickAxes(ra1, ra2) {
    return glfw._glfwGetJoystickAxes(ra1, ra2);
}
function glfwGetJoystickButtons(ra1, ra2) {
    return glfw._glfwGetJoystickButtons(ra1, ra2);
}
function glfwGetJoystickHats(ra1, ra2) {
    return glfw._glfwGetJoystickHats(ra1, ra2);
}
function glfwGetJoystickName(ra1) {
    return glfw._glfwGetJoystickName(ra1);
}
function glfwGetJoystickGUID(ra1) {
    return glfw._glfwGetJoystickGUID(ra1);
}
function glfwSetJoystickUserPointer(ra1, ra2) {
    return glfw._glfwSetJoystickUserPointer(ra1, ra2);
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
function glfwGetGamepadState(ra1, ra2) {
    return glfw._glfwGetGamepadState(ra1, ra2);
}
function glfwSetClipboardString(ra1, ra2) {
    return glfw._glfwSetClipboardString(ra1, ra2);
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
    ...defines,
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
