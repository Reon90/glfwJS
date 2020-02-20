# glfwJS

The N-API bindings for [GLFW](https://www.glfw.org/) multi-platform library for OpenGL, OpenGL ES and Vulkan development on the desktop. It provides a simple API for creating windows, contexts and surfaces, receiving input and events.

## Example
```js
if (!glfwInit()) {
    process.exit(1);
}

const window = glfwCreateWindow(kWidth, kHeight, "Simple example", null, null);
if (!window) {
    glfwTerminate();
    process.exit(1);
}
glfwMakeContextCurrent(window);

glfwSwapInterval(1);
glfwSetKeyCallback(window, key_callback);

function drawLoop() {
    if (!glfwWindowShouldClose(window)) {
        setTimeout(drawLoop, 0);
    } else {
        glfwDestroyWindow(window);
        glfwTerminate();
        process.exit(0);
    }

    glfwSwapBuffers(window);
    glfwPollEvents();
}
drawLoop();
```
