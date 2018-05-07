doxyfile_conf = configuration_data()
doxyfile_conf.set('PACKAGE_NAME', meson.project_name())
doxyfile_conf.set('PACKAGE_VERSION', meson.project_version())
doxyfile_conf.set('top_srcdir', meson.source_root())
doxyfile_conf.set('top_builddir', meson.build_root())

if find_program('dot', required: false).found()
  doxyfile_conf.set('HAVE_DOT', 'YES')
else
  doxyfile_conf.set('HAVE_DOT', 'NO')
endif

inputs = ''
foreach h : libdcs_headers
  inputs += ' ' + join_paths(meson.source_root(), 'src', 'dcs', h)
endforeach
foreach h : libdcs_sources
  inputs += ' ' + join_paths(meson.source_root(), 'src', 'dcs', h)
endforeach

doxyfile_conf.set('inputs', inputs)

doxyfile = configure_file(
          input: 'Doxyfile.in',
         output: 'Doxyfile',
  configuration: doxyfile_conf,
        install: false
)

docdir = join_paths(libdcs_datadir, 'doc')

html_target = custom_target('libdcs-docs',
        input: [ doxyfile ],
       output: [ 'html' ],
      command: [ doxygen, doxyfile ],
      install: true,
  install_dir: join_paths(docdir, 'libdcs')
)
