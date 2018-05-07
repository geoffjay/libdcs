if get_option('enable-tests')

  dep_mocka = dependency('cmocka')

  test_deps = libdcs_deps + [
    dep_libdcs,
    dep_mocka,
  ]

  test('object',
    executable('object-test', 'object-test.c',
      dependencies: test_deps
    )
  )

endif
