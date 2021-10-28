const glfw = require('../index');
Object.assign(global, glfw);

function error_callback() {
    console.error(arguments);
}

function key_callback(window, key, scancode, action, mods) {
    if (key == GLFW_KEY_ESCAPE && action == 1) {
        glfwSetWindowShouldClose(window, GL_TRUE);
    }
}

const kWidth = 1280;
const kHeight = 720;

let window;
glfwSetErrorCallback(error_callback);
if (!glfwInit()) {
    process.exit(1);
}

window = glfwCreateWindow(kWidth, kHeight, "Simple example", null, null);

if (!window) {
    glfwTerminate();
    process.exit(1);
}

glfwMakeContextCurrent(window);

let width = new Int32Array([0]);
let height = new Int32Array([0]);

const widthP = getAddress(width.buffer);
const heightP = getAddress(height.buffer);

glfwGetFramebufferSize(window, widthP, heightP);
let devicePixelRatio = width / kWidth;
console.log("devicePixelRatio", devicePixelRatio);

glfwSwapInterval(1);
glfwSetKeyCallback(window, key_callback);

function drawLoop() {
    if (!glfwWindowShouldClose(window)) {
        setImmediate(drawLoop);
    } else {
        glfwDestroyWindow(window);
        glfwTerminate();
        process.exit(0);
    }

    glfwSwapBuffers(window);
    glfwPollEvents();
}
drawLoop();
