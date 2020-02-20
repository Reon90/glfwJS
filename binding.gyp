{
  "variables": {
    "glfw": "<@(module_root_dir)/libs"
  },
  "targets": [
    {
      "target_name": "glfwJS",
      "sources": [ "generated/index.c" ],
      "include_dirs": [
        "<@(module_root_dir)",
      ],
      "conditions": [
       [
	  "OS=='linux'",
	  {
		"libraries": [
		  "-Wl,-rpath=\'$${ORIGIN}/../../../libs/linux'",
		  "<(glfw)/linux/libglfw.so.3"
		]
	  }
       ],
       [
          "OS=='mac'",
          {
            "xcode_settings": {
              "OTHER_LDFLAGS": [
                "<(glfw)/darwin/libglfw.3.dylib",
                "-Wl,-rpath -Wl,@loader_path/../../../libs"
              ]
            }
          }
        ]
      ]
    }
  ]
}
