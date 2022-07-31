### C++ on Windows

- IDEs: Visual studio code, Microsoft visual studio,CodeLite,etc.

- Compilers (Follow the hardware): Mingw,Clang llvm,Msvc

### Installation

- get more detail about c++ compiler: [c++ compileer](https://en.cppreference.com/w/cpp/compiler_support)

**install Mingw,Clang llvm**

[get mingw64](https://winlibs.com/)

- Add the compiler's directory where store the compilers ex:`C:\mingw64\bin` into your `Path` system-variables or user-variables. gcc, or clang is already in mingw64

	System Properties -> Environement Variables

- To test your installation, open the terminal Command Prompt and type: `g++ --verson` or `clang++ --version`

**install Msvc**

[install-visual-studio](https://docs.microsoft.com/en-us/visualstudio/install/install-visual-studio?view=vs-2022)

	[install visual studio] -> [Crack it] -> [Open it] -> [Desktop development with C++]

Msvc is already there.

- check your installation on `Command Prompt for VS 2019`: `cl.exe`

### Configuration

- install visual studio code [Download Visual Studio Code](https://code.visualstudio.com/download)

- install C++ extenstion on visual studio code

- Compile .cpp file on visual studio code `Terminal -> Configure Tasks -> Select the compilers`

- create a template cpp and configure in `.vscode/tasks.json`, check [hwo to use C++ 20 in g++](https://stackoverflow.com/questions/66975491/how-to-use-c-20-in-g)

		{
			"version":"2.0.0",
			"tasks":[
			{
				"type": "cppbuild",
				"label": "C/C++: g++.exe build active file",
				"command": "C:\\mingw64\\bin\\g++.exe",
				"args":[
					"-g",
					"${file}",
					"-o",
					"${fileDirname}\\${fileBasenameNoExtension}.exe"
				],
				"options":{
					"cwd":"${fileDirname}"
				},
				"problemMatcher":[
					"$gcc"
				],
				"group":"build",
				"detail": "compiler: C:\\mingw64\\bin\\g++.exe"
			}
			]
		}

edit to:

		{
			"version":"2.0.0",
			"tasks":[
			{
				"type": "cppbuild",
				"label": "Build with GCC 11.2.0",
				"command": "C:\\mingw64\\bin\\g++.exe",
				"args":[
					"-g",
					"-std=c++20",
					"${file}",
					"-o",
					"${fileDirname}\\${fileBasenameNoExtension}.exe"
				],
				"options":{
					"cwd":"${fileDirname}"
				},
				"problemMatcher":[
					"$gcc"
				],
				"group":"build",
				"detail": "compiler: C:\\mingw64\\bin\\g++.exe"
			}
			]
		}

you can custom args-keyword, build all cpp file in the project `"${workspaceFolder}\\*.cpp"` give the specific name `"${fileDirname}\\$run.exe"`:

		{
			"version":"2.0.0",
			"tasks":[
			{
				"type": "cppbuild",
				"label": "Build with GCC 11.2.0",
				"command": "C:\\mingw64\\bin\\g++.exe",
				"args":[
					"-g",
					"-std=c++20",
					"${workspaceFolder}\\*.cpp",
					"-o",
					"${fileDirname}\\$run.exe"
				],
				"options":{
					"cwd":"${fileDirname}"
				},
				"problemMatcher":[
					"$gcc"
				],
				"group":"build",
				"detail": "compiler: C:\\mingw64\\bin\\g++.exe"
			}
			]
		}

or you can choice the other compiler `"command": "C:\\mingw64\\bin\\clang++.exe",`:

		{
			"version":"2.0.0",
			"tasks":[
			{
				"type": "cppbuild",
				"label": "Build with Clang 12.0.1",
				"command": "C:\\mingw64\\bin\\clang++.exe",
				"args":[
					"-g",
					"-std=c++20",
					"${workspaceFolder}\\*.cpp",
					"-o",
					"${fileDirname}\\$run.exe"
				],
				"options":{
					"cwd":"${fileDirname}"
				},
				"problemMatcher":[
					"$gcc"
				],
				"group":"build",
				"detail": "compiler: C:\\mingw64\\bin\\g++.exe"
			}
			]
		}

for microsoft visual studio compiler (MSVC) `cl.exe` you can compile your code in `Power Shell Visual Studio` or `Command Prompt Visual Studio`, or open visual studio code with command `.code` on them, the visual studio compile will auto add-in.