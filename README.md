# Native Module Sample

This repository contains a simple React Native module for testing that React Native for Windows >= 0.76.0 can load the same module from both Old and New Architecture apps.

## Setup

1. Make sure you've [set up your machine for React Native for Windows development](https://microsoft.github.io/react-native-windows/docs/rnw-dependencies)
2. Clone this repo to your machine
3. Run `yarn` to download dependencies
4. Run `yarn prepare` to compile the TypeScript

## Run Examples

To run the New Architecture (aka. WinAppSDK) example app, run:

```
yarn example windows
```

To run the Old Architecture (aka. UWP) example app, run:

```
yarn example-old windows
```

If everything worked, you should be running a new app with the text `Result: 21`.

## Contents

The repo contains three node packages:
1. `native-module-sample`: a module which defines a simple `multiply()` method and provides a native Windows implementation
2. `example`: a React Native for Windows app targeting the New Architecture via the Windows App SDK
3. `example-old`: a React Native for Windows app targeting the Old Architecture via the Universal Windows Platform

## Creation History

1. Created a new repo using `react-native-create-library` and its `module-mixed` template
2. Simplified the repo by removing the `ios` and `android` platform implementations
3. Simplified the repo by removing as many "dev inner-loop" packages as possible
4. Added `react-native-windows` as a dependency
5. Create a new windows implementation via `react-native init-windows --template cpp-lib`
6. Modified the created code to build the `example` app.
7. Added the `example-old` app by copying the `example` app and running `react-native init-windows --template old/uwp-cpp-app`
