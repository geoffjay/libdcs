# OpenDCS - libdcs

C99 compatible library of things for OpenDCS.

## Dependencies

### Fedora

```sh
dnf install libbsd-devel libcmocka-devel
```

## Install

```sh
meson _build
ninja -C _build
ninja -C _build install
```

## Develop

_TODO_

```sh
ninja -C _build test
```
