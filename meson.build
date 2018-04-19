project('libdcs', ['c'],
  default_options: [
    'buildtype=release',
    'default_library=shared',
  ],
  version: '0.1.0'
)

dep_bsd = dependency('libbsd')

libdcs_deps = [
  dep_bsd,
]

subdir('src')
subdir('examples')
subdir('tests')
