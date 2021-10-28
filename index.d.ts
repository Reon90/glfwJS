interface GLFWmonitor {}
interface GLFWwindow {}
interface GLFWcursor {}
interface GLFWvidmode {
  width: number;
  height: number;
  redBits: number;
  greenBits: number;
  blueBits: number;
  refreshRate: number;
}
interface GLFWgammaramp {
  red: number;
  green: number;
  blue: number;
  size: number;
}
interface GLFWimage {
  width: number;
  height: number;
  pixels: string;
}
interface GLFWgamepadstate {
  buttons: string[];
  axes: bigint[];
}

interface GLFWglproc {
  (): void;
}
interface GLFWvkproc {
  (): void;
}
interface GLFWerrorfun {
  (a0: number, a1: string): void;
}
interface GLFWwindowposfun {
  (a0: GLFWwindow, a1: number, a2: number): void;
}
interface GLFWwindowsizefun {
  (a0: GLFWwindow, a1: number, a2: number): void;
}
interface GLFWwindowclosefun {
  (a0: GLFWwindow): void;
}
interface GLFWwindowrefreshfun {
  (a0: GLFWwindow): void;
}
interface GLFWwindowfocusfun {
  (a0: GLFWwindow, a1: number): void;
}
interface GLFWwindowiconifyfun {
  (a0: GLFWwindow, a1: number): void;
}
interface GLFWwindowmaximizefun {
  (a0: GLFWwindow, a1: number): void;
}
interface GLFWframebuffersizefun {
  (a0: GLFWwindow, a1: number, a2: number): void;
}
interface GLFWwindowcontentscalefun {
  (a0: GLFWwindow, a1: bigint, a2: bigint): void;
}
interface GLFWmousebuttonfun {
  (a0: GLFWwindow, a1: number, a2: number, a3: number): void;
}
interface GLFWcursorposfun {
  (a0: GLFWwindow, a1: bigint, a2: bigint): void;
}
interface GLFWcursorenterfun {
  (a0: GLFWwindow, a1: number): void;
}
interface GLFWscrollfun {
  (a0: GLFWwindow, a1: bigint, a2: bigint): void;
}
interface GLFWkeyfun {
  (a0: GLFWwindow, a1: number, a2: number, a3: number, a4: number): void;
}
interface GLFWcharfun {
  (a0: GLFWwindow, a1: number): void;
}
interface GLFWcharmodsfun {
  (a0: GLFWwindow, a1: number, a2: number): void;
}
interface GLFWdropfun {
  (a0: GLFWwindow, a1: number, a2: string): void;
}
interface GLFWmonitorfun {
  (a0: GLFWmonitor, a1: number): void;
}
interface GLFWjoystickfun {
  (a0: number, a1: number): void;
}

