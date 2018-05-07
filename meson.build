project('libdcs', ['c'],
  default_options: [
    'buildtype=release',
    'default_library=shared',
  ],
  version: '0.1.0'
)

libdcs_version = meson.project_version()
version_arr = libdcs_version.split('.')
libdcs_version_major = version_arr[0]
libdcs_version_minor = version_arr[1]
libdcs_version_micro = version_arr[2]
if version_arr.length() == 4
  libdcs_version_nano = version_arr[3]
else
  libdcs_version_nano = 0
endif

apiversion = '0.1'
soversion = 0
libversion = '@0@.@1@.0'.format(soversion, libdcs_version_minor.to_int() * 100 + libdcs_version_micro.to_int())

prefix = get_option('prefix')
libdcs_bindir = join_paths(prefix, get_option('bindir'))
libdcs_datadir = join_paths(prefix, get_option('datadir'))
libdcs_libdir = join_paths(prefix, get_option('libdir'))
libdcs_localedir = join_paths(prefix, get_option('localedir'))
libdcs_sysconfdir = join_paths(prefix, get_option('sysconfdir'))

dep_bsd = dependency('libbsd')

libdcs_deps = [
  dep_bsd,
]

makedata = configuration_data()
  makedata.set('VERSION', libdcs_version)
if version_arr.length() == 4
  makedata.set('TAG', 'HEAD')
else
  makedata.set('TAG', libdcs_version)
endif

configure_file(
          input: 'Makefile.in',
         output: 'Makefile',
  configuration: makedata,
)

subdir('src')

if get_option('enable-docs')
  doxygen = find_program('doxygen', required : false)
  if doxygen.found()
    subdir('doc')
  else
    warning('Documentation was enabled, but doxygen is not available')
  endif
endif
