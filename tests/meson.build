tests_inc = [src_inc, top_inc, inc_dir]

env = environment()
env.set('G_TEST_SRCDIR', meson.current_source_dir())
env.set('G_TEST_BUILDDIR', meson.current_build_dir())
env.set('GSETTINGS_SCHEMA_DIR', join_paths(meson.build_root(), 'data'))
env.set('GSETTINGS_BACKEND', 'memory')
env.set('G_DEBUG', 'gc-friendly')
env.set('MALLOC_CHECK_', '2')
# Guaranteed to be random
env.set('MALLOC_PERTURB_', '4')

test_items = [
  'utils',
  'settings',
  'plain-note',
  'note-buffer'
]

foreach item: test_items
  t = executable(
    item,
    item + '.c',
    include_directories: tests_inc,
    link_with: libgnotes,
    dependencies: pkg_dep
  )
  test(item, t, env: env)
endforeach