export function glfwInit(): number;
export function glfwTerminate(): void;
export function glfwInitHint(hint: number, value: number): void;
export function glfwGetVersion(major: number, minor: number, rev: number): void;
export function glfwGetVersionString(): string;
export function glfwGetError(description: string): number;
export function glfwSetErrorCallback(callback: GLFWerrorfun): GLFWerrorfun;
export function glfwGetMonitors(count: number): GLFWmonitor;
export function glfwGetPrimaryMonitor(): GLFWmonitor;
export function glfwGetMonitorPos(
  monitor: GLFWmonitor,
  xpos: number,
  ypos: number
): void;
export function glfwGetMonitorWorkarea(
  monitor: GLFWmonitor,
  xpos: number,
  ypos: number,
  width: number,
  height: number
): void;
export function glfwGetMonitorPhysicalSize(
  monitor: GLFWmonitor,
  widthMM: number,
  heightMM: number
): void;
export function glfwGetMonitorContentScale(
  monitor: GLFWmonitor,
  xscale: bigint,
  yscale: bigint
): void;
export function glfwGetMonitorName(monitor: GLFWmonitor): string;
export function glfwSetMonitorUserPointer(
  monitor: GLFWmonitor,
  pointer: void
): void;
export function glfwGetMonitorUserPointer(monitor: GLFWmonitor): void;
export function glfwSetMonitorCallback(
  callback: GLFWmonitorfun
): GLFWmonitorfun;
export function glfwGetVideoModes(
  monitor: GLFWmonitor,
  count: number
): GLFWvidmode;
export function glfwGetVideoMode(monitor: GLFWmonitor): GLFWvidmode;
export function glfwSetGamma(monitor: GLFWmonitor, gamma: bigint): void;
export function glfwGetGammaRamp(monitor: GLFWmonitor): GLFWgammaramp;
export function glfwSetGammaRamp(
  monitor: GLFWmonitor,
  ramp: GLFWgammaramp
): void;
export function glfwDefaultWindowHints(): void;
export function glfwWindowHint(hint: number, value: number): void;
export function glfwWindowHintString(hint: number, value: string): void;
export function glfwCreateWindow(
  width: number,
  height: number,
  title: string,
  monitor: GLFWmonitor | null,
  share: GLFWwindow | null
): GLFWwindow;
export function glfwDestroyWindow(window: GLFWwindow): void;
export function glfwWindowShouldClose(window: GLFWwindow): number;
export function glfwSetWindowShouldClose(
  window: GLFWwindow,
  value: number
): void;
export function glfwSetWindowTitle(window: GLFWwindow, title: string): void;
export function glfwSetWindowIcon(
  window: GLFWwindow,
  count: number,
  images: GLFWimage
): void;
export function glfwGetWindowPos(
  window: GLFWwindow,
  xpos: number,
  ypos: number
): void;
export function glfwSetWindowPos(
  window: GLFWwindow,
  xpos: number,
  ypos: number
): void;
export function glfwGetWindowSize(
  window: GLFWwindow,
  width: number,
  height: number
): void;
export function glfwSetWindowSizeLimits(
  window: GLFWwindow,
  minwidth: number,
  minheight: number,
  maxwidth: number,
  maxheight: number
): void;
export function glfwSetWindowAspectRatio(
  window: GLFWwindow,
  numer: number,
  denom: number
): void;
export function glfwSetWindowSize(
  window: GLFWwindow,
  width: number,
  height: number
): void;
export function glfwGetFramebufferSize(
  window: GLFWwindow,
  width: number,
  height: number
): void;
export function glfwGetWindowFrameSize(
  window: GLFWwindow,
  left: number,
  top: number,
  right: number,
  bottom: number
): void;
export function glfwGetWindowContentScale(
  window: GLFWwindow,
  xscale: bigint,
  yscale: bigint
): void;
export function glfwGetWindowOpacity(window: GLFWwindow): bigint;
export function glfwSetWindowOpacity(window: GLFWwindow, opacity: bigint): void;
export function glfwIconifyWindow(window: GLFWwindow): void;
export function glfwRestoreWindow(window: GLFWwindow): void;
export function glfwMaximizeWindow(window: GLFWwindow): void;
export function glfwShowWindow(window: GLFWwindow): void;
export function glfwHideWindow(window: GLFWwindow): void;
export function glfwFocusWindow(window: GLFWwindow): void;
export function glfwRequestWindowAttention(window: GLFWwindow): void;
export function glfwGetWindowMonitor(window: GLFWwindow): GLFWmonitor;
export function glfwSetWindowMonitor(
  window: GLFWwindow,
  monitor: GLFWmonitor,
  xpos: number,
  ypos: number,
  width: number,
  height: number,
  refreshRate: number
): void;
export function glfwGetWindowAttrib(window: GLFWwindow, attrib: number): number;
export function glfwSetWindowAttrib(
  window: GLFWwindow,
  attrib: number,
  value: number
): void;
export function glfwSetWindowUserPointer(
  window: GLFWwindow,
  pointer: void
): void;
export function glfwGetWindowUserPointer(window: GLFWwindow): void;
export function glfwSetWindowPosCallback(
  window: GLFWwindow,
  callback: GLFWwindowposfun
): GLFWwindowposfun;
export function glfwSetWindowSizeCallback(
  window: GLFWwindow,
  callback: GLFWwindowsizefun
): GLFWwindowsizefun;
export function glfwSetWindowCloseCallback(
  window: GLFWwindow,
  callback: GLFWwindowclosefun
): GLFWwindowclosefun;
export function glfwSetWindowRefreshCallback(
  window: GLFWwindow,
  callback: GLFWwindowrefreshfun
): GLFWwindowrefreshfun;
export function glfwSetWindowFocusCallback(
  window: GLFWwindow,
  callback: GLFWwindowfocusfun
): GLFWwindowfocusfun;
export function glfwSetWindowIconifyCallback(
  window: GLFWwindow,
  callback: GLFWwindowiconifyfun
): GLFWwindowiconifyfun;
export function glfwSetWindowMaximizeCallback(
  window: GLFWwindow,
  callback: GLFWwindowmaximizefun
): GLFWwindowmaximizefun;
export function glfwSetFramebufferSizeCallback(
  window: GLFWwindow,
  callback: GLFWframebuffersizefun
): GLFWframebuffersizefun;
export function glfwSetWindowContentScaleCallback(
  window: GLFWwindow,
  callback: GLFWwindowcontentscalefun
): GLFWwindowcontentscalefun;
export function glfwPollEvents(): void;
export function glfwWaitEvents(): void;
export function glfwWaitEventsTimeout(timeout: bigint): void;
export function glfwPostEmptyEvent(): void;
export function glfwGetInputMode(window: GLFWwindow, mode: number): number;
export function glfwSetInputMode(
  window: GLFWwindow,
  mode: number,
  value: number
): void;
export function glfwRawMouseMotionSupported(): number;
export function glfwGetKeyName(key: number, scancode: number): string;
export function glfwGetKeyScancode(key: number): number;
export function glfwGetKey(window: GLFWwindow, key: number): number;
export function glfwGetMouseButton(window: GLFWwindow, button: number): number;
export function glfwGetCursorPos(
  window: GLFWwindow,
  xpos: bigint,
  ypos: bigint
): void;
export function glfwSetCursorPos(
  window: GLFWwindow,
  xpos: bigint,
  ypos: bigint
): void;
export function glfwCreateCursor(
  image: GLFWimage,
  xhot: number,
  yhot: number
): GLFWcursor;
export function glfwCreateStandardCursor(shape: number): GLFWcursor;
export function glfwDestroyCursor(cursor: GLFWcursor): void;
export function glfwSetCursor(window: GLFWwindow, cursor: GLFWcursor): void;
export function glfwSetKeyCallback(
  window: GLFWwindow,
  callback: GLFWkeyfun
): GLFWkeyfun;
export function glfwSetCharCallback(
  window: GLFWwindow,
  callback: GLFWcharfun
): GLFWcharfun;
export function glfwSetCharModsCallback(
  window: GLFWwindow,
  callback: GLFWcharmodsfun
): GLFWcharmodsfun;
export function glfwSetMouseButtonCallback(
  window: GLFWwindow,
  callback: GLFWmousebuttonfun
): GLFWmousebuttonfun;
export function glfwSetCursorPosCallback(
  window: GLFWwindow,
  callback: GLFWcursorposfun
): GLFWcursorposfun;
export function glfwSetCursorEnterCallback(
  window: GLFWwindow,
  callback: GLFWcursorenterfun
): GLFWcursorenterfun;
export function glfwSetScrollCallback(
  window: GLFWwindow,
  callback: GLFWscrollfun
): GLFWscrollfun;
export function glfwSetDropCallback(
  window: GLFWwindow,
  callback: GLFWdropfun
): GLFWdropfun;
export function glfwJoystickPresent(jid: number): number;
export function glfwGetJoystickAxes(jid: number, count: number): bigint;
export function glfwGetJoystickButtons(jid: number, count: number): string;
export function glfwGetJoystickHats(jid: number, count: number): string;
export function glfwGetJoystickName(jid: number): string;
export function glfwGetJoystickGUID(jid: number): string;
export function glfwSetJoystickUserPointer(jid: number, pointer: void): void;
export function glfwGetJoystickUserPointer(jid: number): void;
export function glfwJoystickIsGamepad(jid: number): number;
export function glfwSetJoystickCallback(
  callback: GLFWjoystickfun
): GLFWjoystickfun;
export function glfwUpdateGamepadMappings(string: string): number;
export function glfwGetGamepadName(jid: number): string;
export function glfwGetGamepadState(
  jid: number,
  state: GLFWgamepadstate
): number;
export function glfwSetClipboardString(
  window: GLFWwindow,
  string: string
): void;
export function glfwGetClipboardString(window: GLFWwindow): string;
export function glfwGetTime(): bigint;
export function glfwSetTime(time: bigint): void;
export function glfwGetTimerValue(): number;
export function glfwGetTimerFrequency(): number;
export function glfwMakeContextCurrent(window: GLFWwindow): void;
export function glfwGetCurrentContext(): GLFWwindow;
export function glfwSwapBuffers(window: GLFWwindow): void;
export function glfwSwapInterval(interval: number): void;
export function glfwExtensionSupported(extension: string): number;
export function glfwGetProcAddress(procname: string): GLFWglproc;
export function glfwVulkanSupported(): number;
export function glfwGetRequiredInstanceExtensions(count: number): string;
export * from './defines'