# Sign-Up Application

This project is a Sign-Up application developed using C++. It allows users to sign up and manage their accounts efficiently. 

## Table of Contents 
- [Introduction](#introduction)
- [Features](#features) 
- [Dependencies](#dependencies)
- [Building and Running](#building-and-running) 
- [Unit Testing](#unit-testing) 
- [Documentation](#documentation) 
- [Contributing](#contributing) 
- [License](#license)  

## Introduction  

The Sign-Up application is designed to provide a user-friendly interface for signing up and managing user accounts. It utilizes Object-Oriented Programming (OOP) principles to ensure code modularity, reusability, and maintainability. The project also includes comprehensive unit tests to validate the functionality of classes and functions.  

## Features  

- User-friendly interface for signing up and managing accounts. 
- Object-Oriented design for better code organization and maintainability. 
- Dynamic library for reusable components. 
- Logging functionality using Boost.Log for improved debugging and monitoring. 

## Dependencies  

- CMake (minimum version 3.22) 
- Doxygen (for generating documentation) 
- Google Test (for unit testing) 
- Boost.Log (for logging)  

## Building and Running  

`To build the Sign-Up application, follow these steps:  1. Clone the repository:`

```bash
git clone https://github.com/your-username/sign-up-application.git
```

1. Navigate to the project directory:

```BASH
cd sign-up-application
```
    
2. Create a build directory:
    
```BASH
mkdir build && cd build
```

3. Generate the build files using CMake:
    
```BASH
cmake ..
```
    
4. Build the application:
    
```BASH
cmake --build .
```
    
6. Run the application:
    
```BASH
./Sign_Up
```

## Unit Testing

In this project, I've attempted to integrate Google Test (gtest) for conducting unit tests on the shared library. Please note that the included tests are just examples and not exhaustive. They serve as a starting point for implementing comprehensive unit tests to ensure the correctness of the codebase. 

To run the unit tests, navigate to the build directory and execute the following command:

```bash
ctest
```

## Documentation

I have utilized Doxygen for generating documentation for this project. The documentation includes detailed information about classes, functions, and their usage. Additionally, I have generated a class diagram to provide a visual representation of the project's structure.

To generate the documentation, follow these steps:

1. Install Doxygen on your system if you haven't already.
    
2. Navigate to the Documentation directory.
    
3. Run the following command:
```bash
doxygen Doxyfile
```

4. Once the command completes, you can find the generated HTML documentation in the `/build/Doxygen_Documentation/html` directory. Open the `index.html` files in your browser to explore the documentation and view the class diagram.

## Contributing

Contributions to the Sign-Up application are welcome! If you'd like to contribute, please follow these steps:

1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Make your changes.
4. Commit your changes (`git commit -am 'Add new feature'`).
5. Push to the branch (`git push origin feature-branch`).
6. Create a new Pull Request.

## License

This project is licensed under the MIT License. See the LICENSE file for details.

Feel free to modify or expand upon this README to better suit your project's specific needs. Once you've added this README to your GitHub repository, users will have clear instructions on how to build, run, and contribute to your project.
