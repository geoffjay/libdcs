if get_option('shared-lib')
  libtype = 'shared_library'
else
  libtype = 'static_library'
endif

libdcs_sources = [
  'object.c',
]

libdcs_headers = [
  'object.h',
]

libdcs_public_headers = [
  'dcs.h',
#]
#
#libdcs_private_headers = [
  'common.h',
  'macros.h',
  'util.h',
]

libdcs = build_target('dcs',
       sources: libdcs_sources + libdcs_headers,
  dependencies: libdcs_deps,
   target_type: libtype,
   install_dir: [true],
       install: true,
)

#install_headers(libdcs_public_headers)
install_headers(libdcs_public_headers + libdcs_headers, subdir: 'dcs')

dep_libdcs = declare_dependency(
            link_with: libdcs,
  include_directories: include_directories('.'),
)

pkg = import('pkgconfig')
pkg.generate(
    libraries: libdcs,
      version: meson.project_version(),
         name: 'dcs',
  description: 'libdcs objects and core functionality',
)
